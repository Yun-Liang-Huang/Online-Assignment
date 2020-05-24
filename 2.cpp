//
//  main.cpp
//  2
//
//  Created by Lau on 2020/5/24.
//  Copyright © 2020 Lau. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int n, total;
    cin >> n;
    
    total = n - n/3 - n/5 + 2*n/15;
    
    cout << total << endl;
    
    return 0;
}
