#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    // int n1,n2;
    string s1,s2;
    char temp;
    cin >> s1 >>s2;
    int s1_size = s1.size(), s2_size = s2.size();
    cout << s1_size << " " << s2_size;
    cout << "\n" << s1 << s2 << "\n";
    temp = s1[0];
    s1[0] = s2[0];
    s2[0] = temp;
    cout << s1 << " " << s2;
    return 0;
}