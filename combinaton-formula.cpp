#include<iostream>
using namespace std;
int com(int n,int r)
{
    if(r==0 || r==n)
        return 1;
    else 
    {
        return com(n-1,r-1)+com(n-1,r);
    }
}
int main(){
    int n,r;
    cout<<"Enter the total number of things you have: "<<endl;
    cin>>n;
    cout<<"Enter the number of things you want to pick from those: "<<endl;
    cin>>r;
    cout<<"There  will be "<<com(n,r)<<" combination"<<endl;
}