#include <iostream>
using namespace std;

int main() {
    string i, j;
    cin >> i >> j;
    if (i > j) {
        cout << "1" << endl;
    } else if (i < j) {
        cout << "-1" << endl;
    } else {
        cout << "0" << endl;
    }
    system("PAUSE");
    return 0;
}
