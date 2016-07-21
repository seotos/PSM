//
//  acmicpc-2178.cpp
//  PSM
//
//  Created by on 2016. 7. 14..
//  Copyright © 2016년 kbs. All rights reserved.
//

/*
4 6
101111
101010
101011
111011
 
 15
 */
#include<stdio.h>
#include<queue>
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
char map[110][110];
int visit[110][110];
int dx[]={0,1,-1,0}, dy[]={1,0,0,-1};
int main(){
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++)
		scanf("%s",&map[i][1]);
	q.push(P(1,1));
	visit[1][1]=1;
	while(!q.empty()){
		P tmp = q.front();
		if(tmp.y ==n && tmp.x ==m) break;
		for(int i=0;i<4;i++){
			if( map[tmp.y+dy[i]][tmp.x+dx[i]] == '1'){
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

