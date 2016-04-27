#include<iostream>
#include<cstdio>
#include<queue>
using namespace std;

int main(){

    int n;
    while(scanf("%d",&n)==1){
        if(n==0){
            break;
        }
        priority_queue<int>pq;
        int value;
        for(int i=1;i<=n;i++){
            cin>>value;
            pq.push(-value);
        }
        int sum=0,c=0;
        for(int k=0;k<n-1;k++){
            int b=-pq.top();
            pq.pop();
            int d=-pq.top();
            pq.pop();
            c=b+d;
            sum+=c;
            pq.push(-c);
        }
        cout<<sum<<endl;
    }

    return 0;
}
