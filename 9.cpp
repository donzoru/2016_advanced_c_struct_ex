#include<iostream>
#include<queue>
using namespace std;
typedef struct md{
    int id,num;
}md;
struct cmp{
    bool operator()(const md &a,const md &b)const
    {
        return a.num<b.num;
    }
};
int main()
{
    int t;
    md k;
    cin>>t;
    priority_queue<md,vector<md>,cmp>que;
    for(int i=0;i<t;i++){
        cin>>k.id>>k.num;
        que.push(k);
    }
    for(int i=0;i<t;i++){
        cout<<que.top().id<<' '<<que.top().num<<'\n';
        que.pop();
    }
    return 0;
}
