//
//  main.cpp
//  task2.1
//
//  Created by Egor Grebennikov on 08.09.2020.
//  Copyright © 2020 Egor Grebennikov. All rights reserved.
//

#include <iostream>
#include <cmath>
#define M_PI 3.1415

using namespace std;
 
int main(){
    cout<<"Данная программа считает объем и полную поверхность усеченного конуса"<<endl;
    int m = 0, M = 2147483647;
    double V, S, h, R, r, l;
    for (;;) {
        float valuea;
        cout<<"Введите значение для h. \n";
        if ((cin >> valuea).good() && (m < valuea) && (valuea <= M)){
            h = valuea;
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
        cout<<"Введите значение переменной l. \n";
        if ((cin >> valuea).good() && (m < valuea) && (valuea <= M)){
            l = valuea;
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
        cout<<"Введите значение переменной R. \n";
        if ((cin >> valuea).good() && (m < valuea) && (valuea <= M)){
            R = valuea;
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
        cout<<"Введите значение переменной r. \n";
        if ((cin >> valuea).good() && (m < valuea) && (valuea <= M)){
            r = valuea;
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
    V = ((1/(3 * M_PI * h))*((pow(R,2) + R * r + pow(r,2))));
    S = M_PI * (pow(R,2) + (R + r)* l + pow(r,2));
    cout <<"Объем фигуры равен: \n";
    cout << V << endl;
    cout << "полная поверхность фигуры равна: \n";
    cout << S << endl;
    
}
