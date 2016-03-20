#include<iostream>
#include<cstring>
using namespace std;
typedef struct phls{
    char na[20];
    int ol,tel;
}pl;
int main()
{
    int n;
    pl a[128];
    char str[20];
    cin>>n;
    for(int i=0;i<n;++i)
        cin>>a[i].na>>a[i].ol>>a[i].tel;
    cin>>str;
    for(int i=0;i<n;++i)
        if(!strcmp(str,a[i].na)) cout<<str<<' '<<a[i].ol<<' '<<a[i].tel<<endl;
    return 0;
}
