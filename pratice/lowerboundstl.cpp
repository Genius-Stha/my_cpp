#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,q,find;
    cin>>n;
    vector<int> ar(n);
    // take array input
    for (int i = 0; i<n; i++) {
        cin>>ar[i];
    }
    // take query input
    cin>>q;
    for (int i =0; i<q; i++) {
        cin>>find;
        auto res = lower_bound(ar.begin(),ar.end(),find);
        if (*res == find) {
            cout<<"Yes "<<res-ar.begin()+1<<endl;
        }
        else {
            cout<<"No "<<res-ar.begin()+1<<endl;
        }
    }
    return 0;
}

