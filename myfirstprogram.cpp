//Header file library that lets us work with input and output objects, such as cout. Header files add functionality to C++ programs
#include <iostream>

//using namespace std means that we can use names for objects and variables from the standard library.
using namespace std;

//This is called a function. Any code inside its curly brackets {} will be executed.
int main()
{
    //cout (pronounced "see-out") is an object used together with the insertion operator (<<) to output/print text. In our example it will output "Hello World".
    cout << "hello world";

    //return 0 ends the main function
    return 0;
}

//some C++ programs that runs without the standard namespace library. The using namespace std line can be omitted and replaced with the std keyword, followed by the :: operator for some objects:

/*
insertion operator (<<)
extraction operator (>>)
*/

/*
    if (n==1)
    {
        printf("one");
    }
    else if (n==2)
    {
        printf("two");
    }
    else if (n==3)
    {
        printf("three");
    }
    else if (n==4)
    {
        printf("four");
    }
    else if (n==5)
    {
        printf("five");
    }
    else if (n==6)
    {
        printf("six");
    }
    else if (n==7)
    {
        printf("seven");
    }
    else if (n==8)
    {
        printf("eight");
    }
    else if (n==9)
    {
        printf("nine");
    }
    else
    {
        printf("Greater than 9");
    }
*/

/*
Boiler plate

#include <bits/stdc++.h>
using namespace std;

int main()
{
    return 0;
}


*/