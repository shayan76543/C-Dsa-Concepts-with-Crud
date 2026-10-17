//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main() {
//
//    // CREATE
//    vector<int> arr;
//    arr.push_back(20);
//	arr.push_back(30);
//	arr.push_back(40);
//    // READ
//    cout << "Array elements: ";
//   for (int i = 0; i < arr.size(); i++) {
//    cout << arr[i] << " ";
//}
//
//    // UPDATE
//    arr[1] = 25;
//
//    // DELETE
//    arr.erase(arr.begin() + 2);
//
//    cout << "\nAfter Update and Delete: ";
//   for (int i = 0; i < arr.size(); i++) {
//    cout << arr[i] << " ";
//}
//
//    return 0;
//}
#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> arr;

    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
    arr.push_back(40);

    // Insert 25 at index 2
    arr.insert(arr.begin() + 2, 25);

    // Display
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
