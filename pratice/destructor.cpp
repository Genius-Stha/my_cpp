#include <iostream>
using namespace std;
 int a=1;
class hello{
    public:
    hello(){
       
        cout<<a<<endl;
         a++;
    }
    ~hello(){
        a--;
        cout<<a<<endl;
    }
};
int main(){
    hello a,b,c,d,e,f;
    cout << "a";
return 0;
}