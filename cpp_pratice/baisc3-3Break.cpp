#include<iostream>
using namespace std;

int main()
{
    int n=100;
    while(n<=200){
        cout<<"Value is : " << n << endl;
        if (n==150)
        {
            break;
        }
        n += 10;
    }
    cout<<"Out of while loop"; 
    return 0;
}
