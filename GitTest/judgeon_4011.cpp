/*
곱셈
KOI 2005 지역초등 2

*/
#include<stdio.h>
int main(){
	int a,b;
	 scanf("%d%d",&a,&b);	
	printf("%d\n%d\n%d\n%d",a*(b%10),a*((b/10)%10),a*((b/100)%10),a*b);
	return 0;
}




