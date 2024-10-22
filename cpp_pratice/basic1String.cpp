#include<iostream>
#include<string> // need for getline() function
using namespace std;

int main()
{
    string s ;
    cout << "Enter a string ";
    getline(cin,s);

    cout << "You have entered";
    cout << s << endl;

    s.push_back('Y');
    cout << "After using pushback function " << s << endl;

    s.pop_back();
    cout << "After using popback function " << s << endl;
    
    return 0;
}