//
//  pair.cpp
//  PSM
//
//  Created by KimBongSeok on 2015. 7. 12..
//  Copyright (c) 2015년 KimBongSeok. All rights reserved.
//

#include<iostream>
#include<algorithm>

using namespace std;

int d[11000],able[20];

int main(){
    int m,k;
    cin>>m>>k;
    for(int i=0;i<=m;i++)
        d[i]=-1;
    
    for(int i=0;i<k;i++){
        scanf("%d",able+i);
        d[able[i]]=1;
    }
    for(int i=1;i<=m;i++){
        int tmp=123456789;
        for(int t=0;t<k;t++){
            if(i-able[t]>=0 && d[i-able[t]]!=-1){
                if(tmp>d[i-able[t]]+1 ){
                    tmp=d[i-able[t]]+1;
                    d[i]=tmp;
                }
            }
        }
        
    }
    cout<<d[m];
    return 0;
}