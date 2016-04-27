#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

int main(){

    int n,i,j,d;
    bool flag;
    int arr[3050]={0};
    int check[3050]={0};

    while(scanf("%d",&n)==1){

        for(i=0;i<n;i++){
            cin>>arr[i];
            check[i]=0;
        }
        for(int x=0;x<n-1;x++){
            int d=arr[x]-arr[x+1];
            d=abs(d);
            check[d]=1;
        }
        flag=false;
        for(j=1;j<n;j++){
            if(check[j]!=1){
                flag=true;
                break;
            }
        }

        if(flag){
            printf("Not jolly\n");
        }
        else{
            printf("Jolly\n");
        }

    }

    return 0;
}
