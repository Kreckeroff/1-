//
//  main.cpp
//  task3.3
//
//  Created by Egor Grebennikov on 04.10.2020.
//  Copyright © 2020 Egor Grebennikov. All rights reserved.
//

#include <iostream>
#include <fstream>

int main(int argc, const char * argv[]) {
    char buff[50];
    std::ofstream test;
    test.open("text.txt");
    test << "Navi sosnyli blyat \n";
    test.close();
    std::ifstream text("text.txt");
    text.getline(buff,50);
    std::cout << buff;
    text.close();
    return 0;
    
    
}
