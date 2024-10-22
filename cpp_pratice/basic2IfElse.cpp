#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout << "First  number" << endl;
    cin >> a;
    cout << "Second number" << endl;
    cin >> b;
    if(a>b)
    {
        cout << "First number is greater than second number" << endl;
    }
    else
    {
        cout << "Second number is greater than first number" << endl;
    }
    return 0;
}
// int main()
// {
//     int a,b;
//     cout << "Enter two numbers with space like 10 20" << endl;
//     cin >> a >> b;

//     if(a>b)
//     {
//         cout << "First number is greater than second number" << endl;
//     }
//     else
//     {
//         cout << "Second number is greater than first number" << endl;
//     }
//     return 0;
// }