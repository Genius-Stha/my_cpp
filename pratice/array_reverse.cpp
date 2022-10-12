#include <iostream>
using namespace std;

int main()
{
    int n;
    int *p;
    cout<<"enter the number of array:";
    cin>>n;
    int s=0,e=n-1;
    p=new int[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"p["<<i<<"] :";
        cin>>p[i];
    }
    while (s<e)
    {
        swap(p[s],p[e]);
        s++;
        e--;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<p[i];
    }  
    delete []p;  
return 0;
}