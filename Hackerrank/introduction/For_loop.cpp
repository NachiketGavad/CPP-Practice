#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main() {
    int num1, num2,i,j;
    // Complete the code.
    // curly braces for array in c++ 
    string arr[9]= {"one", "two", "three", "four", "five", "six", 
    "seven", "eight", "nine"};

    cin >> num1>> num2;

    for ( i = num1; i <= num2; i++)
    {
        j = i-1;
        if (i<=9)
        {
            cout << arr[j] << "\n";
        }
        else if (i%2 == 0)
        {
            cout << "even"<< "\n";
        }
        else if (i%2 != 0)
        {
            cout << "odd"<< "\n";
        }
        
    }
    

    return 0;
}