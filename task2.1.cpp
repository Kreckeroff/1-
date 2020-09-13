//
//  main.cpp
//  task2.1
//
//  Created by Egor Grebennikov on 08.09.2020.
//  Copyright © 2020 Egor Grebennikov. All rights reserved.
//

#include <iostream>
#include <cmath>
#define M_PI 3.14159265358979323846

using namespace std;
 
int main(){
    int V, S;
    double h, R, r, l;
    cout <<"введите высоту\n";
    cin >> h;
    cout <<"введите радиус\n";
    cin >> R;
    cout <<" введите r\n";
    cin >> r;
    cout << " введите l\n";
    cin >> l;
    V = ((1/(3 * M_PI * h))*(pow(R,2) + R * r + pow(r,2)));
    S = M_PI * (pow(R,2) + (R + r)* l + pow(r,2));
    cout <<" объем равен\n";
    cout << V << endl;
    cout << "полная поверхность\n";
    cout << S << endl;
    
}
