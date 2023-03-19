//mobile number;
#include<iostream>
using namespace std;
int checkmobno(long long x)
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
        if(c!=10)
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
    long long mobno;
    cout<<"enter mobile no.: ";
    cin>>mobno;
    if(checkmobno(mobno))
    {
        cout<<"Correct mobile number "<<mobno<<endl;
    }
    else
    {
        cout<<mobno<<" is invalid mobile number."<<endl;
    }
}
