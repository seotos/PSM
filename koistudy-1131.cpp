#include<stdio.h>
int n, k;
long long int f(int a){
    if(a>n) return 0;
    if(a!=k && a!=n) return f(a+1)+f(a+2)+f(a+3);
    if(a==n) return 1;
    else return 0;
}
int main(){
    scanf("%d%d",&n,&k);
    if(n==k) printf("0");
    else printf("%lld",f(0));
    return 0;
}