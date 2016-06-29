//
//  judgeon-4023.cpp
//  PSM
//
//  Created by KimBongSeok on 2016. 6. 23..
//  Copyright © 2016년 KimBongSeok. All rights reserved.
//
/*
5 7 3
0 2 4 4
1 1 2 5
4 0 6 2
 */
#include <stdio.h>
#include<algorithm>
using namespace std;
int m,n,k;
int ansCnt[100],fcnt,cnt;
int map[120][120];
struct RECT{
    int x1,y1,x2,y2;
};
int dx[]={-1,0,1,0},dy[]={0,-1,0,1};
void back(int x, int y){
    fcnt++;
    map[y][x]=1;
    for(int i=0;i<4;i++){
        if(map[y+dy[i]][x+dx[i]]==0)
            back(x+dx[i],y+dy[i]);
    }
        
}
int main(){
    fill(&map[0][0],&map[120][120],2);
    scanf("%d%d%d",&m,&n,&k);
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++)
            map[i][j]=0;
    }
    for(int i=1;i<=k;i++){
        RECT tmp;
        scanf("%d%d%d%d",&tmp.x1,&tmp.y1,&tmp.x2,&tmp.y2);
        for(int x=tmp.x1+1;x<=tmp.x2;x++){
            for(int y=tmp.y1+1;y<=tmp.y2;y++)
                map[y][x]=1;
        }
    }
    for(int y=1;y<=m;y++){
        for(int x=1;x<=n;x++){
            if(map[y][x]==0){
                fcnt =0;
                back(x,y);
                ansCnt[cnt++]=fcnt;
            }
        }
    }
    printf("%d\n",cnt);
    sort(ansCnt,ansCnt+cnt);
    for(int i=0;i<cnt;i++)
        printf("%d ",ansCnt[i]);
    return 0;
    
}
