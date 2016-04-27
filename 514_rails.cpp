#include <iostream>
#include <conio.h>
#include <queue>
#include <stack>
#include <fstream>
using namespace std;

int main()
{
	queue<int>Q;
	stack<int>S;
	int flg=0,i,j,input,N,m,temp;

	//freopen("tesT.txt","r",stdin);
	ifstream fin("in");

	while(1){
	 cin>>N;
	 if(N==0)break;
	 for(i=0;;i++){
	  for(j=1;j<=N;j++){
		  cin>>input;
		  if(input==0){
		   flg=1;
		   break;
		  }
		  Q.push(input);
		  S.push(j);
         while(1){
             if(Q.size()==0)break;
		  if(Q.front()==S.top()){
		  Q.pop();
		  S.pop();
		  }
		  else break;

         }
	 }

	 temp=Q.size();
	 for(m=1;m<=temp;m++){
         if(Q.front()==S.top()){
	  Q.pop();
	  S.pop();
         }
	 }

	if(flg==1){
	cout<<"\n";
	flg=0;
	break;
	}
	if(Q.size()==0 && S.size()==0)cout<<"Yes\n";
	else {
	    cout<<"No\n";


	}
	temp=Q.size();
	for(m=1;m<=temp;m++){
		Q.pop();
		S.pop();
	}


	}
	}
	getch();

	return 0;

}
