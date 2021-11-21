/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Kameryn Cambridge
 */
#include "std_lib_facilities.h"
#include <iostream>

int main(){
    //declare variable
    cout << "Enter a number: \n";
    int number;
    //get input
    cin >> number;
    //check with modulus
    if(number%2==0)
        cout << number << " is even. It can be divided into 2 equal groups.\n";
    else
        cout << number << " is not even. It cannot be divided into to equal groups.\n";

    return 0;
}