#include<iostream>
using namespace std;
int main()
{   cout<<"Created by Abhi Gaur\n\n";
    cout<<"SIMPLE CALCULATOR"<<endl<<endl<<endl;
    int a;
    int b;
    cout<<"Enter first number\n";
    cin>>a;
    cout<<"Enter the second number\n";
    cin>>b;
    cout<<"Choose the arithmetic operation\n";
    cout<<" 1).Addition               2).Subtraction\n 3).Multiplication         4).Division\n";
    int c;
    cin>>c;
    cout<<"Ans ";
    if(c==1)
    {
        cout<<a+b<<endl;
    }
    else if(c==2)
    {
        cout<<a-b<<endl;
    }
    else if(c==3)
    {
        cout<<a*b<<endl;
    }
    else if(c==4)
    {
        cout<<(float)a/(float)b<<endl;
    }
    else
    {
        cout<<"Invalid input\n";
    }

}