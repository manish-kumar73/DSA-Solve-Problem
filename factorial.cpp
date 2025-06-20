#include <iostream>
using namespace std;

int recursionFactorial(int num){
    if(num == 1){
        return 1;
    }
    return num * recursionFactorial(num - 1);
}

int factorial(int num){
    int fact = 1;
    for(int i=1; i<=num; i++){
        fact = fact * i;
    }
    return fact;
}

int main(){
    int num = 5;
    //cout<<factorial(num);

    cout<<recursionFactorial(num);
}