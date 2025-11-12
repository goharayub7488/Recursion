#include <iostream>
#include <stdio.h>
#include <string>

using namespace  std;
int f[10]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};

int fibFast(int n){
    if(n<=1)
    {
        f[n]=n;
        return f[n];
    }
    else{
        if(f[n-2]==-1)
            f[n-2]=fibFast(n-2);
        if(f[n-1]==-1)
            f[n-1]=fibFast(n-1);
        return f[n-2]+f[n-1];
    }
}

int fib(int n)
{
    if(n<=1)
        return  n;
    else
    {
        return fib(n-2)+fib(n-1);
    }
}

int main()
{
    int n;
    string choose;
    cout<<"Enter number for which you want to calculate the fibonacci Series: "<<endl;
    cin>>n;
    cout<<"Whether you want to avoid excessive recursive calls? (yes/no): "<<endl;
    cin>>choose;
    if(choose=="yes")
    {
        cout<<"fibonacci series with avoiding excessive calls: "<<fibFast(n)<<endl;
    }
    else
    {
        cout<<"fibonacci series with out avoiding excessive calls: "<<fib(n);
    }
    
}