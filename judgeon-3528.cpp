//
//  judgeon-3538.cpp
//  PSM
//
//  Created by on 2016. 7. 14..
//  Copyright © 2016년 kbs. All rights reserved.
//
/*
4 4
7 9 8 5
6 3 2 4
5 4 1 5
2 6 1 1

7 9
5 6 4 5 3 6 3 4 5 
6 3 7 5 5 6 7 5 6 
5 4 4 3 3 7 5 4 3 
6 4 7 7 5 3 4 6 7 
5 3 7 7 7 3 7 4 5 
6 7 3 6 6 3 3 7 4
5 6 5 6 5 6 5 6 5
 
 9
 */
#include<stdio.h>
#include<queue>
#define abs(a) ((a)>0?(a):-(a))
using namespace std;
struct P{
	int y,x;
	P(int _y,int _x){
		x=_x;
		y=_y;
	}
};
queue<P> q;
int n, m;
int map[1100][1100];
int visit[1100][1100];
int dx[]={0,1,-1,0}, dy[]={1,0,0,-1};
int main(){
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++)
		for(int k=1;k<=m;k++)
			scanf("%d",&map[i][k]);
	q.push(P(1,1));
	visit[1][1]=1;
	while(!q.empty()){
		P tmp = q.front();
		if(tmp.y ==n && tmp.x ==m) break;
		for(int i=0;i<4;i++){
			if( abs(map[tmp.y+dy[i]][tmp.x+dx[i]] - map[tmp.y][tmp.x])<=1){
				if(visit[tmp.y+dy[i]][tmp.x+dx[i]] ==0
				   || visit[tmp.y][tmp.x]+1 < visit[tmp.y+dy[i]][tmp.x+dx[i]] ){
					q.push(P(tmp.y+dy[i],tmp.x+dx[i]));
					visit[tmp.y+dy[i]][tmp.x+dx[i]] =visit[tmp.y][tmp.x]+1;
				}
			}
		}
		q.pop();
	}
	printf("%d",visit[n][m]);
	return 0;
}


