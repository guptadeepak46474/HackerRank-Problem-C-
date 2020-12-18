#include <iostream>
#include <sstream>
using namespace std;

class Student
{
private:
    int age,standard;
    string first_name, last_name;
public:
    void input(){
        cin >> age >> first_name >> last_name >> standard;
    }
    void output()
    {
        cout<<age<<endl;
        cout<<last_name<<", "<<first_name<<endl;
        cout<<standard<<"\n"<<endl;
        cout << age <<"," << first_name <<"," << last_name <<"," << standard;
    }
};

int main()
{
    Student st;
    st.input();
    st.output();
    return 0;
}