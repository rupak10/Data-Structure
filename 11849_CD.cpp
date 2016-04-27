#include<iostream>
#include<cstdio>
#include<set>

using namespace std;

int main(){
    int n,m;
    while(scanf("%d %d",&n,&m)==2){
        if(!n && !m){
            break;
        }
        set<int>setN;
        set<int>setF;
        for(int i=0;i<n;i++){
            int cdN;
            cin>>cdN;
            setN.insert(cdN);
        }
        for(int j=0;j<m;j++){
            int cdM;
            cin>>cdM;
            if(setN.find(cdM)!=setN.end()){
                setF.insert(cdM);
            }
        }

        cout<<setF.size()<<endl;
        //setN.clear();
        //setF.clear();
    }

    return 0;
}
