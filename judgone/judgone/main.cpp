#include<stdio.h>
int main(){
    int n,ans=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int tmp,exp;
        scanf("%d",&tmp);
        exp = tmp%10;
        tmp = tmp/10;
        int result = 1;
        for(int k=1;k<=exp;k++)
            result=tmp*result;
        ans+=result;
        
    }
    printf("%d",ans);
    return 0;
}
