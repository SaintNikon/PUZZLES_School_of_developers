#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int light_x; 
    int light_y;
    int initial_tx; 
    int initial_ty; 
    cin >> light_x >> light_y >> initial_tx >> initial_ty; cin.ignore();

    while (1) {
        int remaining_turns; 
        cin >> remaining_turns; cin.ignore();
        string move = "";

        if (light_y - initial_ty > 0) {
            move.append("S");
            initial_ty++;
        }
        else if (light_y - initial_ty < 0){
            move.append("N");
            initial_ty--;
        }
        if (light_x - initial_tx > 0) {
            move.append("E");
            initial_tx++;
        }
        else if (light_x - initial_tx < 0){
            move.append("W");
            initial_tx--;
        }
        
        cout << move << endl;
    }
}
