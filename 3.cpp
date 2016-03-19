#include<iostream>
typedef struct li{
    int cod,pri,tim;
}sj;
int main()
{
    using namespace std;
    int t,i,re=0,sum=0,k=10000;
    sj a;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>a.cod>>a.pri>>a.tim;
        sum=a.pri/2+a.tim/5+((a.pri%2)?1:0)+((a.pri%5!=0)?1:0);
        if(sum<k) {re=a.cod;k=sum;}
    }
    cout<<re<<endl;
    return 0;
}
