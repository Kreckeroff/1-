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
    double N;
    cout << "введите положительное целое число N :\n";
    cin >> N;
    if (floor(N) == N and N > 0) {
        for(int i = 9 ; i > 0 ; i --)
        {
            N++;
            cout<< N << endl;
            
        }
        
    }
    else {
        cout <<  "вы ввели неверно входные данные \n";
        exit(1);
        
    }
    
}
