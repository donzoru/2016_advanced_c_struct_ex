#include<iostream>
struct li{
    int a,b,c,d;
}t,s[128];
using namespace std;
int main()
{
    int k,m,n;
    cin>>k;
    for(int i=0;i<k;++i){
        cin>>s[i].a>>s[i].b>>s[i].c;
        s[i].d=s[i].a+s[i].b+s[i].c;
    }
    for(int i=0;i<k-1;++i){
        t=s[i];m=s[i].d;n=i;
        for(int j=i+1;j<k;++j)
            if(s[j].d>m) {m=s[j].d;n=j;}
        s[i]=s[n];
        s[n]=t;
    }
    for(int i=0;i<k;++i)
        cout<<s[i].d<<((i!=k-1)?' ':'\n');
    return 0;
}
