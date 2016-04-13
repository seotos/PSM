//
//  main.cpp
//  PSM
//
//  Created by KimBongSeok on 2014. 12. 18..
//  Copyright (c) 2014년 KimBongSeok. All rights reserved.
//

#include<iostream>
using namespace std;
int flag[5000+10];
void f(int n){
    int gen =n;
    while(n){
        gen += n%10;
        n/=10;
    }
    flag[gen]=1;
}
int main(){
    int a, b;
    cin>>a>>b;
    for(int i=1; i<=5000; i++)
        f(i);
    int sum=0;
    for(int i=a; i<=b;i++){
        if(!flag[i]) {
            sum+=i;
            cout << i << " ";
        }
    }
    cout<<sum;
}