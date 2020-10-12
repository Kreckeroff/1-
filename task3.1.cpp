//
//  main.cpp
//  task3.1
//
//  Created by Egor Grebennikov on 28.09.2020.
//  Copyright © 2020 Egor Grebennikov. All rights reserved.
//
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int Inputint(int m, int M) {
    for (;;) {
        float valuea;
        cout<<"Введите число. \n";
        if ((cin >> valuea).good() && (m <= valuea) && (valuea <= M)&&(floor(valuea)==valuea)){
            return valuea;
            break;
        }
        if (cin.fail()) {
            cin.clear();
            cout << "Неверный ввод, повторите. \n";
            
        }
        else {
            cout << "Число вне допустимого диапазона значений. Повторите ввод. \n";
            
        }
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        
    }
}
double Inputfloat(int m, int M) {
    for (;;) {
        float valuea;
        cout<<"Введите число. \n";
        if ((cin >> valuea).good() && (m <= valuea) && (valuea <= M)){
            return valuea;
            break;
        }
        if (cin.fail()) {
            cin.clear();
            cout << "Неверный ввод, повторите. \n";
            
        }
        else {
            cout << "Число вне допустимого диапазона значений. Повторите ввод. \n";
            
        }
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        
    }
}

int main(int argc, const char * argv[]) {
    float result;
    int S = Inputint(1, 2000000);
    int n = Inputint(1, 2000000);
    float p = Inputfloat(1, 2000000);
    result = (S*(p/100)*pow(1+(p/100), n))/(12*(pow(1+(p/100), n)-1));
    cout<<"m = "<<result<<endl;
    return 0;
}
