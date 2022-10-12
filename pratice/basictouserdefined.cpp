#include<iostream> 
using namespace std;
class meter
{
    float length;

public:
    meter()
    {
        length = 0;
    }
    meter(float l)
    {
        length = l;
    }
    void show()
    {
        cout << length;
    }
};
int main()
{
    meter m;
    float a;
    cin >> a;
    m = a;
    m.show();
    return 0;
}