//
//  judgeon-3981.cpp
//  PSM
//
//  Created by KimBongSeok on 2016. 6. 21..
//  Copyright © 2016년 KimBongSeok. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string>
int n;
using namespace std;
string ans;
bool p=false;
// 좋은 수열인지 체크
int pass(string s){
    int len = (int)s.length();
    for(int i=1; i<=len/2;i++){
        int flag =0;
        for(int r1=len-i,r2=r1-i;r1<len; r1++,r2++){
            if(s[r1]!=s[r2]) {
                flag=1;
                break;
            }
        }
        if(flag==0) return 0; // 좋은수열이 아님
    }
    return 1; // 좋은 수열임
}
void back(int k){
    if(n==k) {
        p=true;
        printf("%s",ans.c_str());
    }
    else{
        for(int i=1;i<=3;i++){
            if(p) return ;
            string t = ans;
            if(pass(ans + (char)('0'+i))) {
                // i를 추가한 수열생성
                ans += (char)('0'+i);
                back(k+1);
            }
            ans= t; // 원상복귀
        }
            
    }
}
int main(){
    scanf("%d",&n);
    back(0);
}

