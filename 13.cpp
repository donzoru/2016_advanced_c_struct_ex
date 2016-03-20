#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
typedef struct li{
    int id,sum;
    float a,b,c,d;
    char na[20];
}gal;
bool cmp(gal a,gal b)
{
    return a.sum>b.sum;
}
int main()
{
    gal a[128];
    int n;
    cin>>n;
    if(n<3) cout<<"ERROR"<<endl;
    else{
        for(int i=0;i<n;++i){
            cin>>a[i].id>>a[i].na>>a[i].a>>a[i].b>>a[i].c>>a[i].d;
            a[i].sum=a[i].a*0.1+a[i].b*0.1+a[i].c*0.1+a[i].d*0.7;
        }
        sort(a,a+n,cmp);
        for(int i=0;i<3;++i){
            cout<<a[i].id<<' '<<a[i].na<<' ';
            printf("%d\n",a[i].sum);
        }
    }
    return 0;
}
