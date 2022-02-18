//Strings
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string type_str;
    cin >> type_str;
    cout << type_str;

    /*
    String Concatenation :
    -> + operator can be used between strings to add them together to make a new string
    -> also concatenate strings with the append() function
    -> C++ uses the + operator for both addition and concatenation.
    -> Numbers are added. Strings are concatenated
    ->  It is up to you whether you want to use + or append(). 
        The major difference between the two, is that the append() function is much faster. 
        However, for testing and such, it might be easier to just use +.
    */

    string f_name, l_name, full_name;
    cout << "f_name\n";
    cin >> f_name;
    cout << "l_name\n";
    cin >> l_name;
    full_name = f_name + " " + l_name;
    cout << full_name;

    full_name = f_name.append(l_name);
    cout << "\n" + full_name;

    /*
    String Length:
    -> To get the length of a string, use the length() function
    -> some C++ programs use the size() function to get the length of a string
    -> single quotes for char & double quotes for string
    */

    int txt_size = full_name.length();
    cout << txt_size;

    txt_size = full_name.size();
    cout << txt_size;

    /*
    Access Strings:
    ->  You can access the characters in a string by referring to its index number inside square brackets []
    ->  String indexes start with 0: [0] is the first character. [1] is the second character, etc.
    ->  To change the value of a specific character in a string, refer to the index number, and use single quotes
    
    */
    cout << "\nenter index to see char";
    int ind;
    char other;
    cin >> ind;
    cout << full_name[ind];
    cout << "\nenter other char"; 
    cin >> other;
    full_name[ind] = other; 
    cout << "\n" + full_name;

    /*
    User Input Strings:
    ->  It is possible to use the extraction operator >> on cin to display a string entered by a user
    ->  cin considers a space (whitespace, tabs, etc) as a terminating character, 
    ->  which means that it can only display a single word (even if you type many words)
    ->  use the getline() function to read a line of text. 
    ->  It takes cin as the first parameter, and the string variable as second
    */

    cout << "\nenter string\n";
    getline(cin, full_name);
    cout << "\n" + full_name;

    /*
    Omitting Namespace:
    ->  You might see some C++ programs that runs without the standard namespace library. 
    ->  The using namespace std line can be omitted and replaced with the std keyword, followed by the :: operator for string (and cout) objects
    */

    return 0;
}

