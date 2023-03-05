#include<iostream>
using namespace std;
int getValue(int x)
{
    if(x>96 && x<123)
    {
        x-=96;
    }
    else if(x>64 && x<91)
    {
        x-=38;
    }
    else
    {
        return 0;
    }
    return x;
}
int main()
{
    int n;
    cin>>n;
    char ch1,ch2,ch3;
    int s1,s2,s3,t1,t2,t3;
    for(int i=0; i<n; i++)
    {
        cin>>ch1>>ch2>>ch3;
        t1 = (int)ch1;
        t2 = (int)ch2;
        t3 = (int)ch3;
        t1 = getValue(t1);
        t2 = getValue(t2);
        t3 = getValue(t3);
        if(t1+t2<=t3 || t1+t3<=t2 || t2+t3<=t1 || t1==0 || t2==0 || t3==0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
}
