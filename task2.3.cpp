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
    double  b, result, y, x;
    cout << "введите значение x\n";
    cin >> x;
    cout << "введите значение y\n";
    cin >> y;
    cout << "введите значение b\n";
    cin >> b;
    try {
        if(b < x ) {
            throw 100;
            
        }
        if( b <= y) {
            throw 101;
            
        }
        
    }
    catch (int q) {
        if( q == 100)
        cout<<"Ошибка № "<<q<< " под корнем не может быть отрицательное число"<< endl;
        else
        cout<<"Ошибка №"<<q<<" логарифм не определен"<< endl;
        exit(1);
        
    }
    result = log(b - y) * sqrt(b - x);
    cout << "z = "<< result << endl;
}
