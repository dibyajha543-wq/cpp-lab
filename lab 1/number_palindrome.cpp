#include<iostream>
using namespace std;
int main () {
    int rem,num,rev=0,original;
    cout<< "Enter a number: " ;
    cin>>num;
    original = num;
    while(num != 0) {
        rem = num % 10;
        rev = rev*10 + rem ;
        num = num / 10;
    }
    if(rev==original ) {
        cout<< "palindrome";

    }
    else {
        cout<< "not palindrome";
    }


    return 0;
}
