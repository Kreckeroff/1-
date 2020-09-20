//
//  main.cpp
//  task1.2
//
//  Created by Egor Grebennikov on 08.09.2020.
//  Copyright © 2020 Egor Grebennikov. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    float  c = 0,a,b;
    char sign;
    int n;
    setlocale(LC_ALL, "Russian");
    
    int m = -2147483648;
    int M = 2147483647;
    
    for (;;) {
        float valuea;
        cout<<"Введите значение переменной а. \n";
        if ((cin >> valuea).good() && (m <= valuea) && (valuea <= M)){
            a = valuea;
            break;
        }

        if (cin.fail()) {
            cin.clear();
            cout << "Неверный ввод, повторите. \n";
        }
        else {
            cout << "Число вне допустимого диапазона значений. Повторите ввод. \n";
        }
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    for (;;) {
        cout<<"Введите значение переменной b. \n";
        float valueb;
        if ((cin >> valueb).good() && (m <= valueb) && (valueb <= M)){
            b = valueb;
            break;
        }

        if (cin.fail()) {
            cin.clear();
            cout << "Неверный ввод, повторите. \n";
        }
        else {
            cout << "Число вне допустимого диапазона значений. Повторите ввод. \n";
        }
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    
    cout <<"Введите действие, которое хотите совершить с 'a' и 'b' \n или напишите '0' чтобы выйти из программы. \n";
    cin >> sign;
    try {
        if(!(sign == '+' or sign == '-' or sign == '/' or sign == '*') and sign == 0)
            throw 103;
        
    }
    catch (int q) {
        cout<<"Ошибка № "<<q<<"! Вы ввели неправильно знак. \n";
        main();
        
    }
    switch(sign) {
        case'+': {
            c = a + b;
            cout << "a + b = " << c<<endl;
            cout<<"Введите 1 чтоб начать заного, введите 0 чтоб закончить программу. \n";
            cin>> n;
            try {
                if(!(n == 1 or n == 0))
                    throw 102;
            } catch (int y) {
                cout<<"Ошибка № "<<y<<"! Вы ввели не 1 или 0 \n";
                exit(0);
            }
            if (n == 1)
            {
                main();
            }
            else
                exit(0);
        }
        case'-': {
            c = a - b;
            cout << "a - b = " << c<<endl;
            cout<<"Введите 1 чтоб начать заного, введите 0 чтоб закончить программу. \n";
                       cin>> n;
                       try {
                           if(!(n == 1 or n == 0))
                               throw 102;
                       } catch (int y) {
                           cout<<"Ошибка № "<<y<<"! Вы ввели не 1 или 0. \n";
                           exit(0);
                       }
                       if (n == 1)
                       {
                           main();
                       }
                       else
                           exit(0);
            
        }
        case'*': {
            c = a * b;
            cout << "a * b = " << c<<endl;
            cout<<"Введите 1 чтоб начать заного, введите 0 чтоб закончить программу. \n";
                       cin>> n;
                       try {
                           if(!(n == 1 or n == 0))
                               throw 102;
                       } catch (int y) {
                           cout<<"Ошибка № "<<y<<"! Вы ввели не 1 или 0. \n";
                           exit(0);
                       }
                       if (n == 1)
                       {
                           main();
                       }
                       else
                           exit(0);
            
        }
        case'/': {
            try {
                if(b == 0)
                    throw 101;
                
            }
            catch (int q) {
                cout<<"Ошибка № "<<q<<"! Делить на 0 нельзя. \n";
                cout<<"Введите 1 чтоб начать заного, введите 0 чтоб закончить программу. \n";
                                      cin>> n;
                                      try {
                                          if(!(n == 1 or n == 0))
                                              throw 102;
                                      } catch (int y) {
                                          cout<<"Ошибка № "<<y<<"! Вы ввели не 1 или 0. \n";
                                          exit(0);
                                      }
                                      if (n == 1)
                                      {
                                          main();
                                      }
                                      else
                                          exit(0);;
                
            }
            c = a / b;
            cout << "a / b = " << c<<endl;;
             cout<<"Введите 1 чтоб начать заного, введите 0 чтоб закончить программу. \n"<<endl;
                       cin>> n;
                       try {
                           if(!(n == 1 or n == 0))
                               throw 102;
                       } catch (int y) {
                           cout<<"Ошибка № "<<y<<"! вы ввели не 1 или 0. \n"<<endl;
                           exit(0);
                       }
                       if (n == 1)
                       {
                           main();
                       }
                       else
                           exit(0);
        
        }
        case'0': {
            break;
            
        }
            
    }

}
