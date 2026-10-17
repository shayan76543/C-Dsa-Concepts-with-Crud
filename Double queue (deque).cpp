#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> dq;

    // Insert at the back
    dq.push_back(10);
    dq.push_back(20);

    // Insert at the front
    dq.push_front(5);

    // Deque: 5, 10, 20

    cout << "Front: " << dq.front() << endl; // 5
    cout << "Back: " << dq.back() << endl;   // 20

    // Remove from the front
    dq.pop_front();

    // Remove from the back
    dq.pop_back();

    // Only 10 remains
    cout << "Remaining: " << dq.front() << endl; // 10

    cout << "Size: " << dq.size() << endl; // 1

    return 0;
}
