#include<iostream>
#include<cstring>
using namespace std;
typedef struct li{
    int id;
    char na[5];
    char pw[5];
}cod;
int main()
{
    cod a[4];
    for(int i=0;i<4;++i)
        cin>>a[i].id>>a[i].na>>a[i].pw;
    for(int i=0;i<4;i++)
    {
        cout<<a[i].id<<' '<<a[i].na<<' ';
        for(int j=0;j<4;++j){
            a[i].pw[j]++;
            cout<<a[i].pw[j];
        }
        cout<<endl;
    }
    return 0;
}
