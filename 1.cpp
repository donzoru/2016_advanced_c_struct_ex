#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
typedef struct li{
    char nam[20];
    float en,he,ra;
}fo;
bool cmp(fo a,fo b)
{
    return a.ra<b.ra;
}
int main()
{
    fo a[3];
    char n[3][20];
    for(int j=0;j<3;++j){
        for(int i=0;i<3;++i){
            cin>>a[i].nam>>a[i].en>>a[i].he;
            a[i].ra=a[i].en/a[i].he;
        }
        sort(a,a+3,cmp);
        strcpy(n[j],a[0].nam);
    }

    cout<<n[0]<<' '<<n[1]<<' '<<n[2]<<endl;
    return 0;
}
