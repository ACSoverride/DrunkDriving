#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
    //asking the user for the various inputs
    double consume;
    double weight;
    double hours;
    double BAC;
    cout << "\nPlease enter the amount of beers consumed";
    cin >> consume;
    cout << "\nPlease enter your weight";
    cin >> weight;
    cout << "Please enter the number of hours in which the beers were consumed";
    cin >> hours;
    //doing the calculator
    BAC = (((consume*0.42)*8)/weight)-(hours*0.017);
    //setting up a conditional to tell you if your safe to drive or not
    if (BAC > 0.08){
        cout << "Since your BAC is " << fixed << setprecision(2) << BAC << " you are not safe to drive";
    }
    else{
        cout << "Since your BAC is " << fixed << setprecision(2) << BAC << " you are safe to drive";
    }
    return 0;
}
