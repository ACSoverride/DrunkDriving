#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
//Author: Matthew Shapiro
//Class : CSI 140-01
// Assignment : Drunk Driving Calculator
// Date Assigned : 9/18/22
// Due Date : Due - 9/25/22 11:59
// Description : A program that calculates your BAC and whether you are safe to drive
//A brief description of the purpose of the program.
// Certification of Authenticity :
//I certify that this is entirely my own work, except where I have given fully documented
// references to the work of others.I understand the definition and
// consequences of plagiarism and acknowledge that the assessor of this assignment
// may, for the purpose of assessing this assignment :
// -Reproduce this assignment and provide a copy to another member of
// academic staff; and / or
// - Communicate a copy of this assignment to a plagiarism checking service
// (which may then retain a copy of this assignment on its database for
// the purpose of future plagiarism checking)
//FYI VERY IMPORTANT: As a firm believer in the open source software movement, and for version history features this project is publicly
//available on my github ACSoverride. If your plagiarism checker fires off because of that I can prove that I am the owner of that github account/repo.
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
