#include<iostream>
#include<cstring>
using namespace std;
typedef struct li{
    char id[5],na[30];
    int re;
}bk;
int main()
{
    bk a[128];
    int n;
    char bo[30];
    cin>>n;
    for(int i=0;i<n;++i)
        cin>>a[i].id>>a[i].na>>a[i].re;
    cin>>bo;
    for(int i=0;i<n;++i)
        if(!strcmp(bo,a[i].na)) {a[i].re++;break;}
    for(int i=0;i<n;++i)
        cout<<a[i].id<<' '<<a[i].na<<' '<<a[i].re<<endl;
    return 0;
}
