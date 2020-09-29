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
    float  c;
    bool wasd = true;
    bool isd = true;
    char a[256], *A = a;
    char b[256], *B = b;
    char sign;
    int valuea, valueb, n;
    setlocale(LC_ALL, "Russian");
    cout << "введите целое число a : \n";
    cin>>a;
    while(*A) {
        if(!isdigit(*A++)){
            isd = false;
            break;
               
        }
        
    }
    if(isd) {
        valuea  = atoi(a);
        
    }
    else {
        cout<< "вы ввели неправильно значение, введите положительное число.";
        exit(0);
        
    }
    cout<<"введите введите целое число b : \n";
    cin>>b;
    while(*B) {
        if(!isdigit(*B++)){
            wasd = false;
            break;
            
        }
           
    }
    if(isd) {
        valueb = atoi(b);
        
    }
    else {
        cout<< "вы ввели неправильно значение, введите положительное число.";
        exit(0);
        
    }
    cout <<"введите действие, которое хотите совершить с a и b\n или напишите '0' чтобы выйти из программы\n";
    cin >> sign;
    switch(sign) {
        case'+': {
            c = valuea + valueb;
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
            c = valuea - valueb;
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
            c = valuea * valueb;
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
                if(valueb == 0)
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
            c = valuea / valueb;
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
