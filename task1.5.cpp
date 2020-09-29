//
//  main.cpp
//  task1.5
//
//  Created by Egor Grebennikov on 08.09.2020.
//  Copyright © 2020 Egor Grebennikov. All rights reserved.
//

#include <iostream>
#include <cmath>
 
using namespace std;

void exit();

int main(){
    int lamp;
    int sun;
    int curtain;
    cout<<"эта программа определяет светло или темно в комнате"<<endl;
    cout << "введите первым действием работает ли лампа, вторым открыты или закрыты шторы,последним светло или темно на улице, 1 вариант ответа принимается под цифрой 1, второй под цифрой 0\n";
    cin >>lamp>>curtain>>sun;
    try {
        if((lamp != 0 and lamp != 1) or (curtain != 0 and curtain != 1) or (sun != 0  and sun != 1))
            throw 111;
    }
    catch(int q){
        cout<<"вы ввели неправильное значение переменных "<<"Ошибка № "<<q<<" допустим ввод только цифр 1/0"<<endl;
        exit(1);
    }
    if (lamp == 1 or (curtain == 1 and sun == 1))
            cout << "в комнате светло\n";
        else
            cout << "в комнате темно\n";
    
}
