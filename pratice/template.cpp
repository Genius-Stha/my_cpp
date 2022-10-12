#include <iostream>
using namespace std;
template<class t>
class add{
    t a,b;
    public:
    add(t x, t y){a=x;b=y;};
    void addd(){
        cout<< a+b;
    }
};
int main()
{
    add <float>a(5.55,6);
    a.addd();
return 0;
}