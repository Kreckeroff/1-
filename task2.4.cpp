//
//  main.cpp
//  task2.4
//
//  Created by Egor Grebennikov on 08.09.2020.
//  Copyright © 2020 Egor Grebennikov. All rights reserved.
//
#include <cmath>
#include <iostream>
#include <stdlib.h>

using namespace  std;

void exit();

int main(int argc, const char * argv[]){
F:
    float N;
    int m = 0, M = 2147483647;
    for (;;) {
        float valuea;
        cout<<"Введите положительное значение для x. \n";
        if ((cin >> valuea).good() && (m < valuea) && (valuea <= M)){
            N = valuea;
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
        if(!(floor(N)==N))
            throw 140;
        
    }
    catch (int q) {
    cout<<"Ошибка № "<<q<<" вы ввели не целое число \n";
    goto F;
        
    }
    for(int i = 10 ; i > 0 ; i --) {
        N++;
        cout<< N << endl;
            
    }
        
}
