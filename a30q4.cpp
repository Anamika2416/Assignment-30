//Write a C++ program to accept an email address and throw an exception if it does not
//contain @ symbol.
#include<iostream>
using namespace std;
bool isValid(char *email);
int main()
{
   char a[100];
   cout<<"Enter email id : ";
    gets(a);
    try
    {
        if(isValid(a))
       {
          cout<<"Valid email id"<<endl;
       }
       else
       {
           throw 0;
       }
    }
    catch(int x)
    {
        cout<<"Exception caught ....\n Invalid email id.."<<endl;
    }
}
bool isValid(char *email)
{
    int Atofset=-1;
    int Dofset=-1;
    int length=0;
    for(int i=0;email[i]!='\0';i++)
    {
        if(email[i]=='@')
            Atofset=i;
        else if(email[i]=='.')
            Dofset=i;
        length++;
    }
    if(Atofset==-1 || Dofset==-1)
        return 0;
    if(Atofset>Dofset)
        return 0;
    return !(Dofset>=(length-1));
}
