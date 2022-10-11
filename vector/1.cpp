#include<iostream>
using namespace std;
class Solution {
public:
    void isPalindrome(int x) {
        int a;
        long temp=0;
        a=x;
            while(a!=0){
                temp*=10;
                temp+=a%10;
                a=a/10;
            }
        if(x==temp)
            cout<< true;
        else
        cout<< false;
    }
};
int main(){
    Solution a;
    int x;
    cin >>x;
    a.isPalindrome(x);
}