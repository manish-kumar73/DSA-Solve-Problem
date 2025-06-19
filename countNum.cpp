#include <iostream>
using namespace std;

int contNumber(int num){
    int count = 0;
    while(num > 0){
        num /= 10;
        count++;
    }
    return count;
}

bool palindromNumber(int num){
    int reverse = 0;
    int temp = num;
    while(temp != 0){
        int lastDigit = temp % 10;
        reverse = (reverse * 10) + lastDigit;
        temp /= 10;
    }
    if(reverse == num){
        return true;
    }else{
        return false;
    }
}

int main(){
    int num;
    cout<<"enter the number of Num ";
    cin>>num;

    //cout<<contNumber(num);

    int ans = palindromNumber(num);
    if(ans){
        cout<<"Palindrome Number";
    }else{
        cout<<"Not Palindrome Number";
    }
}