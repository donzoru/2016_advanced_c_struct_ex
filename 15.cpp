#include<iostream>
#include<algorithm>
using namespace std;
typedef struct lis{
    char na[10];
    int a,b,c,d,e,la;
}tra;
bool cmp(tra a,tra b)
{
    return a.la<b.la;
}
int main()
{
    tra kk[128];
    int n;
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>kk[i].na>>kk[i].a>>kk[i].b>>kk[i].c>>kk[i].d>>kk[i].e;
        if(kk[i].d > kk[i].b) kk[i].la=(kk[i].c - kk[i].a)*60 + kk[i].d - kk[i].b;
        else kk[i].la=(kk[i].c - kk[i].a - 1)*60+ 60 - kk[i].b + kk[i].d;
    }
    sort(kk,kk+n,cmp);
    cout<<kk[0].na<<' '<<kk[0].a<<' '<<kk[0].b<<' '<<kk[0].c<<' '<<kk[0].d<<' '<<kk[0].e<<endl;
    return 0;
}
