// std::map <key_type, data_type>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;

/*
map<string,int>m; //Creates a map m where key_type is of type string and data_type is of type int.
int length=m.size();
m.insert(make_pair("hello",9)); //Here the pair is inserted into the map where the key is "hello" and the value associated with it is 9.
m.erase(val); //Erases the pair from the map where the key_type is val.
map<string,int>::iterator itr=m.find(val); //Gives the iterator to the element val if it is found otherwise returns m.end() .
Ex: map<string,int>::iterator itr=m.find("Maps"); //If Maps is not present as the key value then itr==m.end().
To get the value stored of the key "MAPS" we can do m["MAPS"] or we can get the iterator using the find function and then by itr->second we can access the value.
*/

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int i, n, x, y;
    string z;
    map<string, int> m;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> x;
        switch (x)
        {
        case 1:
            cin >> z;
            cin >> y;
            // m.insert(make_pair(z, y)); // Here the pair is inserted into the map where the key is
            m[z]+=y; // pair is created and y is added to its second also can access using itr->second
            break;
        case 2:
            cin >> z;
            m.erase(z);
            break;
        case 3:
            cin >> z;
            cout << m[z] << "\n"; // To get the value stored of the key
            break;

        default:
            break;
        }
    }

    return 0;
}
