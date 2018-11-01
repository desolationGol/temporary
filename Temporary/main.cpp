//
//  main.cpp
//  Temporary
//
//  Created by Ihor Holovko on 2018/10/31.
//  Copyright © 2018 Ihor Holovko. All rights reserved.
//

#include <iostream>
using namespace std;
void reference(int *a, int *b)
{
    int temporary = *a;
    *a = *b;
    *b = temporary;
}
int main(int argc, const char * argv[]) {
    
    int a,b;
    
    cout<<"Enter two numbers :"<<endl;
    cin>>a>>b;
    
    reference(&a,&b);
    
    cout<<"External adres selector of "<<a<<" "<<&a<<endl;
    cout<<"External adres selector of "<<b<<" "<<&b<<endl;
    
    return 0;
}
