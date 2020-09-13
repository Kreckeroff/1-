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
    double a , x, result;
    cout << "введите значение а\n";
    cin >> a;
    cout << "введите значение x\n";
    cin >> x;
    if (abs(x)< 1){
        result = a*log(abs(x));
        
    }
    else
        try{
            if( a < pow(x, 2)){
                throw 100;
                
            }
            
        }
    catch (int q){
        cout<<"Ошибка № "<<q<<" под корнем не может быть отрицательное число"<<endl;
        exit(1);
        
    }
    result = sqrt(a - pow(x, 2));
    cout << "W = ";
    cout << result << endl;
    
}
