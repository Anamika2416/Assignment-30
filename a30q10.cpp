//Write a C++ program to accept Nickname and throw an exception if it has greater than 8
//characters or does contain a digit or special symbol or space
#include<iostream>
using namespace std;
void Nickname(char a[10])
{
    int i=0,dig=0,ischar=0,isspecial=0,c=0,excep=0,ispc;
    cout<<a<<endl;
    try
    {
        for(i=0;a[i]!='\0';i++)
        {
            if(isdigit(a[i]))
                dig=1;
            else if((a[i]>='a' && a[i]<='z')||(a[i]>='A' && a[i]<='Z')||(a[i]>='0' && a[i]<='9'))
                ischar=1;
            else if(a[i]==' ')
                ispc=1;
            else
                isspecial=1;
            c++;
        }
        if(c>8)
            throw 1;
        if(isspecial==1)
            throw 2;
        if(dig==1)
            throw 3;
        if(ispc==0)
            throw 4;
    }
    catch(int a)
    {
       if(a==1)
        cout<<"Nickname has more than 8 characters."<<endl;
       if(a==2)
        cout<<"Nickname has must not have special character."<<endl;
        if(a==3)
        cout<<"Nickname has must not have digit."<<endl;
        if(a==4)
            cout<<"Nickname must not contain spaces."<<endl;
        excep=1;
    }
    if(!excep)
    {
        cout<<"Nickname accepted."<<endl;
    }

}
int main()
{
    char nick[10];
    cout<<"Enter your nickname : ";
    fflush(stdin);
    cin>>nick;
    Nickname(nick);
    return 0;
}

