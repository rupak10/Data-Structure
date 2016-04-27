#include<iostream>
#include<cstdio>
#include<map>
#include<string>

using namespace std;

int main(){

    int n,total;
    char name[35];
    map<string,int> logbook;
    scanf("%d\n",&n);
    while(n--){
        total=0;

        while(gets(name)){
            if(logbook.count(string(name))==0){
                logbook[string(name)]=1;
            }
            else{
               logbook[string(name)]=logbook[string(name)]+1;
            }
            total++;
        }
        map<string,int>::iterator it;
        for(it=logbook.begin();it!=logbook.end();it++){
            printf("%s %.4lf\n",(*it).first.data(),
                   (double) (*it).second / (double) total * 100.0);
        }

        if(n>0){
            printf("\n");
            logbook.clear();
        }


    }

    return 0;
}
