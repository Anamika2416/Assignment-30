
#include<iostream>
using namespace std;
int main()
{
    try
    {
        throw 'e';
    }
    catch(char e)
    {
        cout<<"\nexception caught "<<e<<endl;
    }
    catch(...)
    {cout<<"Other exception"<<endl;}
    return 0;
}
