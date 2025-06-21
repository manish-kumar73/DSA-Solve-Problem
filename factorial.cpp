#include <iostream>
using namespace std;

int recursionFactorial(int num){
    if(num == 1){
        return 1;
    }
    return num * recursionFactorial(num - 1);
}

int factZeroCount(int num){
    int fact = 1;
    for(int i=2; i<=num; i++){
        fact = fact * i;
    }
    int countZero = 0;
    while(fact != 0){
        if(fact % 10 == 0){
            countZero++;
            fact = fact / 10;
        }else{
            fact = fact / 10;
        }
    }
    return countZero;
}

int factorial(int num){
    int fact = 1;
    for(int i=1; i<=num; i++){
        fact = fact * i;
    }
    return fact;
}

int main(){
    int num = 7;
    // cout<<factorial(num);
    // cout<<recursionFactorial(num);
    cout<<factZeroCount(num);
}