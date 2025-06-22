#include <iostream>
using namespace std;

int gcdRecursion(int a , int b){
    if(b == 0){
        return a;
    }
    return gcdRecursion(b , a%b);
}

int gcdNumberFirst(int a , int b){
    int ans = min(a , b);
    while(ans > 0){
        if(a%ans == 0 && b%ans == 0){
            break;
        }else{
            ans--;
        }
    }
    return ans;
}

int gcdNumberSecound(int a , int b){
    while(a != b){
        if(a > b){
            a = a-b;
        }else{
            b = b-a;
        }
    }
    return a;
}

int main(){
    int a = 10;
    int b = 15;

    // cout<<gcdNumberFirst(a , b);
    // cout<<gcdNumberSecound(a , b);
    cout<<gcdRecursion(a , b);
}