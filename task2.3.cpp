//
//  main.cpp
//  task2.3
//
//  Created by Egor Grebennikov on 08.09.2020.
//  Copyright © 2020 Egor Grebennikov. All rights reserved.
//

#include <iostream>
#include <cmath>

using namespace std;

void exit();

int main() {
F:
    cout<<"данная программа находить значение 'z' в уравнение \n";
    int m = -2147483648, M = 2147483647;
    double  b, result, y, x;
    for (;;) {
        float valuea;
        cout<<"Введите значение для x. \n";
        if ((cin >> valuea).good() && (m <= valuea) && (valuea <= M)){
            x = valuea;
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
    for (;;) {
        float valuea;
        cout<<"Введите значение для y. \n";
        if ((cin >> valuea).good() && (m <= valuea) && (valuea <= M)){
            y = valuea;
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
    for (;;) {
        float valuea;
        cout<<"Введите значение для b. \n";
        if ((cin >> valuea).good() && (m <= valuea) && (valuea <= M)){
            b = valuea;
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
    try {
        if(b <= y and b < x) {
                   throw 132;
               }
        
        if(b < x ) {
            throw 130;
            
        }
        if(b <= y) {
            throw 131;
            
        }
        
    }
    catch (int q) {
        if( q == 130)
        cout<<"Ошибка № "<<q<< " под корнем не может быть отрицательное число"<< endl;
        else if(q == 131)
        cout<<"Ошибка №"<<q<<" логарифм не определен"<< endl;
        else
            cout<<"Ошибка № "<<q<< " под корнем не может быть отрицательное число и логарифм не определен"<< endl;
        goto F;
        
    }
    result = log(b - y) * sqrt(b - x);
    cout << "z = "<< result << endl;
}
