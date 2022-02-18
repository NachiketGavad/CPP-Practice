//Both \n and endl are used to break lines. However, \n is used more often and is the preferred way.

#include <iostream>
using namespace std;

int main()
{
    cout << "hello new line\n";
    cout << "hello end 1" << endl;
    int x = 5, y = 6;
    int z = x+y;
    cout << z;
    const float pi = 3.14; // error: assignment of read-only variable 'pi' if opt to change
    return 0;
}

// This is a comment

// Multi-line comments start with /* and ends with */.

/*
In C++, there are different types of variables (defined with different keywords), for example:

int - stores integers (whole numbers), without decimals, such as 123 or -123
double - stores floating point numbers, with decimals, such as 19.99 or -19.99
char - stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes
string - stores text, such as "Hello World". String values are surrounded by double quotes
bool - stores values with two states: true or false
*/

/*
All C++ variables must be identified with unique names.
These unique names are called identifiers.
Identifiers can be short names (like x and y) or more descriptive names (age, sum, totalVolume).
Note: It is recommended to use descriptive names in order to create understandable and maintainable code
*/

/*
Constants
When you do not want others (or yourself) to override existing variable values, use the const keyword (this will declare the variable as 
"constant", which means unchangeable and read-only):
*/