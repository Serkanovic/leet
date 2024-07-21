#include <iostream>
#include <list>
#include <cmath>

using namespace std;

/*
kelvin = celsius + 273.15
fahrenheit = celsius * 1.80 + 32.00

*/

int main(){
    float celsius;
    list<float> temp = {};

    cout << "Digite: \n";
    cin >> celsius;

    celsius = abs(celsius);


    temp.push_back(celsius + 273.15);
    temp.push_back((celsius * 1.80) + 32.00);

    for(float i : temp){
        cout << i << endl;
    }

    return 0;
}
