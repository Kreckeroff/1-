//
//  main.cpp
//  task1.1
//
//  Created by Egor Grebennikov on 08.09.2020.
//  Copyright © 2020 Egor Grebennikov. All rights reserved.
//


#include <iostream>
#include <string>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    string name;
    cout << "What is your name? ";
    getline (cin, name);
    cout << "Hello, " << name << "!\n";
}
