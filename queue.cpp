#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;

    // Insert elements at the back
    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Front: " << q.front() << endl; // 10
    cout << "Back: " << q.back() << endl;   // 30
    // Remove the front element
    q.pop();
    cout << "After pop: " << q.front() << endl; // 20
    cout << "Size: " << q.size() << endl;       // 2
    cout << "Is empty? " << q.empty() << endl;  // 0 (false)
    return 0;
}
