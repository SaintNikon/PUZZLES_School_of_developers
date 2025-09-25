#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int w; 
    int h; 
    cin >> w >> h; cin.ignore();
    int n; 
    cin >> n; cin.ignore();
    int x0;
    int y0;
    cin >> x0 >> y0; cin.ignore();
    
    int x_min = 0;
    int x_max = w - 1;
    int y_min = 0;
    int y_max = h - 1;

    while (1) {
        string bomb_dir; 
        cin >> bomb_dir; cin.ignore();
         if (bomb_dir.find('U') != string::npos) {
            y_max = y0 - 1;
         }
         else if (bomb_dir.find('D') != string::npos) {
            y_min = y0 + 1;
         }
        if (bomb_dir.find('L') != string::npos) {
            x_max = x0 - 1;
         }
         else if (bomb_dir.find('R') != string::npos) {
            x_min = x0 + 1;
         }
         x0 = (x_min + x_max) / 2;
         y0 = (y_min + y_max) / 2;

        cout << x0 << " " << y0 << endl;
    }
}
