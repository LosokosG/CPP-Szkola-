#include <iostream>

using namespace std;


int main()
{
    int l = 0;
    int x = 2;
    int n;
    int d;
    bool f;
    cout << "Podaj ile liczb" << endl;
    cin >> n;
    
    while (l < n) {
        f = true;
        for (int d = 2; d <= x - 1; d++) {
            if (x % d == 0) {
                f = false;
            }
        }
        if (f==true) {
            cout << x << "jest pierwsze" << endl;
            l = l + 1;
        }
        x = x + 1;
    } 
}
