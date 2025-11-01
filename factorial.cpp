#include <iostream>
#include <stdio.h>
using namespace std;


int fact(int n)
{
    if(n==0)
        return 1;
    else
        return fact(n-1)*n;
}
int main()
{
    int num;
    cout<<"Enter a number to find its factorial: "<<endl;
    cin>>num;
    printf("%d \n",fact(num));
}