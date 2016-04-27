#include<iostream>
#include<map>

using namespace std;

int main(){
    int n,m,cd,counter;
    while(cin>>n>>m){
        if(!n && !m){
            break;
        }
        map<int,int>mp;
        counter=0;
        for(int i=0;i<n;i++){
            cin>>cd;
            mp[cd]=1;
        }
        for(int j=0;j<m;j++){
           cin>>cd;
           if(mp[cd]==1){
                counter++;
           }
        }
        cout<<counter<<endl;
        mp.clear();
    }

    return 0;
}

