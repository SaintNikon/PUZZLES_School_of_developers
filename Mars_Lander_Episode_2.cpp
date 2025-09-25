#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{
    int surface_n; 


    cin >> surface_n; cin.ignore();
    vector<vector<int>>  coord(surface_n, vector<int>(2));
    for (int i = 0; i < surface_n; i++) {
        int land_x;
        int land_y; 
        cin >> land_x >> land_y; cin.ignore();
        coord[i][0] = land_x;
        coord[i][1] = land_y;
    }
    int x_min_area, x_max_area, y_area;
    for (size_t i = 0; i < surface_n; i++) {
        if(coord[i][1] == coord[i+1][1] & coord[i+1][0] - coord[i][0] >= 1000) {
            x_min_area = coord[i][0];
            x_max_area = coord[i + 1][0];
            y_area = coord[i][1];
            break;
        }
    }

    while (1) {
        int x;
        int y;
        int h_speed;
        int v_speed;
        int fuel; 
        int rotate; 
        int power; 
        cin >> x >> y >> h_speed >> v_speed >> fuel >> rotate >> power; cin.ignore();

        if(x - x_min_area < - 300 and h_speed < 40) {
            rotate = -50;
            power = 4;
        }
        else if (x - x_min_area < - 300 and h_speed >= 40 and h_speed <= 60) {
            rotate = 0;
            if (v_speed < 2) power = 4;
            else power = 0;
        }
        else if (x - x_min_area < - 300 and h_speed >= 60) {
            rotate = 50;
            power = 4;
        }
        else if( x >= x_min_area and x <= x_max_area and h_speed > 5) {
            rotate = 50;
            power = 4;
        }
        else if( x >= x_min_area and x <= x_max_area and h_speed < -5) {
            rotate = -50;
            power = 4;
        }
        else if( x >= x_min_area and x <= x_max_area and h_speed > -5 and h_speed < 5) {
            rotate = 0;
            power = 3;
            if (v_speed <= -40) power = 4;
            else power = 3;
        }
        else if(x - x_max_area > 300 and h_speed > - 40) {
            rotate = 50;
            power = 4;
        }
        else if (x - x_max_area > 300 and h_speed <= - 40 and h_speed >= -60) {
            rotate = 0;
            if (v_speed < 2) power = 4;
            else power = 0;
        }
        else if (x - x_max_area > 300 and h_speed <= -60) {
            rotate = -50;
            power = 4;
        }
   
        cout << rotate << " " << power << " " << endl;
    }
}
