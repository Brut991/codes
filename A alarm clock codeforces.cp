#include<bits/stdc++.h>
#define pi 3.14159265359
// definition not working
#define ll long lo
#define wh(t) int t;cin>>t; while(t--)
using namespace std;
#include<string.h>
void solve()
    //this might work
{
    long long answer;
    long double a, b, c, d,n;
    long double nn;
    cin>>a>>b>>c>>d;
    
    if(a-b<=0)
    {cout<<b<<"\n";}
    
    else if(c-d<=0)
    {cout<<-1<<"\n";}
   
    else if((c-d)>0)
    { nn=(a-b)/(c-d);
        n=ceil(nn);
        answer=b+(n*c);
        cout<<answer<<"\n";
    }
    else
    {return;}
}


// this main function is not working
int main()
{
    wh(t)
     {solve();}
    
    return 0;
}
