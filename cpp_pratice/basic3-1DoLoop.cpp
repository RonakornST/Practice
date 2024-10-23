#include<iostream>
using namespace std;

// similar to while loop but it'll check condition at the end of the loop

int main(){
    int sum = 0;
    int i = 0;
    do
    {
        sum += i;
        i++;
    } while (i <= 10);
    {
        cout << "Sum is: " << sum << endl;
    }
    

}