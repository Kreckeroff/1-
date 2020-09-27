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

int Inputint(int m, int M) {
    for (;;) {
        float valuea;
        cout<<"Введите число. \n";
        if ((cin >> valuea).good() && (m <= valuea) && (valuea <= M)&&(floor(valuea)==valuea)){
            return valuea;
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
}
double Inputfloat(int m, int M) {
    for (;;) {
        float valuea;
        cout<<"Введите число. \n";
        if ((cin >> valuea).good() && (m <= valuea) && (valuea <= M)){
            return valuea;
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
}

void day1() {
F1:
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
    int t = Inputint(m,M);
    switch(t){
        case 1:{
            cout <<"Данная программа спрашивает имя пользователя и выводит его на экран. \n";
            setlocale(LC_ALL, "Russian");
            string name;
            cout << "What is your name? ";
            cin>> name;
            cout << "Hello, " << name << "!\n";
           goto F1;

        }
        case 2:{
        F2:
            cout<<"Данная программа решает простые арифметические действия. \n";
            float  c = 0;
            char sign;
            int n, m = -2147483648, M = 2147483647;
            cout<<"Введите число a \n";
            float a = Inputfloat(m, M);
            cout<<"Введите число b \n";
            float b = Inputfloat(m, M);
            cout <<" Введите '+', чтобы посчитать a + b = c. \n Введите '-', чтобы посчитать a - b = c. \n Введите '*', чтобы посчитать a * b = c. \n Введите '+/', чтобы посчитать a / b = c. \n Напишите '0' чтобы выйти из программы в меню. \n";
            cin >> sign;
            try {
                if(!(sign == '+' or sign == '-' or sign == '/' or sign == '*') and sign == 0)
                    throw 120;
                        
            }
            catch (int q) {
                cout<<"Ошибка № "<<q<<"! Вы ввели неправильно знак. Вас вернут обратно в программу\n";
                goto F2;
                        
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
                        cout<<"Ошибка № "<<y<<"! Вы ввели не 1 или 0.Вас вернут в меню выбора \n";
                        goto R1;
                        
                    }
                    if (n == 1) {
                        goto F2;
                        
                    }
                    else
                        goto F1;
                    
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
                        goto F2;
                        
                    }
                    else
                        goto F1;
                    
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
                        goto F2;
                        
                    }
                    else
                        goto F1;
                            
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
                            goto F2;
                            
                        }
                        else
                            goto F1;
                        
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
                        goto F1;
                        
                    }
                    if (n == 1) {
                        goto F2;
                        
                    }
                    else
                        goto F1;
                        
                }
                case'0': {
                    goto F1;
                    
                }
                    
            }
            
        }
        case 3:{
        F3:
            cout <<"эта программа находит значение x в уравнениях типа bx + c = 0"<<endl;
            float x = 0;
            int m = -2147483648;
            int M = 2147483647;
            cout<<"Введите число 'b' \n";
            float b = Inputfloat(m,M);
            cout<<"Введите число 'c' \n";
            float c = Inputfloat(m,M);
            try {
                if (b == 0 and c != 0){
                    throw 130;
                    
                }
                    
            }
            catch (int q){
                cout<< "результат будет недействителен, "<<"Ошибка № "<<q<<" - на 0 делить нельзя!"<<endl;
                goto F3;
                
            }
            if( b == 0 and c == 0){
                cout<<"x может принимать любые значения"<<endl;
                goto F1;
                
            }
            x = (-c)/b;
            cout <<"x = "<<x<<endl;
            goto F1;
            
        }
        case 4:{
        F4:
            cout<<"Данная программа находит значение x в уравнениях типа ax^2 + bx + c = 0 \n" ;
            float d,x1,x2;
            int m = -2147483648;
            int M = 2147483647;
            cout<<"Введите число 'a' \n";
            float a = Inputfloat(m,M);
            cout<<"Введите число 'b' \n";
            float b = Inputfloat(m,M);
            cout<<"Введите число 'c' \n";
            float c = Inputfloat(m,M);
            if(a == 0) {
                try {
                    if (b == 0 and c != 0) {
                        throw 140;
                        
                    }
                    
                }
                catch (int q){
                    cout<< "результат будет недействителен, "<<"Ошибка № "<<q<<" - на 0 делить нельзя! \n"<<endl;
                    goto F4;
                    
                }
                if( b == 0 and c == 0) {
                    cout<<"x может принимать любые значения \n"<<endl;
                    goto F1;
                    
                }
                x1 = (-c)/b;
                cout <<"x1 = "<<x1<<endl;
                goto F1;
                
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
                cout << "D < 0, Действительных корней не существует \n";
            goto F1;
            
        }
        case 5: {
        F5:
            int lamp;
            int sun;
            int curtain;
            cout<<"эта программа определяет светло или темно в комнате \n";
            cout << "введите первым действием работает ли лампа, вторым открыты или закрыты шторы,последним светло или темно на улице, 1 вариант ответа принимается под цифрой 1, второй под цифрой 0\n";
            cin >>lamp>>curtain>>sun;
            try {
                if((lamp != 0 and lamp != 1) or (curtain != 0 and curtain != 1) or (sun != 0  and sun != 1))
                    throw 150;
                
            }
            catch(int q){
                cout<<"вы ввели неправильное значение переменных "<<"Ошибка № "<<q<<" допустим ввод только цифр 1/0"<<endl;
                goto F5;
                
            }
            if (lamp == 1 or (curtain == 1 and sun == 1))
                cout << "в комнате светло\n";
            else
                cout << "в комнате темно\n";
            goto F1;
            
        }
            
    }
    
}
void day2(){
F1:
    int m = 0;
    int M = 5;
    std::cout << "Для просмотра заданий введите номер задания (1-5)" << endl;
    cout << endl;
    cout << "№1 - задание \"Конус\"\n";
    cout << "№2 - задание \"Разветвление\" \n";
    cout << "№3 - задание \"Функция\" \n";
    cout << "№4 - задание \"Порядок\" \n";
    cout << "№5 - задание \"Табуляция\" \n\n";
    cout << "№0 - выйти из программы \n";
    int t = Inputint(m,M);
    switch(t){
        case 1:{
            cout<<"Данная программа считает объем и полную поверхность усеченного конуса"<<endl;
            int m = 0, M = 2147483647;
            double V, S;
            cout<<"Введите число 'h' \n";
            float h = Inputfloat(m,M);
            cout<<"Введите число 'l' \n";
            float l = Inputfloat(m,M);
            cout<<"Введите число 'a' \n";
            float R = Inputfloat(m,M);
            cout<<"Введите число 'b' \n";
            float r = Inputfloat(m,M);
            V = ((1/(3 * M_PI * h))*((pow(R,2) + R * r + pow(r,2))));
            S = M_PI * (pow(R,2) + (R + r)* l + pow(r,2));
            cout <<"Объем фигуры равен: \n";
            cout << V << endl;
            cout << "полная поверхность фигуры равна: \n";
            cout << S << endl;
            goto F1;
        }
        case 2: {
        F2:
            cout<<"Данная программа считает систему уравнений \n";
            int m = -2147483648, M = 2147483647;
            float result;
            cout<<"Введите число 'a' \n";
            float a = Inputfloat(m,M);
            cout<<"Введите число 'x' \n";
            float x = Inputfloat(m,M);
            if (abs(x)< 1) {
                if(x > 0) {
                    result = a*log(abs(x));
                    cout <<"W = "<<result<<endl;
                    goto F1;
                        
                }
                else {
                    try {
                        if(x <= 0)
                            throw 220;
                            
                    }
                    catch (int q) {
                        cout<<"Ошибка № "<<q<<" логарифм не может быть отрицательным или равен 0 \n";
                        goto F2;
                            
                    }
                    
                }
                
            }
            else
                try {
                    if( a < pow(x, 2)){
                        throw 221;
                            
                    }
                        
                }
                catch (int q) {
                    cout<<"Ошибка № "<<q<<" под корнем не может быть отрицательное число \n"<<endl;
                    goto F2;
                    
            }
            result = sqrt(a - pow(x, 2));
            cout << "W = ";
            cout << result << endl;
            goto F1;
            
        }
        case 3: {
        F3:
            cout<<"Данная программа находить значение 'z' в уравнение \n";
            int m = -2147483648, M = 2147483647;
            float result;
            cout<<"Введите число 'x' \n";
            float x = Inputfloat(m,M);
            cout<<"Введите число 'b' \n";
            float b = Inputfloat(m,M);
            cout<<"Введите число 'y' \n";
            float y = Inputfloat(m,M);
            try {
                if(b <= y and b < x) {
                    throw 232;
                        }
                    
                if(b < x ) {
                    throw 230;
                        
                }
                if(b <= y) {
                    throw 231;
                        
                }
                    
            }
            catch (int q) {
                if( q == 230)
                    cout<<"Ошибка № "<<q<< " под корнем не может быть отрицательное число"<< endl;
                else if(q == 231)
                    cout<<"Ошибка №"<<q<<" логарифм не определен"<< endl;
                else
                    cout<<"Ошибка № "<<q<< " под корнем не может быть отрицательное число и логарифм не определен"<< endl;
                goto F3;
                    
            }
            result = log(b - y) * sqrt(b - x);
            cout << "z = "<< result << endl;
            goto F1;
            
        }
        case 4: {
        F4:
            int m = 0, M = 2147483647;
            int N = Inputint(m,M);
            for(int i = 10 ; i > 0 ; i --) {
                N++;
                cout<< N << endl;
                        
            }
            goto F1;
        }
        case 5: {
            double x = -4;
            double result;
            for(int i = 0; i < 17; i++) {
                if(x - 1 != 0){
                    result =(pow(x,2) - 2 * x + 2)/(x - 1);
                    cout<< "результат для x = "<< x << endl <<"равен: "<< result<<endl<<endl;
                    
                }
                try {
                    if (x - 1 == 0){
                        throw 250;
                        
                    }
                    
                }
                catch(int q) {
                    cout <<"результат для x = 1\n"<<"Ошибка №" << q << " - на 0 делить нельзя!!!!" <<endl<<endl;
                    
                }
                x = x + 0.5;
                
            }
            goto F1;
        }
    }
}

    
int main(){
    Z:
    setlocale(LC_ALL, "Russian");
    char q ;
    cout << "Для просмотра заданий введите номер задания (1-5) \n \n";
    cout << "№1 - задания 1 недели \n";
    cout << "№2 - задания 2 недели \n";
    cout << "№3 - задания 3 недели \n";
    cout << "№0 - выйти из программы \n";
    cin >> q;
    switch(q){
        case '1' : {
            day1();
            goto Z;
            
        }
        case '2' : {
            day2();
            goto Z;
                
        }
        case '3' : {
            cout<<"soon \n";
            goto Z;
            
        }
        case '0' : exit(0);
        default: {
            cout<<"неверный ввод"<<endl;
            goto Z;
            
        }
            
    }
        
}
