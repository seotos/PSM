#include<stdio.h>
#include<string.h>
#define abs(a) ((a)>0?(a):-(a))
int n,ans;
char str1[120],str2[120];
int main(){
  scanf("%d",&n);
  scanf("%s",str1);
  int str1_len = strlen(str1);
  for(int i=2;i<=n;i++){
      int cnt=0;
      int flag[120]={0};
      scanf("%s",str2);
      int str2_len = strlen(str2);
      if(abs(str2_len-str1_len)<2){
        for(int k=0;k<str1_len;k++){
            for(int m=0;m<str2_len;m++){
                if(str1[k] == str2[m]){
                    if(!flag[m]) {
                        flag[m]=1;
                        cnt++;
                        break;
                    }
                }
            }
        }
        if(str2_len-cnt==1 ||  str2_len-cnt==0 || str2_len-cnt==-1)
        ans++;
      }
  }
  printf("%d",ans);
  return 0;
}