//
//  main.cpp
//  task4.3
//
//  Created by Egor Grebennikov on 11.10.2020.
//  Copyright © 2020 Egor Grebennikov. All rights reserved.
//

#include <iostream>
#include <cmath>

int area1(int x,int y){
    
    int result = x * y;
    return result;
    
}
float area2(int x, int y, int z){
    float p = (x + y + z) * 0.5;
    float result = sqrt(p*(p - x) * ( p - y ) * (p - z));
    return result;
    
}
float area3(int x){
    float result = M_PI * pow(x,2);
    return result;
    
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
    bool q = true;
    do {
        int m = 1, M = 2147483647;
        std::cout<<"Введите фигуру , у которой хотите посчитать площадь \n 1 = площадь прямоугольника \n 2 = площадь треугольника \n 3 = площадь круга \n 0 = выход из программы \n";
        char add;
        std::cin>>add;
        
        switch(add){
            case '1':{
                std::cout<<"Вы выбрали площадь для прямоугольника \n Введите 2 стороны прямоугольника \n";
                
                int x = Inputint(m, M);
                int y = Inputint(m, M);
                int result = area1(x, y);
                std::cout<<"Площадь прямоугольника = "<<result<<std::endl;
                break;
                
            }
            case '2':{
                std::cout<<"Вы выбрали площадь для треугольника \n Введите 3 стороны треугольника \n";
                int x = Inputint(m, M);
                int y = Inputint(m, M);
                int z = Inputint(m, M);
                float result = area2(x, y, z);
                std::cout<<"Площадь треугольника = "<<result<<std::endl;
                break;
                
            }
            case '3':{
                std::cout<<"Вы выбрали площадь для круга \n Введите радиус круга \n";
                int x = Inputint(m, M);
                float result = area3(x);
                std::cout<<"Площадь круга = "<<result<<std::endl;
                break;
                
            }
            case '0':{
                q = false;
                continue;
                
            }
            default:{
                std::cout<<"Неверный ввод, попробуйте еще раз. \n";
                
            }
                
        }
        
    }while(q);
    
    return 0;
}
