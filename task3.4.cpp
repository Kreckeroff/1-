//
//  main.cpp
//  task3.4
//
//  Created by Egor Grebennikov on 04.10.2020.
//  Copyright © 2020 Egor Grebennikov. All rights reserved.
//

#include <iostream>
#include <fstream>

void sort(char *i, int n) {
int a, b;
char t;
for(a=0; a < n; a++)
    for(b=n-1; b >= a; b--) {
        if(i[b-1] > i[b]) {
            t = i[b-1];
            i[b-1] = i[b];
            i[b] = t;
            
        }
        
    }
    
}

int main(int argc, const char * argv[]) {
    int i = 0;
    char buff[50];
    char result [50];
    std::ofstream test;
    test.open("text.html");
    test << "11111lalalala2222alalaalal4444qlalal1234 \n";
    test.close();
    
    std::ifstream text("text.html");
    text.getline(buff,50);
    for(int i = 0, j=0; i < 50; i++)
    if(buff[i] != '\0')
        result[j++] = buff[i];
    std::cout << buff;
    text.close();
   for (int i=0; i<50;i++){
       if ((buff[i]>47&&buff[i]<58)||buff[i]==32)
           std::cout<<buff[i];
   }
    std::cout<<'\n';
    
    return 0;
    
}
