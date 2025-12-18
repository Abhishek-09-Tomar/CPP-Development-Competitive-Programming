/*
* Author: Abhishek Tomar
* Date: 18/12/2025

* C++ Identifiers:-
* Identifiers are the unique names assigned to variables, functions, structs or other entities within the program.
*/

#include <iostream>
using namespace std;

void func() {} // creating a function

// create a car identifier used to refer to below class
class Car{
    string Brand;
    string model;
    int year;
};

// getSum identifier is used to call the below function
void getSum(int a, int b){
    int _sum = a + b;
    cout << "The sum is: " << _sum;
}

int main(){
    int val = 3; // creating a variable

    // identifiers used as variable names
    int studentAge = 20;
    double accountBalance = 1000.50;
    string student_Name = "Karan";

    getSum(2, 10);

    return 0;
}


