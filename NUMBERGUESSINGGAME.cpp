#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{   cout<<"Created by Abhi Gaur\n\n";
    cout<<"Enter the number upto which you want to guess\n";
    int N;
    cin>>N;
    int num;
    int p=rand()%N;
    while(1){
    cout<<"Enter the number guessed.Press -1 to quit\n";
    cin>>num;
    if(num==-1)
    {
        break;
    }
    if(num==p)
    {
        cout<<"Correct\n\n";
        break;
    }
    else if(num>p)
    {
        cout<<"Your number is greater than the actual number\n\n";
    }
    else if(num<p)
    {
        cout<<"Your number is less than the actual number\n\n";
    }
    }

}