//
//  main.cpp
//  PRG-3-4-Average-Rainfall
//
//  Created by Keith Smith on 10/6/17.
//  Copyright © 2017 Keith Smith. All rights reserved.
//
//  Write a program that calculates the average rainfall for three months. The program
//  should ask the user to enter the name of each month, such as June or July, and the
//  amount of rain (in inches) that fell each month. The program should display a message
//  similar to the following:
//  The average rainfall for June, July, and August is 6.72 inches.

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    //Initialize ints for monthly rainfall which
    //will be measured in inches
    float fltRainfallMonth1,
          fltRainfallMonth2,
          fltRainfallMonth3;
    
    //Initialize strings to hold month names
    string strMonth1,
           strMonth2,
           strMonth3;
    
    //Initialize float to store total average rainfall
    float fltAverageRainfall;
    
    // Configure decimal for two points of precision
    cout << setprecision(2) << fixed << showpoint;
    
    //Get information for month one + data validation
    cout << "Please enter the name of the first month: " << endl;
    cin >> strMonth1;
    cout << "Please enter the total rainfall for " << strMonth1 << endl;
    cin >> fltRainfallMonth1;
    while(!cin || fltRainfallMonth1 < 0 || fltRainfallMonth1 > 2000)
    {
        cout << "Please enter a value between 0 and 2000 inches:\n";
        cin.clear();
        cin.ignore();
        cin >> fltRainfallMonth1;
    }
    
    //Get information for month two
    cout << "Please enter the name of the second month: " << endl;
    cin >> strMonth2;
    cout << "Please enter the total rainfall for " << strMonth2 << endl;
    cin >> fltRainfallMonth2;
    while(!cin || fltRainfallMonth2 < 0 || fltRainfallMonth2 > 2000)
    {
        cout << "Please enter a value between 0 and 2000 inches:\n";
        cin.clear();
        cin.ignore();
        cin >> fltRainfallMonth2;
    }
    
    //Get information for month three
    cout << "Please enter the name of the third month: " << endl;
    cin >> strMonth3;
    cout << "Please enter the total rainfall for " << strMonth3 << endl;
    cin >> fltRainfallMonth3;
    while(!cin || fltRainfallMonth3 < 0 || fltRainfallMonth3 > 2000)
    {
        cout << "Please enter a value between 0 and 2000 inches:\n";
        cin.clear();
        cin.ignore();
        cin >> fltRainfallMonth3;
    }
    
    //Perform calculation for average rainfall
    fltAverageRainfall = (fltRainfallMonth1 + fltRainfallMonth2 + fltRainfallMonth3) / 3.0f;
    
    cout << "The average rainfall for months " << strMonth1 << ", "
    << strMonth2 << ", and "
    << strMonth3 << " is "
    << fltAverageRainfall << " inches\n";
    
    return 0;
}


