#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> x){
    for (int i = 0; i < 5; i++)
    {
        cout<<x[i]<<" ";
    }
    
}
int main()
{
    int n;
    vector <int> vec1;
    for (int i = 0; i < 5; i++)
    {
        cout<<"enter the number : ";
        cin >>n;
        vec1.push_back(n);
    }
    display(vec1);
return 0;
}