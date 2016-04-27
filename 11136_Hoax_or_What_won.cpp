#include<iostream>
#include<cstdio>
#include<set>

using namespace std;

int main(){
    long t,n,bill,cost;
    multiset<long>s;
    multiset<long>::iterator bg,en;
    while(scanf("%ld",&t)==1){

        if(!t){
            break;
        }

        cost=0;
        while(t--){
          cin>>n;

          while(n--){
             cin>>bill;
             s.insert(bill);
          }

          bg=s.begin();
          en=s.end();
          --en;

          cost+=(*(en)-*(bg));

          s.erase(bg);
          s.erase(en);
        }
        cout<<cost<<endl;
        s.clear();
    }

    return 0;
}
