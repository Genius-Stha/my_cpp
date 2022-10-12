// Example of Copy Constructor
#include<iostream>
using namespace std;
class code
{int id;
public:
    code(){}
    code(int a,int b){id=a+b;}
    
    code(code &x){
    id=x.id;
    }
    
    void display(){
    cout<<id;
    }
};
int main(){
code A(100,200);//object A is created and initialized
code B(A); //Statement 1
code C=B; //copy contructor called again
code D=A=B=C=code(2,2); //D is created, not initialized
cout<<"\nid of A:"; A.display();
cout<<"\nid of B:"; B.display();
cout<<"\nid of C:"; C.display();
cout<<"\nid of D:"; D.display();
return 0;
}