//Write a C++ program to demonstrate the use of try, catch block with the argument as an integer and string using multiple catch blocks.
#include<iostream>
using namespace std;
void test(int num)
{
    try
    {
        if(num>=0 && num<=9)
            throw num;
        else
      {
             cout<<"not a single integer"<<endl;
        throw;

      }
    }
    catch(int a)
{
  cout<<"\n single integer"<<endl;
}
    catch(char b[100])
    {cout<<b;}
    catch(...)
    {
        cout<<"terminated"<<endl;
    }
}
int main()
{
    int x;
    cin>>x;
    test(x);
    return 0;
}
