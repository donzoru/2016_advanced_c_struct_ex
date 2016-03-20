#include<iostream>
#include<cstring>
using namespace std;
typedef struct lis{
    char na[22];
    char fro[10];
    char to[10];
}lys;
int main()
{
    char cit[][10]={"zichuan","linzi","zhoucun","boshan"};
    int n;
    lys a[128];
    bool mapp[128];
    memset(mapp,0,128*sizeof(bool));
    cin>>n;
    for(int i=0;i<n;++i)
        cin>>a[i].na>>a[i].fro>>a[i].to;
    for(int i=0;i<n;++i){
        if(!mapp[i])
        {
            cout<<a[i].fro<<':';
            for(int j=0;j<n;++j)
                if(!strcmp(a[i].fro,a[j].fro)) {cout<<a[j].na<<' ';mapp[j]=1;}
            cout<<'\n';
        }
        else continue;
    }
    for(int i=0;i<4;++i){
        cout<<cit[i]<<':';
        for(int j=0;j<n;++j)
            if(!strcmp(cit[i],a[j].to)) cout<<a[j].na<<' ';
        cout<<endl;
    }
    return 0;
}
