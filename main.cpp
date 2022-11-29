#include <iostream>
using namespace std;
//test do while 1
int main() {
    int a, b, i, n, m,o;
    cout << "Test do while" << endl;
    cout << "Ile znakow wypisac?" << endl;
    cin >> n;
    cin >> m;
    i=0;
    o=0;
    do {
        cout << "*";
        i=i+1;
        }while(n>i);
    cout << " ";
    do {
        cout << "*";
        o=o+1;
    }while(m>o);

    return 0;
}
