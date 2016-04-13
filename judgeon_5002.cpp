//  judgeon_5002.cpp
//  PSM

#include <iostream>

int n, k;
int d[20][20];

int main(){
    char s,x,y;
    scanf("%d%d",&n,&k);
    for(int i = 1;i <= k; i++){
        scanf("%c%d%d",&s,&x,&y);
        if(s=='S'){
            d[y][x]=1;
        }
        else if(s=='D'){
            d[y][x]=2;
            
        }
    }
    
}