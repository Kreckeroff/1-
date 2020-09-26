//
//  main.cpp
//  task2.2
//
//  Created by Egor Grebennikov on 08.09.2020.
//  Copyright © 2020 Egor Grebennikov. All rights reserved.
//

#include <iostream>
#include <cmath>
#define M_PI 3.14159265358979323846

using namespace std;
void exit();
int main(){
F:
    cout<<"Данная программа считает систему уравнений \n";
    int m = -2147483648, M = 2147483647;
    double a , x, result;
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
        cout<<"Введите значение для a. \n";
        if ((cin >> valuea).good() && (m <= valuea) && (valuea <= M)){
            a = valuea;
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
    if (abs(x)< 1) {
        if(x > 0) {
            result = a*log(abs(x));
            cout <<"W = "<<result<<endl;
            exit(0);
            
        }
        else {
            try {
                if(x <= 0)
                    throw 120;
                
            }
            catch (int q) {
                cout<<"Ошибка № "<<q<<" логарифм не может быть отрицательным или равен 0 \n";
                goto F;
                
            }
        }
    }
    else
        try {
            if( a < pow(x, 2)){
                throw 100;
                
            }
            
        }
        catch (int q) {
            cout<<"Ошибка № "<<q<<" под корнем не может быть отрицательное число"<<endl;
            goto F;
        
    }
    result = sqrt(a - pow(x, 2));
    cout << "W = ";
    cout << result << endl;
    
}
