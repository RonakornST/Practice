#include<iostream>
using namespace std;

// contiune end the  current  iteration of a  loop and start the next iteration

int main(){
    int n = 100;
    while (n>=90)
    {
        if(n==96){
            n--;
            continue;
        }
        cout<<"Value of n is: "<<n<<endl;
        n--;
    }
    
}

// this code will skip 96 because of continue