#include<iostream>
#include<fstream>
using namespace std;
int main()
{  cout<<"Created by Abhi Gaur\n\n";
    cout<<"Enter the file name\n";
    string p;
    cin>>p;
   ifstream file(p);
   if(file)
   {
    cout<<"The file exists\n";
    char c[40];
    int cnt=0;
    while(!file.eof())
    {  file>>c;
       cnt++;
    }
    cout<<"The no of words = "<<cnt;
   }
   else
   {
    cout<<"File doesnot exist.\nPress 1 to create the file.\nPress -1 to exit\n";
    int n;
    cin>>n;
    if(n==1)
    {
        ofstream f(p);
        cout<<"Write to the file\n";
        string ch;
        cin>>ch;
        while(ch!="-1")
        {   
            f<<ch;
            cin>>ch;
        }

    }

   }
    
}