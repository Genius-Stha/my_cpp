#include <iostream>
using namespace std;
 
int main()
{
    int a;   
    cin>>a;   
    int *ptr;
    ptr= new int[a];
    for (int i = 0; i < a; i++)
    {
        ptr[i]=i;
    }
        for (int i = 0; i < a; i++)
    {
        cout<<ptr[i];
    }
delete[] ptr;
return 0;
}