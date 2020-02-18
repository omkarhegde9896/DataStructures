#include<iostream>
using namespace std;
int fibo(int n)
{
    if((n==0)||(n==1))
        return n;
    else
        return (fibo(n-1)+fibo(n-2));
}
int main()
{
    int num,i;
    cout<<"Enter the number";
    cin>>num;
    for(i=0;i<num;i++)
        cout<<fibo(i)<<" ";
    return 0;
}

