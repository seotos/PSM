//
//  acmicpc-1932.cpp
//  PSM
//
//  Created by on 2016. 7. 25..
//  Copyright © 2016년 kbs. All rights reserved.
//
/*
5
7
3 8
8 1 0
2 7 4 4
4 5 2 6 5

30
 */

#include <stdio.h>
#define max(a,b) ((a)>(b)? (a):(b))
int ans[600][600],map[600][600];
int n;
int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		for(int k=1;k<=i;k++)
			scanf("%d",&map[i][k]);
	}
	for(int i=1;i<=n;i++)
		for(int k=1;k<=i;k++)
			ans[i][k]=max(ans[i-1][k],ans[i-1][k-1]) + map[i][k];
	int result =0;
	for(int i=1;i<=n;i++)
		result = max(ans[n][i],result);
	printf("%d",result);
	return 0;
}

/*
kyu_wifi
*/