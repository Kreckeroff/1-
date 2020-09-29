//
//  main.cpp
//  task1.4
//
//  Created by Egor Grebennikov on 10.09.2020.
//  Copyright © 2020 Egor Grebennikov. All rights reserved.
//

#include <iostream>
#include <cmath>
 
using namespace std;
 
void exit();

int main(){
    double a,b,c,d,x1,x2;
    cout<<"это программа находить значение x в уравнениях типа ax^2 + bx + c = 0"<<endl;
    cout << "Введите a \n";
    cin >> a;
    cout << "Введите b \n";
    cin >> b;
    cout << "Введите c \n";
    cin >> c;
    if(a == 0){
        try{
            if (b == 0 and c != 0){
                throw 123;
            
            }
            
        }
        catch (int q){
            cout<< "результат будет недействителен, "<<"Ошибка № "<<q<<" - на 0 делить нельзя!"<<endl;
            exit(1);
            
        }
        if( b == 0 and c == 0){
            cout<<"x может принимать любые значения"<<endl;
            exit(1);
            
        }
        x1 = (-c)/b;
        cout <<"x1 = "<<x1<<endl;
        exit(1);
        
    }
    d = pow(b,2) - 4 * a * c;
    if (d > 0){
        x1 = ((-b) + sqrt(d)) / (2 * a);
        x2 = ((-b) - sqrt(d)) / (2 * a);
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
        
    }
    if (d == 0){
        x1 = -(b / (2 * a));
        cout << "x1 = x2 = " << x1 << endl;
        
    }
    if (d < 0)
        cout << "D < 0, Действительных корней не существует";
    
}
