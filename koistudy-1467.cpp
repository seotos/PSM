#include<stdio.h>
long long bi[32]={0,1};
long long int ans=0L;
int main(){
  int t;
  long long int n;
  for(int i=2;i<=31;i++)
    bi[i]=bi[i-1]+(1<<(i-1));

  scanf("%d",&t);

  for(int i=1;i<=t;i++){
      int k=0;
      scanf("%lld",&n);
      if(n%2==0) ans=(n/2)*(n+1);
      else ans =n*((n+1)/2);
      for(;k<=31;k++){
          if(n<(1<<k)) break;
      }
      ans=ans-2*bi[k];
      printf("%lld\n",ans);
  }
  return 0;
}
