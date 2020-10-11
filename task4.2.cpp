//
//  main.cpp
//  task4.2
//
//  Created by Egor Grebennikov on 11.10.2020.
//  Copyright © 2020 Egor Grebennikov. All rights reserved.
//

#include <iostream>
#include <cmath>

int sign_x(int x){
    if(x > 0){
        return 1;
        
    }
    else if (x < 0){
        return -1;
        
    }
    else
        return 0;
}
int Inputint(int m, int M) {
    for (;;) {
        float valuea;
        std::cout<<"Введите число. \n";
        if ((std::cin >> valuea).good() && (m <= valuea) && (valuea <= M)&&(floor(valuea)==valuea)){
            return valuea;
            break;
        }
        if (std::cin.fail()) {
            std::cin.clear();
           std::cout << "Неверный ввод, повторите. \n";
            
        }
        else {
            std::cout << "Число вне допустимого диапазона значений. Повторите ввод. \n";
            
        }
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        
    }
}
int main(int argc, const char * argv[]) {
    int m = -2147483648, M = 2147483647;
    int x = Inputint(m, M);
    int result = sign_x(x);
    std::cout<<result<<std::endl;
    return 0;
}
