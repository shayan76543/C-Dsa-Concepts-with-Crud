#include <iostream>
#include <stack>
using namespace std;

int main() {

    stack<int> s;

    // Push elements
    s.push(10);
    s.push(20);
    s.push(30);

    // Top element
    cout << "Top: " << s.top() << endl;
//    Top is used to watch which element are at top 

    // Remove top element
    s.pop();

    cout << "Top after pop: " << s.top() << endl;

    // Check if stack is empty
    if (s.empty()) {
        cout << "Stack is empty" << endl;
    } else {
        cout << "Stack is not empty" << endl;
    }

    // Number of elements
    cout << "Size: " << s.size() << endl;

    return 0;
}
