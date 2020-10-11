//
//  main.cpp
//  task4.4
//
//  Created by Egor Grebennikov on 11.10.2020.
//  Copyright © 2020 Egor Grebennikov. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    int y = 0;
    bool q = true;
    do {
        if ( y < 6) {
            for(int i = 0; i < 8; i++) {
                std::cout<<"*";
                
            }
            for(int i = 7; i < 30; i++){
                std::cout<<"-";
                
            }
            if (y <= 6){
                std::cout<<"\n";
                y++;
                
            }
            
        }
        else if(y >= 6 and y < 13){
            for(int i = 0; i < 31; i++){
                std::cout<<"-";
                
            }
            std::cout<<"\n";
            y++;
            
        }
        else
            q = false;
        
    } while(q);
    
}

