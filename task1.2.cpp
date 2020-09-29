//
//  main.cpp
//  task1.2
//
//  Created by Egor Grebennikov on 08.09.2020.
//  Copyright © 2020 Egor Grebennikov. All rights reserved.
//

#include <iostream>

using namespace std;

float a, b, c;
char sign;

int main(){
    cout << "введите число a :\n";
    cin >> a;
    cout << " введите число b:\n";
    cin >> b;
    cout <<"введите действие, которое хотите совершить с a и b\n или напишите '0' чтобы выйти из программы\n";
    cin >> sign;
    switch(sign)
    {
        case'+':{
            c = a + b;
            cout << "a + b = " << c;
            break;
            
        }
        case'-':{
            c = a - b;
            cout << "a - b = " << c;
            break;
            
        }
        case'*':{
            c = a * b;
            cout << "a * b = " << c;
            break;
            
        }
        case'/':
        {
            c = a / b;
            cout << "a / b = " << c;
            break;
            
        }
        case'0':{
            break;
            
        }
            
    }
    
}
