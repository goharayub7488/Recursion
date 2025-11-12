#include<iostream>
using namespace std;
double taylor(double x, double n)
{
    static double p=1,f=1;
    double result;
    if(n==0)
        return 1;
    else
    {
        result=taylor(x,n-1);
        p=p*x;
        f=f*n;
        return result+p/f;
    }
}
 int main()
 {
    double x,n;
    cout<<"Enter the value exponent X: "<<endl;
    cin>>x;
    cout<<"Enter the number, you want to execute the taylor series: "<<endl;
    cin>>n;
    cout<<taylor(x,n);
 }