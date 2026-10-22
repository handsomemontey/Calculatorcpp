#include <iostream>
#include "CalcuClass.h"
#include <string>
using namespace std;

int main() {
    
    CalcuClass calculator;
    
    int selectedOperation = 0;
    int elementSize = 0;

    while(selectedOperation != 5){

        cout << "\n===========================================\n";
        cout << "===============By Umut Irak===============\n";
        cout << "Advisor: Dr. Mohammed Al-hubaishi\n";
        cout << " ~~ WELCOME to Data Structure Algorithms program ~~\n\n";
        cout << "Select or Enter Your Choice from the Menu:\n";
        cout << " 1. + Summation and print the results\n";
        cout << " 2. * Multiply and print the results\n";
        cout << " 3. / Division and print the results\n";
        cout << " 4. - Subtract and print the results\n";
        cout << " 5. Exit\n";
        cout << "=======================================================\n";
        cout << "Your Choice: ";

        cin >> selectedOperation;
        

        if(selectedOperation == 5)
        {
            cout << "Exiting the program..";
            break;
        }

        cout << "Please enter the number of elements you wish to process.";
        cin >> elementSize;

        if(elementSize <= 0){
            cout << "please provide a positive integer";
            continue;
        }
        
        int* elements = new int[elementSize];
        
        cout << "Please enter the elements" << "\n";

        for(int i = 0; i < elementSize; i++){

            cout << "Element" << i + 1 << ": ";

            cin >> elements[i];
        }

        switch(selectedOperation){

            case 1: cout << "The Result is: " << calculator.Summation(elements,elementSize); break;
            case 2 : cout << "The Result is: " << calculator.Multiply(elements,elementSize); break;
            case 3 : cout << "The Result is: " << calculator.Division(elements,elementSize); break;
            case 4 : cout << "The Result is: " << calculator.Subtract(elements,elementSize); break;

        }

        delete[] elements;

        string answer = "";
        cout << " \n Do you want to continue(y for continue n for exit) ?" << endl;
        cin >> answer;

        if(answer == "y"){
            continue;
        }
        else if(answer == "n"){
            break;
        }
        else{
            break;
        }
        
    }

    

    return 0;
}

