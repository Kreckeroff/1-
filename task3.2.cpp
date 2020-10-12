//
//  main.cpp
//  task3.2
//
//  Created by Egor Grebennikov on 12.10.2020.
//  Copyright © 2020 Egor Grebennikov. All rights reserved.
//

#include <iostream>
#include <cmath>


float Inputint(int m, int M) {
    for (;;) {
        float valuea;
        std::cout<<"Введите число. \n";
        if ((std::cin >> valuea).good() && (m <= valuea) && (valuea <= M)){
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
    std::cout<<"Введите S \n";
    float S = Inputint(1, 2000000);
    std::cout<<"Введите n \n";
    float n = Inputint(1, 2000000);
    std::cout<<"Введите m \n";
    float m = Inputint(1, 2000000);
    double result = ((pow(((12 * m * n)/S),1 / n)-1)*100);
    std::cout<<"Процент p = \n"<<result<<std::endl;
    
    
}
