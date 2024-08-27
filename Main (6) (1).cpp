#include <iostream>
using namespace std;
int main() {
    int number;
    //prompt user for input
    cout<<"enter a number.";
    cin>>number;
    //check the number is between 10 and 20 
    if (number>=10&&number<=20)
    {
        cout<<"the num"<<number<<"isbetween 10 and 20./n";
    }
    else
    {
        cout<<"the number"<<"is between 10 and 20./ln";
    }
    return 0;
}