#include<iostream>
#include<cstring>
using namespace std;
typedef struct li{
    int id,de;
    char na[10],s[20],c[20],q[20];
}kk;
int main()
{
    int m=1000000;
    kk a,t;
    for(int i=0;i<4;i++){
        cin>>a.id>>a.na>>a.s>>a.c>>a.q>>a.de;
        if(a.de<m) {m=a.de; t=a;}
    }
    cout<<a.id<<' '<<a.na<<' '<<a.s<<' '<<a.c<<' '<<a.q<<' '<<a.de<<endl;
    return 0;
}
