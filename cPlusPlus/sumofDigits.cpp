#include<iostream>
using namespace std;

int digitSum(int n){
    int sum=0;
    while (n>0)
    {
        sum+=n%10;
        n/=10;
    }
    return sum;
}

int main(){

    cout<< digitSum(569) <<endl<< digitSum(9999);
    return 0;
}