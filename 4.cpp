#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
typedef struct li{
    char na[20];
    int n;
}md;
bool cmp(md a,md b)
{
    return a.n>b.n;
}
int main()
{
    int t,j=0,m=0,k;
    md a[128],b[128],temp;
    char c;
    cin>>t;
    for(int i=0;i<t;i++)
        cin>>a[i].na>>a[i].n;
    sort(a,a+t,cmp);
    if(t%2) m=a[t/2].n;
    else m=(a[t/2-1].n + a[t/2].n)/2;
    for(int i=0;i<t;++i)
        if(a[i].n==m) {b[j]=a[i];++j;}
    for(int i=0;i<j-1;++i){
        temp=b[i];k=i;
        c=b[i].na[0];
        for(int s=i+1;s<j;++s)
            if(b[s].na[0]<c) {c=b[s].na[0];k=s;}
        b[i]=b[k];
        b[k]=temp;
    }
    cout<<m<<' ';
    for(j=0;j<t;j++)
        cout<<b[j].na<<((j!=t-1)?' ':'\n');
    return 0;
}
