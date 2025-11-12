#include <iostream>
#include <stdio.h>
using namespace std;
int  pow(int m,int n)
{
    if(n==0)
        return 1;
    else
       return pow(m,n-1)*m;
}
int fastPow(int m,int n)
{
    if(n==0)
        return 1;
    if(n%2==0)
        return fastPow(m*m,n/2);
    else 
        return m*fastPow(m*m,(n-1)/2);

}
int main()
{
    int base,exponent,choice;
    cout<<"Enter the base: "<<endl;
    cin>>base;
    cout<<"Enter exponent: "<<endl;
    cin>>exponent;
    cout<<"\nChoose method\n"<<"1. simple recursion (more time complexity O(n))\n"<<"2. Fast exponentiation (less time complexity O(log n))\n"<<endl;
    cin>>choice;
    if(choice==1)
    {
        printf("%d O(n) \n",pow(base,exponent));
    }
    else 
    {
        printf("%d O(log n) \n",fastPow(base,exponent)); 
    }

}