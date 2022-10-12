#include <iostream>
using namespace std;
class complex{
    int real,img;
    public:
        void getdata(){
            cout<<"Enter the real and img"<<endl;
            cin>>real>>img;
        }
        void showdata(){
            cout<<real<<"+i"<<img<<endl;
        }
        void add(complex&,complex&);
        complex check(complex b){
        
                if(this->real>b.real){
                return *this;

            }
        else return b;
        }
        };
void complex :: add (complex &a,complex &b){
    real=a.real+b.real;
    img=a.img+b.img;
}
int main()
{
    complex a,b,c;
    a.getdata();b.getdata();
    c.add(a,b);
    c.showdata();
    c=a.check(b);
    c.showdata();
return 0;
}