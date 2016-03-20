#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
typedef struct li{
    int id;
    char c;
    float a,b;
}kc;
bool cmp(kc a,kc b)
{
    return a.c<b.c;
}
int main()
{
    kc a[128];
    int n;
    cin>>n;
    for(int i=0;i<n;++i)
        cin>>a[i].id>>a[i].c>>a[i].a>>a[i].b;
    sort(a,a+n,cmp);
    for(int i=0;i<n;++i)
        cout<<a[i].id<<a[i].c<<a[i].a<<a[i].b;
    return 0;
}
