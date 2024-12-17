#include<bits/stdc++.h>
using namespace std;
vector<string>a;
void one()
{
    string s;
    cout<<"Enter the value to be add : ";
    cin>>s;
    a.push_back(s);
}
void two()
{
    int n = a.size();
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
}
void three()
{
    int n = a.size();
    string s;
    int c;
    cout<<"Enter the name would you like to edit : "<<endl;
    cin>>s;
    for(int i=0;i<n;i++)
    {
        if(s==a[i])
        {
            cout<<"Enter the new value to edit : ";
            cin>>s;
            a.erase(a.begin()+i);
            a.insert(a.begin()+i,s);
            c = 1;
        }
    }
    if(c!=1)
    {
        cout<<"value not found"<<endl;
    }
}
void four()
{
    int n = a.size();
    for(int i=0;i<n;i++)
    {
        cout<<i+1<<"."<<a[i]<<endl;
    }
    int s;
    cout<<"which one would you like to remove enter the number : "<<endl;
    cin>>s;
    if(n>=s)
    {
        a.erase(a.begin()+s-1);
    }
    else
    {
        cout<<"Number not found"<<endl;
    }
}
int main()
{
    int a = 1;
    cout<<"List of Options"<<endl;
    while(a<5)
    {
        cout<<"1.Add"<<"\n"<<"2.Display"<<"\n"<<"3.Edit"<<"\n"<<"4.Remove"<<"\n"<<"5.Exit"<<endl;
        cout<<"Enter your choice : "<<endl;
        cin>>a;
        switch(a)
        {
            case 1:
            {
                one();
                break;
            }
            case 2:
            {
                two();
                break;
            }
            case 3:
            {
                three();
                break;
            }
            case 4:
            {
                four();
                break;
            }
            case 5:
            {
                break;
            }
            default:
            {
                cout<<"Invalid Number";
                break;
            }
        }
        cout<<endl;
    }
    return 0;
}