#include<iostream>
#include<stack>
#include<queue>
#include<cstdio>

using namespace std;

int main(){

    int n,opt,tmp;
    bool ss,qq,pq;
    while(scanf("%d",&n)==1){
        ss=qq=pq=true;
        stack<int>S;
        queue<int>Q;
        priority_queue<int>PQ;

        while(n--){
            cin>>opt>>tmp;
            if(opt==1){
               if(ss){
                S.push(tmp);
                }
                if(qq){
                    Q.push(tmp);
                }
                if(pq){
                    PQ.push(tmp);
                }
            }
            else if(opt==2){
               if(!S.empty()&&S.top()==tmp){
                   S.pop();
               }
               else{
                    ss=false;
               }

               if(!Q.empty()&&Q.front()==tmp){
                   Q.pop();
               }
               else{
                    qq=false;
               }

               if(!PQ.empty()&&PQ.top()==tmp){
                   PQ.pop();
               }
               else{
                    pq=false;
               }
            }
        }
        if(ss&&!qq&&!pq){
                cout<<"stack"<<endl;
            }
            else if(!ss&&qq&&!pq){
                cout<<"queue"<<endl;
            }
            else if(!ss&&!qq&&pq){
                cout<<"priority queue"<<endl;
            }
            else if(ss||qq||pq){
                cout<<"not sure"<<endl;
            }
            else{
                cout<<"impossible"<<endl;
            }
        }

    return 0;
}
