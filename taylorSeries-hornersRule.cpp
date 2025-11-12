#include <iostream>
using namespace std;

double taylor(double x, int n)
{
    static double res=1;
    if(n==0)
        return res;
    res=1+x/n*res;
    taylor(x,n-1);
    return res;
}
int main()
{
    int x,n;
    cout<<"Enter the exponent X: "<<endl;
    cin>>x;
    cout<<"Enter number you want to execute taylor series: "<<endl;
    cin>>n;
    cout<<taylor(x,n);
}