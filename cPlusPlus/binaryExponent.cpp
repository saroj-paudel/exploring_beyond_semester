// Calculating a^n using binary exponentiation techniques to reduces the no. of steps 

// use this instead of multiplying a n times 


#include<iostream>
using namespace std;

long long power(long a, long n){
    long long res =1;
    int iter = 0;
    while (n>0)
    {
        if (n & 1)
        {
            res*=a;
        }
    a*=a;
    n/=2;    
    iter++;
    }

    cout<<"Steps: "<< iter<<endl;
    return res;
    
}

int main()
{
    cout << "5^5 : " << power(5,5) << endl;
    return 0;
}
