#include <iostream>
#include <stdio.h>
using namespace std;


int sum(int n)
{
    if(n==0)
        return 0;
    else
        return sum(n-1)+n;
}
int main(){
    int num;
    cout<<"Enter the Number for sum of first n-natural numbers"<<endl;
    cin>>num;
    printf("%d \n",sum(num));
}