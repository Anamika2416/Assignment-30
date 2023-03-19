//Write a C++ program to accept a password and throw an exception if the password has
//less than 6 characters or does not contain a digit or does not contain any special
//character or does not contain any capital letter.
#include<iostream>
using namespace std;
void password(char a[10])
{
    int i=0,dig=0,ischar=0,isspecial=0,c=0,excep=0,big=0;
    cout<<a<<endl;
    try
    {
        for(i=0;a[i]!='\0';i++)
        {
            if(isdigit(a[i]))
                dig=1;
            else if((a[i]>='a' && a[i]<='z'))
                ischar=1;
            else if(a[i]>='A' && a[i]<='Z')
                big=1;
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
        if(big==0)
            throw 5;
    }
    catch(int a)
    {
       if(a==1)
        cout<<"Password has more than 6 characters."<<endl;
       if(a==2)
        cout<<"Password has must have a special character."<<endl;
        if(a==3)
        cout<<"Password has must have a digit."<<endl;
        if(a==4)
            cout<<"No alphabet found"<<endl;
        if(a==5)
            cout<<"No capital letter found"<<endl;
        excep=1;
    }
    if(!excep)
    {
        cout<<"Password accepted."<<endl;
    }

}
int main()
{
    char paswd[10];
    cout<<"Enter password : ";
   fflush(stdin);
    cin>>paswd;
    password(paswd);
    return 0;
}
