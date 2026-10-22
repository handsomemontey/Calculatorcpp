#pragma once
#include <iostream> 

class CalcuClass {
public:

    int Summation(const int array[], int size) {
        if (size <= 0) return 0;
        
        int total = 0;

        for (int i = 0; i < size; i++) {
            total += array[i];
        }

        return total;
    }

    int Multiply(const int array[], int size) {

        if (size <= 0) return 0;
        
        int result = array[0];
        for (int i = 1; i < size; i++) {
            result *= array[i];
        }
        return result;
    }

    double Division(const int array[], int size) {
        if (size <= 0) return 0.0;

        double result = array[0];
        for (int i = 1; i < size; i++) {
            if (array[i] == 0) {
                std::cout << "\n You can't divide any number by zero \n";
                return 0.0;
            }
            result /= array[i];
        }
        return result;
    }

    int Subtract(const int array[], int size) {
        if (size <= 0) return 0;

        int result = array[0];
        for (int i = 1; i < size; i++) {
            result -= array[i];
        }
        return result;
    }
};
