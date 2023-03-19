
//Write a C++ program to accept area pin code and throw an exception if it does not
//contain 6 digits.

#include<iostream>
using namespace std;
int checkpincode(long  x)
{
    int c=0,r;
    try
    {
        while(x>0)
        {
            r=x%10;
            c++;
            x=x/10;
            
        }
        if(c!=6)
            throw 0;
        return 1;
    }
    catch(int a)
    {
        return 0;
    }
}
int main()
{
    long  pin;
    cout<<"enter pin code : ";
    cin>>pin;
    if(checkpincode(pin))
    {
        cout<<"Valid pincode "<<pin<<endl;
    }
    else
    {
        cout<<pin<<" is Invalid pin code."<<endl;
    }
}
