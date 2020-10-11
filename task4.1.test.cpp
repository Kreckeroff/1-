//
//  main.cpp
//  task4.1
//
//  Created by Egor Grebennikov on 11.10.2020.
//  Copyright © 2020 Egor Grebennikov. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <cmath>

char Inputint() {
    char buff[100];
    for (int i = 0;i < 100 ;i++) {
  
        std::cout<<"Введите число. \n";
        std::cin >> buff[i];
        if ((47 <= buff[i]) && (buff[i] <= 58)){
            return buff[100];
            break;
            
        }
        
    }
    
}

int main(int argc, const char * argv[]) {
    char S1[256],S2[256], S3[256], S4[256], S5[256], S6[256], S7[256], S8[256], S9[256], S10[256];
    std::cout << "Введите 10 чисел \n";
    S1[256] = Inputint();
    std::cout<<S1<<"!!!"<<std::endl;
    
                    std::ofstream out("t.txt");
                    out << S1 << '\n';
                    out << S2 << '\n';
                    out << S3 << '\n';
                    out << S4 << '\n';
                    out << S5 << '\n';
                    out << S6 << '\n';
                    out << S7 << '\n';
                    out << S8 << '\n';
                    out << S9 << '\n';
                    out << S10 << '\n';
                    out.close();
    
                   std::ifstream in("t.txt");
                    int s1,s2,s3,s4,s5,s6,s7,s8,s9,s10;
                    in>>s1>>s2>>s3>>s4>>s5>>s6>>s7>>s8>>s9>>s10;
                    std::cout<<s1+s2+s3+s4+s5+s6+s7+s8+s9+s10<<'\n';
    return 0;
}
