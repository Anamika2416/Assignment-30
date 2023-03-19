//Write a C++ program to accept Gmail id only and throw an exception if the id does not
//contain @ and gmail.com.
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string email="anamika@gmail.com";
    string gmail="@gmail.com";
    try
    {
        if(email.find(gmail)!=-1)//if substring is found it does not return -1,if not found it returns -1
        cout<<"yes";
        else
          throw 0;
    }
    catch(int a)
    {
        cout<<"Invalid gmail"<<endl;
    }
    return 0;
}
//scan until we get @ aur jb mil jaye uske baad ka string kissi aur string me copy krwa do fir string comparison se compare krke check kr lo strcmp(s1,s2)
