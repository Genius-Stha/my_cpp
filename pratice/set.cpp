#include <iostream>
#include <set>
using namespace std;
/*
1: Add an element x to the set.
2: Delete an element x from the set. (If the number x is not present in the set, then do nothing).
3: If the number x is present in the set, then print "Yes"(without quotes) else print "No"(without quotes).
q is no of queries
*/


int main(){
set<int>s;
int q;
cin>>q;
while(q--){
    int y;
    long long int x;
    cin>>y>>x;
    if (y==1)  s.insert(x);
    else if (y==2)  s.erase(x);
    else if(y==3){
       set<int>::iterator itr=s.find(x);
       if(itr==s.end()) cout<<"No"<<endl;
       else cout<<"Yes"<<endl;
    }
}  
return 0;
}