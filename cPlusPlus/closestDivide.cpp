#include<iostream>
using namespace std;

int closestNum(int n,int m){
    cout<<endl;
    int q=n/m;
    int r = n%m;
    if (r == 0)
    {
        return n;
    }
    int res=0;
    cout<<n<<" / "<<m<<endl;
    cout<<"q="<<q<<"  r="<<r<<endl;
    int n1 = n - r;
    int n2 =(q>0)? (q+1) * m : (q-1)*m;
    if (q==0)
    {
        n2 = (n>0)? (q+1) * m : (q-1)*m;
    }


    
    cout<<"n1="<<n1<<"  n2="<<n2<<endl;

    int d1 =abs(n) - abs(n1);
    int d2 =abs(n2) - abs(n);

    if (d1 < d2)
    {
        res= n1;
    }
    else if(d1==d2)
    {
       res= (abs(n1)>abs(n2))?n1:n2;
    }
    else
    {
        res= n2;
    }

    if (r<0)
    {
        res=-abs(res);
    }
    
    
    return res;
    

    // cout<<"d1="<<d1<<"  d2="<<d2<<endl<<endl;



}

int main(){

cout << "hello world !" <<endl<<endl;
cout<<closestNum(13,4)<<endl;
cout<<closestNum(-15,6)<<endl;
cout<<closestNum(2,3)<<endl;
cout<<closestNum(48,7)<<endl;
cout<<closestNum(50,7)<<endl;
cout<<closestNum(26,13)<<endl;
cout<<closestNum(-11968,19586)<<endl;
cout<<closestNum(-19126,-20480)<<endl;
cout<<closestNum(-26691,-19940)<<endl;




return 0;
}