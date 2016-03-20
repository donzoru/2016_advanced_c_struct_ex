#include<iostream>
using namespace std;
typedef struct li{
    char n;
    int a;
}k;
int main()
{
    k kd[50];
    int lis[5],re[5]={0},m,n;
    cin>>m;
    for(int i=0;i<m;++i)
        cin>>lis[i];
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>kd[i].n>>kd[i].a;
        for(int j=0;j<m;++j)
            if(kd[i].a==lis[j]) {re[j]++;break;}
    }
    int sum=0;
    for(int i=0;i<m;++i){
        sum+=re[i]*2;
    }
    cout<<sum<<endl;
    return 0;
}
