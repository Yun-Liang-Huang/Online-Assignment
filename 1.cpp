//
//  main.cpp
//  reverse string
//
//  Created by Lau on 2020/5/24.
//  Copyright © 2020 Lau. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    string n;
    char tmp;
    getline(cin, n);
    int n_length = n.length();
    for(int i = 0; i < n_length/2; i++){
        tmp = n[i];
        n[i] = n[n_length-i-1];
        n[n_length-i-1] = tmp;
    }
    
    cout << n << endl;
    
    return 0;
}
