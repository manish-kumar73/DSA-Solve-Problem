#include <iostream>
using namespace std;

void primeFactor(int num){
    if(num <= 1) 
        cout<<1;
    while(num%2 == 0){
        cout<<2<<" ";
        num /= 2;
    }
    while(num%3 == 0){
        cout<<3<<" ";
        num /= 3;
    }
    for(int i=5; i*i <= num; i=i+6){
        while(num%i == 0){
            cout<<i<<" ";
            num /= i;
        }
        while(num%(i+2) == 0){
            cout<<(i+2)<<" ";
            num /= (i+2);
        }
    }
}
int main(){
    primeFactor(100);
}