#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int j,z;

    while (1) {
        j = 0;
        z = 0;
        for (int i = 0; i < 8; i++) {
            int mountain_h;
            cin >> mountain_h; cin.ignore();
            if (mountain_h > j) 
            {
               j = mountain_h;
               z = i;
            }
        }

        cout << z << endl; 
    }
}
