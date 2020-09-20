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
        cout<<"введите значение переменной а"<<endl;
        if ((cin >> valuea).good() && (m <= valuea) && (valuea <= M)){
            a = valuea;
            break;
        }

        if (cin.fail()) {
            cin.clear();
            cout << "Неверный ввод, повторите." << endl;
        }
        else {
            cout << "Число вне допустимого диапазона значений. Повторите ввод.\n";
        }
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    for (;;) {
        cout<<"введите значение переменной b"<<endl;
        float valueb;
        if ((cin >> valueb).good() && (m <= valueb) && (valueb <= M)){
            b = valueb;
            break;
        }

        if (cin.fail()) {
            cin.clear();
            cout << "Неверный ввод, повторите." << endl;
        }
        else {
            cout << "Число вне допустимого диапазона значений. Повторите ввод.\n";
        }
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    
    cout <<"введите действие, которое хотите совершить с a и b\n или напишите '0' чтобы выйти из программы\n"<<endl;
    cin >> sign;
    try {
        if(!(sign == '+' or sign == '-' or sign == '/' or sign == '*') and sign == 0)
            throw 103;
        
    }
    catch (int q) {
        cout<<"Ошибка № "<<q<<" вы ввели неправильно знак"<<endl;
        main();
        
    }
    switch(sign) {
        case'+': {
            c = a + b;
            cout << "a + b = " << c<<endl;
            cout<<"введите 1 чтоб начать заного, введите 0 чтоб закончить программу"<<endl;
            cin>> n;
            try {
                if(!(n == 1 or n == 0))
                    throw 102;
            } catch (int y) {
                cout<<"Ошибка № "<<y<<"вы ввели не 1 или 0"<<endl;
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
            cout<<"введите 1 чтоб начать заного, введите 0 чтоб закончить программу"<<endl;
                       cin>> n;
                       try {
                           if(!(n == 1 or n == 0))
                               throw 102;
                       } catch (int y) {
                           cout<<"Ошибка № "<<y<<"вы ввели не 1 или 0"<<endl;
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
            cout<<"введите 1 чтоб начать заного, введите 0 чтоб закончить программу"<<endl;
                       cin>> n;
                       try {
                           if(!(n == 1 or n == 0))
                               throw 102;
                       } catch (int y) {
                           cout<<"Ошибка № "<<y<<"вы ввели не 1 или 0"<<endl;
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
                cout<<"Ошибка № "<<q<<" делить на 0 нельзя!"<<endl;
                cout<<"введите 1 чтоб начать заного, введите 0 чтоб закончить программу"<<endl;
                                      cin>> n;
                                      try {
                                          if(!(n == 1 or n == 0))
                                              throw 102;
                                      } catch (int y) {
                                          cout<<"Ошибка № "<<y<<"вы ввели не 1 или 0"<<endl;
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
             cout<<"введите 1 чтоб начать заного, введите 0 чтоб закончить программу"<<endl;
                       cin>> n;
                       try {
                           if(!(n == 1 or n == 0))
                               throw 102;
                       } catch (int y) {
                           cout<<"Ошибка № "<<y<<"вы ввели не 1 или 0"<<endl;
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
