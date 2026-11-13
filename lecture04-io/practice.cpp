//• 1. Write a program to input four numbers and display them in reverse order
#include <iostream>
using namespace std;

int main() {

    int numbers[4];
    cout << "please enter four numbers :" << endl;
    for(int i = 0 ; i < 4 ; i++) 
    {
        cin >> numbers[i];
    }
    cout << "your number is : " ;
    for(int i = 0 ; i < 4 ; i++) 
    {
        cout << numbers[i] ;
    }
    cout << endl << endl;

    cout << " the reverse order of the number is :";

    for(int i = 3 ; i >= 0 ; i--)
    {
        cout << numbers[i] ;
    }
    cout << endl;


    return 0;
}