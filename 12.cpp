#include<iostream>
#include<cstring>
using namespace std;
typedef struct li{
    int id,ag;
    char n,dna[11];
}md;
int main()
{
    md a[2];
    char x[11],y[11];
    for(int i=0;i<2;++i){
        cin>>a[i].id>>a[i].n>>a[i].ag>>a[i].dna;
        if(!i) strcpy(x,a[i].dna);
        else strcpy(y,a[i].dna);
    }
    char sc[11];
    int lx=strlen(x),ly=strlen(y);
    for(int js=0;js<lx-1;++js){
        for(int i=js;i<lx-1;++i)
        {
            int t=0,m=0,ma=0;
            bool k=0;
            for(int j=0;j<ly;++j)
            {
                if(x[i]==y[j]) t++;
                else break;
                if(!k) {m=i;k=!k;}
            }
            if(t>ma)
            {
                ma=t;
                for(int n=m,l=0;n<t;++n,++l)
                    sc[l]=x[n];
                sc[t]='\0';
            }
        }
    }
    for(int i=0;i<2;++i)
        cout<<a[i].id<<' '<<a[i].ag<<'\n'<<sc<<endl;
    return 0;
}
