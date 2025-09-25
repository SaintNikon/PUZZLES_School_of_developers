#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int width;
    cin >> width; cin.ignore();
    int height; 
    cin >> height; cin.ignore();
    int nodes[width][height];
    for (int y = 0; y < height; y++) {
        string line;
        getline(cin, line); 
        for (int x = 0; x < width; x++) {
            if (line[x] == '0') nodes[x][y] = 1;
            else nodes[x][y] = 0;
        }
    }
    for (int y = 0; y < height; y++) {
        for (int x = 0; x < width; x++) {
            if (nodes[x][y] == 1) {
                cout << x << " " << y << " ";
                 bool x_node = false, y_node = false;
                
                 for (int i = x+1; i < width; i++){
                    if ((i != width) and (nodes[i][y] == 1)) {
                        cout << i << " " << y << " ";
                        x_node = true;
                        break;
                    }
                }
                if (!x_node) cout << -1 << " " << -1 << " ";

                for (int i = y+1; i < height; i++){
                    if ((i != height) and (nodes[x][i] == 1)) {
                        cout << x << " " << i << endl;
                        y_node = true;
                        break;
                    }
                }
                if (!y_node) cout << -1 << " " << -1 << endl;
            }    
        }
    }
}
