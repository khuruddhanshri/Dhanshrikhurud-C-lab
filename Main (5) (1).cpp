#include <iostream>
using namespace std;
int main() {
    int number;
    //prompt user for input
    cout<<"enter a number.";
    cin>>number;
    //check the number is positive or negative
    if (number>=0){
        cout<<"the number"<<number<<"is positive./n";
    }else
    {
        cout<<"the number"<<number<<"isnegative./n";
    }
    return 0;
    }