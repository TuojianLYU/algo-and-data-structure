#include <iostream>
#include <mutex>
#include <thread>
#include <vector>

using namespace std;

mutex mtx;
vector<int> completed = {0, 0, 0, 0, 0};

void barista(int numOrders) {
  // lock_guard<typename Mutex> lock(mtx);
  for (int i = 0; i < numOrders; i++) {
    {
      lock_guard<mutex> lock(mtx);
      completed[i] = 1;
      cout << "Barista completed orderID " << i << endl;
    }
    this_thread::sleep_for(chrono::seconds(1));
  }
}

void waiter(int numOrders) {
  while (true) {
    for (int i = 0; i < completed.size(); i++) {
      lock_guard<mutex> lock(mtx);
      if (completed[i] != 0) {
        completed[i] = 0;
        cout << "Waiter has served orderID " << i << endl;
        numOrders--;
        if (numOrders == 0) {
          return;
        }
      }
    }
  }
}

int main() {

  int numOrders = 5;
  thread baristaThread(barista, numOrders);
  thread waiterThread(waiter, numOrders);

  baristaThread.join();
  waiterThread.join();
  return 0;
}