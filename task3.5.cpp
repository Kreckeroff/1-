//
//  main.cpp
//  task3.5
//
//  Created by Egor Grebennikov on 04.10.2020.
//  Copyright © 2020 Egor Grebennikov. All rights reserved.
//

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

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
 
int main() {
    bool q = true;
    while(q){
    char s[80];
    printf("Введите строку длинной 30 символов: \n");
    cin>>s;
   unsigned long i = strlen(s);
        if(i == 30){
            q = false;
            sort(s, i);
            printf("Отсортированная строка : %s\n", s);
            break;
            
        }
        cout<<"вы ввели строку длинной не 30 символов! \n";
    }
    
}
