#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,var;
    vector<int>vec;
    cin>>n;
    for (int i=0; i<n; i++) {
        cin>>var;
        vec.push_back(var);
    }
    sort(vec.begin(),vec.end()); //ascending order
    //sort(vec.begin(),vec.end(),greater<int>());
    for (int i=0; i<n; i++) {
        cout<<vec[i]<<" ";
    } 
    return 0;
}

