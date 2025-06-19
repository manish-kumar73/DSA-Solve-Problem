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

int main(){
    int num;
    cout<<"enter the number of Num ";
    cin>>num;

    cout<<contNumber(num);
}