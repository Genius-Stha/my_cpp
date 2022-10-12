#include<iostream>

using namespace std;
class test {
    int code;
    static int count;
    public:
        void setcode() {
            code = ++count;
        }
    void showcode() {
        cout << "Object number:" << code << "\n";
    }
    static void showcount() {
        cout << "Count:" << count << endl;
    }
};
int test::count;
int main() {
    test t1, t2;
    t1.setcode();
    t2.setcode();
    cout << "Accessing static function with .(dot operator)" << endl;
    t1.showcount();
    t2.showcount();
    cout << "Accessing static function with::(scope resolution operator)"<<endl;
    test::showcount();
    test::showcount();
    test t3;
    t3.test::setcode();
    test::showcount();
    t1.showcode();
    t2.showcode();
    t3.showcode();
    return 0;
}
