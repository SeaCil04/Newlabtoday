#include<iostream>
using namespace std;

int main(){
    int n = 1,even,odd;
    while(n != 0){
    cout << "Enter an integer: ";
    cin >> n;
    if(n % 2 == 0 and n> 0){
        even += 1;
    }else if (n % 2 != 0 and n> 0){
        odd += 1;
    }
    }
    cout << "#Even numbers = " << even << endl;
    cout << "#Odd numbers = " << odd;
    
    return 0;
}