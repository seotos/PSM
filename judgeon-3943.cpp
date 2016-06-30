//
//  judgeon-3943.cpp
//  PSM
//
//  Created by KimBongSeok on 2016. 6. 29..
//  Copyright © 2016년 KimBongSeok. All rights reserved.
//
// 치즈 문제
/*
입력
8 9
0 0 0 0 0 0 0 0 0
0 0 0 1 1 0 0 0 0
0 0 0 1 1 0 1 1 0
0 0 1 1 1 1 1 1 0
0 0 1 1 1 1 1 0 0
0 0 1 1 0 1 1 0 0
0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0

출력
4
 
 */
#include <stdio.h>
#include<iostream>
#include<queue>
using namespace std;
struct P{
    int y, x;
    P(int a, int b){
        y = a;
        x = b;
    }
};
queue<P> q;
int map[120][120];
int n, m,ans,zeroCnt;
int dx[]={-1,0,1,0},dy[]={0,1,0,-1};
void dfs_set(int y, int x, int value){
    map[y][x]=value;
    zeroCnt++;
    for(int i=0;i<4;i++){
        if(map[y+dy[i]][x+dx[i]]==0){
            dfs_set(y+dy[i],x+dx[i],value);
        }
    }
}
void bfs(int y, int x){
    
    
}
int main(){
    fill(&map[0][0],&map[119][119],4);
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++)
        for(int k=1;k<=m;k++)
            scanf("%d",&map[i][k]);
            
    // 외부 공기는 2로 세팅
    dfs_set(1,1,2);
   
    while(zeroCnt<n*m){
        ans++;
        for(int i=1;i<=n;i++){
            for(int k=1;k<=m;k++){
                // 외부 면과 2면 이상 접해 있는 치즈를 찾는다.
                if(map[i][k]==1){
                    int sideCnt =0;
                    for(int t=0;t<4;t++)
                        if(map[i+dy[t]][k+dx[t]]== 2) sideCnt++;
                    if(sideCnt>=2) q.push(P(i,k));
                }
                
            }
        }
        
        while(!q.empty()){
            // 접촉면 2인 위치를 녹아 없어지게 한다.
            P tmp = q.front();
            map[tmp.y][tmp.x]=2;
            zeroCnt++;
            // 해당 치즈가 녹아 없어지므로서 내부공기와 외부공기가 연결되는지 확인
            for(int t=0;t<4;t++)
                if(map[tmp.y+dy[t]][tmp.x+dx[t]]== 0)
                    dfs_set(tmp.y+dy[t],tmp.x+dx[t],2);
            q.pop();
        }
        
    }
    printf("%d",ans);
    return 0;
}














