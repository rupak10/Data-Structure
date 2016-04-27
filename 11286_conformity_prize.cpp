#include<iostream>
#include<cstdio>
#include<queue>
#include<set>
#include<map>

using namespace std;

int main(){
    int n;
    while(scanf("%d",&n)==1){
        if(!n){
            break;
        }
        typedef map<set<int>,int>msi;
        msi mapping;
        for(int i=0;i<n;i++){
            set<int>courses;
            int const MAX_COURSES=5;
            for(int j=0;j<MAX_COURSES;j++){
                int course;
                cin>>course;
                courses.insert(course);
            }
            if(mapping.find(courses)==mapping.end()){
                mapping[courses]=1;
            }
            else{
                mapping[courses]++;
            }

        }

        priority_queue<int>pq;
        for(msi::iterator i=mapping.begin();i!=mapping.end();i++){
            pq.push(i->second);
        }
        int popular=pq.top();
        int popularity=0;
        while(pq.size()&&popular==pq.top()){
            popularity+=pq.top();
            pq.pop();
        }
        cout<<popularity<<endl;
    }

    return 0;
}
