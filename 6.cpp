#include<iostream>
#include<cstdio>
using namespace std;
typedef struct li{
    float s,v,a;
}poi;
int main()
{
    poi pp[3];
    const float dt=0.01;
    int t;
    for(int i=0;i<3;++i)
        cin>>pp[i].s>>pp[i].v>>pp[i].a;
    cin>>t;
    for(int i=0;i<3;++i)
    {
        for(float j=0;j<t;j+=dt)
        {
            pp[i].v+=pp[i].a*dt;
            pp[i].s+=pp[i].v*dt;
        }
        printf("%.2f%c",pp[i].s,(i!=2)?' ':'\n');
    }
    return 0;
}

