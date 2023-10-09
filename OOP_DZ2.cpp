#include <iostream>
#include <ctime>
#include <cmath>

using namespace std;

int main(){
    setlocale(LC_ALL, "Russian");
    srand(time(NULL));

    double x, y, max = 5.0, min = -5.0, rad, u_x, u_y;
    int sum_of_points = 0;

    for(int i = 1; i<=5; i++){
        cout << "Сделайте " << i << "-ый выстрел:" << endl;

        cin >> u_x >> u_y;
        
        x = rand() % 100;
        x = (min + (x / 100) * (max - min));
        u_x += x;

        y = rand() % 100;
        y = (min + (y / 100) * (max - min));
        u_y += y;

        rad = sqrt(pow(u_x,2) + pow(u_y,2));

        for(int i = 0; i < max - (int)rad; i++){
            sum_of_points = -(~sum_of_points);
        }

        //cout << u_x << " | " << u_y << " | " << rad << " | " << sum_of_points << endl;

    }
    if (sum_of_points >= 10){
        cout << sum_of_points << " очков" << " - Мегахорош";
    }else {
        cout << sum_of_points << " очков" << " - Лузер";
    }
    return 0;
}