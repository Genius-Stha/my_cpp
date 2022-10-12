#include <iostream>
using namespace std;
class hello{
    public:
    int a,b;


}; 
int main()
{
    hello *lmao,a;
    lmao=&a;
    lmao->a=0;
    lmao->b=1;
    cout<<lmao->a;
    cout<<lmao->b;

return 0;
}