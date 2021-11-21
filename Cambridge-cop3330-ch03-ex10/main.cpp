/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Kameryn Cambridge
 */
#include "std_lib_facilities.h"
#include <iostream>

int main(){
    //declare variables
    double x, y, result;
    String operation;

    cout << "Enter an operation to perform: ";
    cin >> operation;

    cout << "Enter values: ";
    cin >> x >> y;

    //print results based on operation picked
    if(operation == "+"){
        result = x + y;
        cout << result;
    }
    else if(operation == "*"){
        result = x * y;
        cout << result;
    }
    else if(operation == "-"){
        result = x - y;
        cout << result;
    }
    else if(operation == "/"){
        result = x / y;
        cout << result;
    }

    return 0;    
}