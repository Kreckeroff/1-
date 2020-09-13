//
//  main.cpp
//  task1.3
//
//  Created by Egor Grebennikov on 08.09.2020.
//  Copyright © 2020 Egor Grebennikov. All rights reserved.
//

#include <iostream>
#include <cmath>
 
using namespace std;
 
void exit();

int main(){
    double b,c,x;
    cout <<"эта программа находит значение x в уравнениях типа bx + c = 0"<<endl;
    cout << "Введите b \n";
    cin >> b;
    cout << "Введите c \n";
    cin >> c;
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
    
    x = (-c)/b;
    cout <<"x = "<<x<<endl;
    
}
