#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>

using namespace std;

struct x{
    char ch;
    double value;
}a[102];

int main(){

    int t,k,m;
    int flag;
    double cents,dollar;
    //string line[150002];
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>k;
        for(int j=0;j<k;j++){
            cin>>a[j].ch;
            cin>>a[j].value;
        }
        cin>>m;
        char text[10002];
        cents=0;
        dollar=0;
        getchar();
        for(int l=1;l<=m;l++){
            gets(text);
            int ln=strlen(text);
            for(int n=0;n<ln;n++){
                flag=0;
                for(int p=0;p<k;p++){
                   if(text[n]==a[p].ch){
                      cents+=a[p].value;
                      flag=1;
                      break;
                   }
                }

                if(flag!=1){
                    cents+=0;
                }

            }

        }

        dollar=cents/100;
        printf("%.2lf$\n",dollar);

    }

    return 0;
}
