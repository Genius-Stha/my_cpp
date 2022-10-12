#include <sstream>
#include <vector>
#include <iostream>
using namespace std;
/* Sample Input

23,4,56 //string

Sample Output

23
4
56

*/

vector<int> parseInts(string str) {
    vector <int>out;
    int temp;
    char c;
    stringstream ss(str);
    while(ss>>temp){
        out.push_back(temp);
        ss>>c;
    }
    return out;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}