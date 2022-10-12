#include<iostream>
using namespace std;
class num{
    int a,b;
    public:
    num()
    {
        cout<<"enter a and b";
        cin>>a>>b;
        
    }
    void operator ++ (int){
        a++;b++;
        cout<<a<<b<<endl;
    }
    void operator -- (int){
        a--;b--;
        cout<<a<<b<<endl;

    }
};
int main(){
    num a;
    a++;
    a--;
}