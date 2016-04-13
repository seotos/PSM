#include<iostream>
#include<string>
using namespace std;
string bin,tri;
int ch(string str, int k){
    int tmp=0,digit=1;
    for(int i = str.size()-1; i>=0; i--){
        tmp+=((str[i]-'0')*digit);
        digit*=k;
    }
    return tmp;
}
int main(){
    int t=0;
    cin>>bin>>tri;
    for(int bincnt=0;bincnt<bin.size();bincnt++){
        string tmpbin,tmptri;
        tmpbin = bin;
        t=0;
        // binary change
        if(tmpbin[bincnt]=='0') tmpbin[bincnt]='1';
        else tmpbin[bincnt]='0';
        // 3digit change 0->1, 1->2, 2->0
        for(int tricnt=0;tricnt<tri.size();tricnt++){
            tmptri=tri;
            if(tmptri[tricnt]=='0') tmptri[tricnt]='1';
            else if(tmptri[tricnt]=='1') tmptri[tricnt]='2';
            else tmptri[tricnt]='0';
            t=ch(tmpbin,2);
            if(t== ch(tmptri,3)) {
                cout<<t;
                return 0;
            }
        }
        // 3digit change 0->2, 1->0, 2->1
        for(int tricnt=0;tricnt<tri.size();tricnt++){
            tmptri=tri;
            if(tmptri[tricnt]=='0') tmptri[tricnt]='2';
            else if(tmptri[tricnt]=='1') tmptri[tricnt]='0';
            else tmptri[tricnt]='1';
            t=ch(tmpbin,2);
            if(t== ch(tmptri,3)) {
                cout<<t;
                return 0;
            }
        }
        
    }
    
}
