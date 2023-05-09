#include <iostream>
#include <string>
using namespace std;

int main(){
    // Complete the program
    string a, b;
    cin >> a >> b;
    int l1 = a.size();
    int l2 = b.size();
    string c = a + b;

    cout << l1 << " " << l2 << endl;
    cout << c << endl;

    swap(a[0], b[0]);
    cout << a << " " << b;

    return 0;
}