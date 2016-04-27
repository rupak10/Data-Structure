#include<iostream>
#include<set>

using namespace std;

int main(){

    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        set<int>snowflakes;
        for(int i=0;i<n;i++){
            int snowflake;
            cin>>snowflake;
            snowflakes.insert(snowflake);
        }
        cout<<snowflakes.size()<<endl;
    }

    return 0;
}
