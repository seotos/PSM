//
//  koistudy-1480.cpp
//  PSM
//
//  Created by  on 2016. 7. 8..
//  Copyright © 2016년 kbs. All rights reserved.
//
/*
 입력
 1.000 1.000 2.000 3.000
 -1.01 0 0.4 0
 -2.01 0 -0.3 0
 0 -1.01 0 0.4
 0 -2.01 0 -0.3
 출력
 6
 */
#include <stdio.h>
int main(){
	double x1,y1,x2,y2;
	scanf("%lf%lf%lf%lf",&x1,&y1,&x2,&y2);
	if(x1<0 and x2<0) {x1=-x1,x2=-x2;}
	if(y1<0 and y2<0) {y1=-y1,y2=-y2;}
	double tmp;
	if(x1>x2) { tmp = x1; x1 = x2; x2 =tmp;}
	if(y1>y2) { tmp = y1; y1 = y2; y2 =tmp;}
	long long x,y;
	if(x1>=0) x=(long long int)(x1+0.999);
	else x = (long long int) (x1);
	if(y1>=0) y=(long long int)(y1+0.999);
	else y=int(y1);
	printf("%lld",((long long int)(x2)-x+1)*((long long int)(y2)-y+1));
	return 0;
}