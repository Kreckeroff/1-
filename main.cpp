//
//  main.cpp
//  1day
//
//  Created by Egor Grebennikov on 20.09.2020.
//  Copyright © 2020 Egor Grebennikov. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <string>
using namespace std;



void day1() {
    F:
    int t;
    int m = 0;
    int M = 5;
    cin.clear();
    cout << "Для просмотра заданий введите номер задания (1-5)" << endl;
    cout << endl;
    cout << "№1 - задание \"Имя\"\n";
    cout << "№2 - задание \"Арифметика\" \n";
    cout << "№3 - задание \"Уравнение\" \n";
    cout << "№4 - задание \"Ещё уравнение\" \n";
    cout << "№5 - задание \"Лампа со шторой\" \n\n";
    cout << "№0 - выйти из программы \n";
    for (;;) {
        float valuea;
        cout<<"Введите задание. \n";
        if ((cin >> valuea).good() && (m <= valuea) && (valuea <= M)){
            t = valuea;
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
    switch(t){
        case 1:{
            cout <<"Данная программа спрашивает имя пользователя и выводит его на экран. \n";
            setlocale(LC_ALL, "Russian");
            string name;
            cout << "What is your name? ";
            cin>> name;
            cout << "Hello, " << name << "!\n";
           goto F ;

        }
        case 2:{
        M:
            cout<<"Данная программа решает простые арифметические действия. \n";
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
            cout <<" Введите '+', чтобы посчитать a + b = c. \n Введите '-', чтобы посчитать a - b = c. \n Введите '*', чтобы посчитать a * b = c. \n Введите '+/', чтобы посчитать a / b = c. \n Напишите '0' чтобы выйти из программы в меню. \n";
            cin >> sign;
            try {
                if(!(sign == '+' or sign == '-' or sign == '/' or sign == '*') and sign == 0)
                    throw 120;
                        
            }
            catch (int q) {
                cout<<"Ошибка № "<<q<<"! Вы ввели неправильно знак. Вас вернут обратно в программу\n";
                goto F;
                        
            }
            switch(sign) {
                case'+': {
                    c = a + b;
                    cout << "a + b = " << c<<endl;
                R1:
                    cout<<"Введите '1' чтоб начать заного \n Введите '0' чтобы выйти в меню. \n";
                    cin>> n;
                    try {
                        if(!(n == 1 or n == 0))
                            throw 100;
                        
                    }
                    catch (int y) {
                        cout<<"Ошибка № "<<y<<"! Вы ввели не 1 или 0.\n";
                        goto R1;
                        
                    }
                    if (n == 1) {
                        goto M;
                        
                    }
                    else
                        goto F;
                    
                }
                case'-': {
                    c = a - b;
                    cout << "a - b = " << c<<endl;
                R2:
                    cout<<"Введите 1 чтоб начать заного \n Введите '0' чтобы выйти в меню. \n";
                    cin>> n;
                    try {
                        if(!(n == 1 or n == 0))
                            throw 100;
                        
                    }
                    catch (int y) {
                        cout<<"Ошибка № "<<y<<"! Вы ввели не 1 или 0. \n";
                        goto R2;
                        
                    }
                    if (n == 1) {
                        goto M;
                        
                    }
                    else
                        goto F;
                    
                }
                case'*': {
                    c = a * b;
                    cout << "a * b = " << c<<endl;
                R3:
                    cout<<"Введите 1 чтоб начать заного, \n Введите '0' чтобы выйти в меню. \n";
                    cin>> n;
                    try {
                        if(!(n == 1 or n == 0))
                            throw 100;
                        
                    }
                    catch (int y) {
                        cout<<"Ошибка № "<<y<<"! Вы ввели не 1 или 0. \n";
                        goto R3;
                        
                    }
                    if (n == 1) {
                        goto M;
                        
                    }
                    else
                        goto F;
                            
                }
                case'/': {
                    try {
                        if(b == 0)
                            throw 121;
                        
                    }
                    catch (int q) {
                        cout<<"Ошибка № "<<q<<"! Делить на 0 нельзя. \n";
                R4:
                        cout<<"Введите 1 чтоб начать заного, \n Введите '0' чтобы выйти в меню. \n";
                        cin>> n;
                        try {
                            if(!(n == 1 or n == 0))
                                throw 100;
                            
                        } catch (int y) {
                            cout<<"Ошибка № "<<y<<"! Вы ввели не 1 или 0. \n";
                            goto R4;
                            
                        }
                        if (n == 1) {
                            goto M;
                            
                        }
                        else
                            goto F;
                        
                    }
                    c = a / b;
                    cout << "a / b = " << c<<endl;
                R5:
                    cout<<"Введите 1 чтоб начать заного, Введите '0' чтобы выйти в меню. \n";
                    cin>> n;
                    try {
                        if(!(n == 1 or n == 0))
                            throw 100;
                        
                    }
                    catch (int y) {
                        cout<<"Ошибка № "<<y<<"! вы ввели не 1 или 0. \n";
                        goto R5;
                        
                    }
                    if (n == 1) {
                        goto M;
                        
                    }
                    else
                        goto F;
                        
                }
                case'0': {
                    goto F;
                    
                }
                    
            }
            
        }
        case 3:{
        J:
            cout <<"эта программа находит значение x в уравнениях типа bx + c = 0"<<endl;
            float  c,b, x = 0;
            int m = -2147483648;
            int M = 2147483647;
            for (;;) {
                float valuea;
                cout<<"Введите значение переменной b. \n";
                if ((cin >> valuea).good() && (m <= valuea) && (valuea <= M)){
                    b = valuea;
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
                cout<<"Введите значение переменной c. \n";
                float valueb;
                if ((cin >> valueb).good() && (m <= valueb) && (valueb <= M)){
                    c = valueb;
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
            try {
                if (b == 0 and c != 0){
                    throw 130;
                    
                }
                    
            }
            catch (int q){
                cout<< "результат будет недействителен, "<<"Ошибка № "<<q<<" - на 0 делить нельзя!"<<endl;
                goto J;
                
            }
            if( b == 0 and c == 0){
                cout<<"x может принимать любые значения"<<endl;
                goto F;
                
            }
            x = (-c)/b;
            cout <<"x = "<<x<<endl;
            goto F;
            
        }
        case 4:{
        Q:
            cout<<"Данная программа находит значение x в уравнениях типа ax^2 + bx + c = 0 \n" ;
            float a,b,c,d,x1,x2;
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
                float valuea;
                cout<<"Введите значение переменной b. \n";
                if ((cin >> valuea).good() && (m <= valuea) && (valuea <= M)){
                    b = valuea;
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
                float valuea;
                cout<<"Введите значение переменной c. \n";
                if ((cin >> valuea).good() && (m <= valuea) && (valuea <= M)){
                    c = valuea;
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
            if(a == 0) {
                try {
                    if (b == 0 and c != 0) {
                        throw 140;
                        
                    }
                    
                }
                catch (int q){
                    cout<< "результат будет недействителен, "<<"Ошибка № "<<q<<" - на 0 делить нельзя!"<<endl;
                    goto Q;
                    
                }
                if( b == 0 and c == 0) {
                    cout<<"x может принимать любые значения"<<endl;
                    goto F;
                    
                }
                x1 = (-c)/b;
                cout <<"x1 = "<<x1<<endl;
                goto F;
                
            }
            d = pow(b,2) - 4 * a * c;
            if (d > 0) {
                x1 = ((-b) + sqrt(d)) / (2 * a);
                x2 = ((-b) - sqrt(d)) / (2 * a);
                cout << "x1 = " << x1 << endl;
                cout << "x2 = " << x2 << endl;
                    
            }
            if (d == 0) {
                x1 = -(b / (2 * a));
                cout << "x1 = x2 = " << x1 << endl;
                
            }
            if (d < 0)
                cout << "D < 0, Действительных корней не существует";
            goto F;
            
        }
        case 5: {
        W:
            int lamp;
            int sun;
            int curtain;
            cout<<"эта программа определяет светло или темно в комнате"<<endl;
            cout << "введите первым действием работает ли лампа, вторым открыты или закрыты шторы,последним светло или темно на улице, 1 вариант ответа принимается под цифрой 1, второй под цифрой 0\n";
            cin >>lamp>>curtain>>sun;
            try {
                if((lamp != 0 and lamp != 1) or (curtain != 0 and curtain != 1) or (sun != 0  and sun != 1))
                    throw 150;
                
            }
            catch(int q){
                cout<<"вы ввели неправильное значение переменных "<<"Ошибка № "<<q<<" допустим ввод только цифр 1/0"<<endl;
                goto W;
                
            }
            if (lamp == 1 or (curtain == 1 and sun == 1))
                cout << "в комнате светло\n";
            else
                cout << "в комнате темно\n";
            goto F;
            
        }
            
    }
    
}
int main(){
    setlocale(LC_ALL, "Russian");
    int q = 0;
    int m = 0;
    int M = 5;
    cin.clear();
    cout << "Для просмотра заданий введите номер задания (1-5)" << endl;
    cout << endl;
    cout << "№1 - задания \1 недели \n";
    cout << "№2 - задания \2 недели \n";
    /*cout << "№3 - задание \"Уравнение\" \n";
    cout << "№4 - задание \"Ещё уравнение\" \n";
    cout << "№5 - задание \"Лампа со шторой\" \n\n";
     */
    cout << "№0 - выйти из программы \n";
    for (;;) {
        float valuea;
        cout<<"Введите задание. \n";
        if ((cin >> valuea).good() && (m <= valuea) && (valuea <= M)){
            q = valuea;
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
        switch(q){
            case 1 : {
                day1();
            }
            case 2 :  {
                cout<<"soon";
                
            }
            case 0 : exit(0);
                
        }
        
    }
    
}
