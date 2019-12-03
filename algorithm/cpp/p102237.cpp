#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int main(int argc, char const *argv[])
{
    int a[]={5,1,9,4,6,2,0,3,8,7},i;
    priority_queue<int,vector<int>,less<int> > p;
    for(i=0;i<10;i++)
        p.push(a[i]);
    while(!p.empty()){
        cout<<p.top()<<" ";
        p.pop();
        }
    cout<<endl;

    string b[]={"ChongQing","ShangHai","AoMen","TianJin","BeiJing","XiangGang"};
    priority_queue<string,vector<string>,less<string>> p1;
    for(i=0;i<6;i++)
        p1.push(b[i]);
    while(!p1.empty()){
        cout<<p1.top()<<" ";
        p1.pop();
    }        
    cout<<endl;

    double c[]={8.5,6.3,1.7,9.2,0.5,2.3,4.1,7.4,5.9,3.7};
    priority_queue<double,vector<double>,greater<double>> p2;
    for(i=0;i<10;i++)
        p2.push(c[i]);
    while(!p2.empty()){
        cout<<p2.top()<<" ";
        p2.pop();
    }

    cout<<endl;
   
    return 0;
}
