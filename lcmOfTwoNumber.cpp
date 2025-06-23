#include <iostream>
using namespace std;

int lcmOfTwoNumber(int a , int b){
    int maxi = max(a , b);
    while(maxi > 0){
        if(maxi%a==0 && maxi%b==0){
            return maxi;
        }else{
            maxi++;
        }
    }
}

int main(){
    int a = 12;
    int b = 24;

    cout<<lcmOfTwoNumber(a , b);
}