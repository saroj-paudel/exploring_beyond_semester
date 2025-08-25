#include<iostream>
using namespace std;

int findSum(int n){
    int sum=0;
    if (n==0)
    {
        return 0;
    }
    sum = n+ findSum(n-1);
    return sum;
}

int main(){

    cout<< findSum(15) <<endl << findSum(10);

    return 0;
}