#include<iostream>
#include<cstring>
using namespace std;
typedef struct li{
    int id;
    char na;
    char li[15];
}kk;
int main()
{
    const char str1[]="BOSS",str2[]="FAKE";
    int n;
    kk md[10];
    cin>>n;
    for(int i=0;i<n;++i)
    {
        cin>>md[i].id>>md[i].na>>md[i].li;
    }
    for(int i=0;i<n;++i){
        cout<<md[i].id<<' '<<md[i].na<<' ';
        int t=0,len=strlen(md[i].li);
        for(int k=0;k<len;++k)
        {
            if(md[i].li[k]==str1[t]) {cout<<str2[t];t++;}
            else cout<<md[i].li[k];
        }
        cout<<endl;
    }
    return 0;
}
