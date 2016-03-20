#include<iostream>
struct li{
    int id;
    float a,b,c,d;
}s[3];
using namespace std;
int main()
{
    bool m=0;
    for(int i=0;i<3;++i){
        cin>>s[i].id>>s[i].a>>s[i].b>>s[i].c;
        s[i].d=s[i].a*0.5+s[i].b*0.3-s[i].c;
    }
    for(int i=0;i<3;++i)
        if(s[i].d>0 && s[i].c<=100) {cout<<s[i].id<<((i!=2)?' ':'\n');m=!m;}
    if(!m) cout<<"NONE"<<endl;
    return 0;
}
