#include <cstdio>
#include <set>
#include <iostream>

using namespace std;

int main(){
 multiset<long>s;
 multiset<long>::iterator sit,rrsit;

 long T,n,cost,tmp;

 while(scanf("%ld", &T) && T){
  cost = 0;
  while(T--){
   scanf("%ld",&n);
   while(n--){
    scanf("%ld",&tmp);
    s.insert(tmp);
   }
   sit = s.begin();

   rrsit = s.end();
   --rrsit;

   cost += (*(rrsit) - *(sit));

   s.erase(sit);
   s.erase(rrsit);
  }
  printf("%ld\n",cost);
  s.clear();
 }
 return 0;
}
