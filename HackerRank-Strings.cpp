#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    int temp;
    string s, c;
    cin>>s>>c;
    string z = s + c;
    cout<<s.size()<<" "<<c.size()<<endl;
    cout<<z<<endl;
    temp = s[0];
    s[0] = c[0];
    c[0] = temp;
    cout<<s<<" "<<c<<endl;

    return 0;
}