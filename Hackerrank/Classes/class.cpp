#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/

class Student
{
    // define variables outside functions other wise undefined identifier error in functions
private:
    int age;
    string first_name;
    string last_name;
    int standard;

public:
    void set_age(int a)
    {
        age = a;
    }
    int get_age()
    {
        return age;
    }
    void set_standard(int s)
    {
        standard = s;
    }
    void set_first_name(string first)
    {
        first_name = first;
    }
    void set_last_name(string last)
    {
        last_name = last;
    }
    string get_last_name()
    {
        return last_name;
    }
    int get_standard()
    {
        return standard;
    }
    string get_first_name()
    {
        return first_name;
    }
    string to_string()
    {
        //stringstream //insertion operator
        stringstream newstr;
        newstr << age << "," << first_name << "," << last_name + "," << standard;
        return newstr.str();
    }
};

int main()
{
    int age, standard;
    string first_name, last_name;

    cin >> age >> first_name >> last_name >> standard;

    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);

    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();

    return 0;
}