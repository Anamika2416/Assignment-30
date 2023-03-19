//Write a C++ program to perform arithmetic operations on two numbers and throw an
//exception if the dividend is zero or does not contain an operator.
#include<iostream>
using namespace std;
int main()
{
    float num1,num2,ans;
    char Operator;
    try
    {
        cout<<"Enter num1 : ";
        cin>>num1;
        if(num1==0)
            throw 0;
        cout<<"Enter operator : ";
        cin>>Operator;
        if(Operator!='+' && Operator!='-' && Operator!='*' && Operator!='/')
            throw Operator;
        cout<<"Enter second number : ";
        cin>>num2;
        switch(Operator)
        {
            case '+': ans=num1+num2;
            break;
            case '-':ans=num1-num2;
            break;
            case '*':ans=num1*num2;
            break;
            case '/':if(num2==0)
                      throw 0;
                     ans=num1/num2;
                     break;
        }
        cout<<"Answer is = "<<ans<<endl;
    }
    catch(const char a)
    {
        cout<<"Exception caught ....\n Bad operator : "<<a<<" is not valid "<<endl;
    }
    catch(int x)
    {
        cout<<"\n Error : 0 ..."<<endl;
    }
   return 0;
}
