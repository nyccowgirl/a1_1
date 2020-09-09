/*
Trang Hoang
9/8/20
Assignment 1.1

This program asks the user for a date in a specified format and determines whether it is a
magical date based on if the product of the month and day equals the last two digits of the
year.
 
a1_1.cpp

Created by nyccowgirl on 9/8/20.
Copyright © 2020 nyccowgirl. All rights reserved.
*/


#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int month;      // the month
    int day;        // the day
    int year;       // the last two digits of the year
    char ch;        // the slash
    
    cout << "Enter a date in the format month/day/2-digit-year (m/d/yy): ";
    cin >> month >> ch >> day >> ch >> year;
    cin.ignore();
    
    if ((month * day) == year) {
        cout << "That is a magic date!" << endl;
    } else {
        cout << "That is not a magic date so go out and make it magical!" << endl;
    }
    
    return 0;
}


/*
 
 Enter a date in the format month/day/2-digit-year (mm/dd/yy): 8/30/71
 That is not a magic date so go out and make it magical!
 Program ended with exit code: 0
 
 Enter a date in the format month/day/2-digit-year (m/d/yy): 2/10/20
 That is a magic date!
 Program ended with exit code: 0
 
 */
