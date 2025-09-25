#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{
    int n;
    cin >> n; cin.ignore();
    if (n == 0) {
        cout << 0 << endl;
        return 0;
    }
    int temp = 6000;
    for (int i = 0; i < n; i++) {
        int t; 
        cin >> t; cin.ignore();
         
        if (t == 0) temp = 0;
        else if (abs(temp) == abs(t)) {
            if (t > 0 || temp < 0) temp = t; 
        }
        else if (abs(t) < abs(temp)) temp = t;
    }
    cout << temp << endl;
}
