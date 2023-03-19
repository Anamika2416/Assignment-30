//Write a C++ program to accept a username if the username has less than 6 characters
//or does contain any digit or special symbol
#include<iostream>
using namespace std;
void username(char a[10])
{
    int i=0,dig=0,ischar=0,isspecial=0,c=0,excep=0;
    try
    {
        for(i=0;a[i]!='\0';i++)
        {
            if(isdigit(a[i]))
                dig=1;
            else if((a[i]>='a' && a[i]<='z')||(a[i]>='A' && a[i]<='Z')||(a[i]>='0' && a[i]<='9'))
                ischar=1;
            else
                isspecial=1;
            c++;
        }
        if(c>6)
            throw 1;
        if(isspecial==0)
            throw 2;
        if(dig==0)
            throw 3;
        if((ischar-dig)==0)
               throw 4;
    }
    catch(int a)
    {
       if(a==1)
        cout<<"USername has more than 6 characters."<<endl;
       if(a==2)
        cout<<"USername has must have a special character."<<endl;
        if(a==3)
        cout<<"USername has must have a digit."<<endl;
        if(a==4)
            cout<<"No alphabet found"<<endl;
        excep=1;
    }
    if(!excep)
    {
        cout<<"Username accepted."<<endl;
    }

}
int main()
{
    char name[10];
    cout<<"Enter username : ";
    cin.get();
    cin>>name;
    username(name);
    return 0;
}

