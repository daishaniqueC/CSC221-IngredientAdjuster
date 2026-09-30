// This program adjusts a cookie recipe based on the number of cookies the user wants to make

#include <iostream> 
using namespace std;

int main()
{
    const int originalCookies = 48;
    const double originalSugar = 1.5;
    const double originalButter = 1.0;
    const double originalFlour = 2.75;

    int userCookies;

    cout << "Please enter the number of cookies you would like to make: ";
    cin >> userCookies;

    double multiplier = static_cast<double>(userCookies) / originalCookies;
    double userSugar = originalSugar * multiplier;
    double userButter = originalButter * multiplier;
    double userFlour = originalFlour * multiplier;

    cout << "Sugar needed: " << userSugar << " cups" << endl;
    cout << "Butter needed: " << userButter << " cups" << endl;
    cout << "Flour needed: " << userFlour << " cups" << endl;

    return 0; 
}
