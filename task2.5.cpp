//
//  main.cpp
//  task2.5
//
//  Created by Egor Grebennikov on 08.09.2020.
//  Copyright © 2020 Egor Grebennikov. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, const char * argv[]) {
    double x = -4;
    double result;
    for(int i = 0; i < 17; i++) {
        if(x - 1 != 0){
            result =(pow(x,2) - 2 * x + 2)/(x - 1);
            cout<< "результат для x = "<< x << endl <<"равен: "<< result<<endl<<endl;
            
        }
        try {
            if (x - 1 == 0){
                throw 150;
                
            }
            
        }
        catch(int q) {
            cout <<"результат для x = 1\n"<<"Ошибка №" << q << " - на 0 делить нельзя!!!!" <<endl<<endl;
            
        }
        x = x + 0.5;
        
    }
    
}
