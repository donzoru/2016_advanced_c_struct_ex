#include<iostream>
#include<algorithm>
using namespace std;
typedef struct li{
    int id,pre,num,sum;
    char na[15];
}kk;
bool cmp(kk a,kk b)
{
    return a.sum>a.sum;
}
int main()
{
    kk a[128];
    int n;
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>a[i].id>>a[i].na>>a[i].pre>>a[i].num;
        a[i].sum=a[i].pre * a[i].num;
    }
    sort(a,a+n,cmp);
    for(int i=0;i<n;++i)
        cout<<a[i].id<<' '<<a[i].na<<' '<<a[i].pre<<' '<<a[i].num<<' '<<a[i].sum<<endl;
    return 0;
}
