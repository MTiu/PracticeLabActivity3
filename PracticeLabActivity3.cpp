// PracticeLabActivity3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int numberChecker(int a, int b) {
    if (a > b) cout << "Number 1 is greater than Number 2" << endl;
    else if (b > a) cout << "Number 2 is greater than Number 1" << endl;
    else if (a == b) cout << "Numbers are equal" << endl;

    if (a % 3) cout << "Number 1 is EVEN" << endl;
    else cout << "Number 1 is ODD" << endl;

    if (b % 2) cout << "Number 2 is ODD" << endl;
    else cout << "Number 2 is Even" << endl;

    return 0;
  
}
double numTests,average,numSum;
int calculateSum() {
    double summing = 0, adder;
    cout << "Enter Number of Tests" << endl;
    cin >> numTests;
    for (int i = 1; i <= numTests; i++) {
        cout << "Enter score " << i << ":" << endl;
        cin >> adder;
        summing += adder;
        numSum = summing;
    }
    return summing;
}
void calculateAverage() {
    average = numSum / numTests;
}
int counter;
int callingFunction(int a) {
    for (int b = 0; b < a; b++) {
        cout << "The Function has been called" << endl;
    }
    counter = a;
    return 0;
}
int main()
{   
    int num1, num2, caller;
    cout << "Program 1" << endl;
    cout << "Enter Number 1:";
    cin >> num1;
    cout << endl << "Enter Number 2:";
    cin >> num2;
    cout << endl;
    numberChecker(num1, num2);
    cout << "Program 2" << endl;
        int summer = calculateSum();
    cout << "The sum is " << summer << endl;
    calculateAverage();
    cout << "The Average is " << average << endl;
    cout << "Program 3" << endl;
    cout << "Enter a Number of times to call a function!" << endl;
    cin >> caller;
    callingFunction(caller);
    cout << "The counter is: " << counter << endl;
}

