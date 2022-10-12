 /*#include <iostream>
 using namespace std;
class is
{
private:
    int a;
public:
    is();
};
 is::is()     {
    a=888888;

    cout << this<<endl;       //this holds address of the object

    cout<< this->a;     //arrow is used to access the data
}
int main()
{
    is bb;

return 0;
}*/
#include<iostream>
using namespace std;
class name {
    char str[15];
    int age;
        public:
        void input(){
            cout<<"Enter Name:";
            cin>>str;
            cout<<"Enter Age:";
            cin>>age;
        }
            void show(){
            cout<<"\n\nElder Person";
            cout<<"\nName:"<<str;
            cout<<"\nAge:"<<age;
        }
name display (name x) {
    cout<<"\nContents of Object n1(this pointer)";
    cout<<"\nName:"<<this->str;
    cout<<"\nAge:"<<this->age;
    cout<<"\n\nContents of Object n2(x)";
    cout<<"\nName:"<<x.str;
    cout<<"\nAge:"<<x.age;
if(this->age>x.age)
    return *this;
else
    return x;
}
};
int main(){
    name n,n1,n2;
    n1.input();
    n2.input();
    n=n1.display(n2);
    n.show();
    return 0;
}

