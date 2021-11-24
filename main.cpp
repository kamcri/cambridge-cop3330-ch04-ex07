/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Kameryn Cambridge
 */

#include "std_lib_facilities.h"
#include <iostream>

double convert_number(string str);

int main(){
    //simple calculator. add, subtract, divide, and multiply
    string num1, num2;
    char operation;
    double result;

    cout << "Enter 2 single digit numbers: \n";
    cin >> num1 >> num2;

     //convert string input to double 
    double x = convert_number(num1);
    double y = convert_number(num2);

    if(x > 9 || y > 9){
        cout << "Please enter single digit numbers only.\n";
        return 0;
    }

    cout << "Enter an operation: \n";
    cin >> operation;


    if(operation == '+'){
        result = x+y;
        cout << "The sum of " << x << " and " << y <<" is " << result << ".\n";
    }
    if(operation == '-'){
        result = x-y;
        cout << "The difference of " << x << " and " << y <<" is " << result << ".\n";
    }
    if(operation == '/'){
        result = x/y;
        cout <<"The quotient of " << x << " and " << y << " is " << result << ".\n";
    }
    if(operation == '*'){
        result = x*y;
        cout <<"The product of " << x << " and " << y << " is " << result << ".\n";
    }
    
    return 0;
}

double convert_number(string str){
    double num;
    //returns a double
    if(str == "zero" || str == "0"){
        num = 0;
    }
    else if(str == "one" || str == "1"){
        num = 1;
    }
    else if(str == "two" || str == "2"){
        num = 2;
    }
    else if(str == "three" || str == "3"){
        num = 3;
    }
    else if(str == "four" || str == "4"){
        num = 4;
    }
    else if(str == "five" || str == "5"){
        num = 5;
    }
    else if(str == "six" || str == "6"){
        num = 6;
    }
    else if(str == "seven" || str == "7"){
        num = 7;
    }
    else if(str == "eight" || str == "8"){
        num = 8;
    }
    else if(str == "nine" || str == "9"){
        num = 9;
    }
    else{
        num = stod(str);
        cout << num << " is not a single digit number. ";
    }
    return num;
}