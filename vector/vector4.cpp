#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,var;
    vector<int>vec;
    cout<<"enter the number of vector:";
    cin>>n;
    for (int i=0; i<n; i++) {
        cin>>var;
        vec.push_back(var);
    }
    int pos,x,y;
    cout<<"enter the position you want to delete :";
    cin>>pos;
    cout<<"enter the range :";
    cin>>x>>y;
    vec.erase(vec.begin()+pos-1);
    vec.erase(vec.begin()+x+1,vec.begin()+y-1);
    cout<<vec.size()<<endl;
    for (int i = 0; i < vec.size(); i++)
    {
        cout<<vec[i]<<" ";
    }
    return 0;
}
