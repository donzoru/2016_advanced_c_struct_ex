#include<iostream>
using namespace std;
typedef struct ls{
    int id,y,m,d;
}xsb;
int main()
{
    int cmp(xsb ,xsb );
    xsb bb,tmp={0,100000,12,31};
    int t,i;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>bb.id>>bb.y>>bb.m>>bb.d;
        if(cmp(bb,tmp)) tmp=bb;
    }
    cout<<tmp.id<<endl;
    return 0;
}
int cmp(xsb a,xsb b)
{
    if(a.y<b.y) return 1;
    if(a.y==b.y)
    {
        if(a.m<b.m) return 1;
        if(a.m==b.m) return a.d<b.d;
        return 0;
    }
    return 0;
}
