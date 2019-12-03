#include"matrixchain.h"
#include<iostream>

using namespace std;
int main(int argc, char const *argv[])
{
    int p[]={30,35,15,5,10,20,25};
    int *s,*m;
    pair<int*,int*> r=matrixChainOrder(p,6);
    m=r.first;
    s=r.second;
    printOptimalParents(s,1,6,6);
    cout<<endl<<m[13]<<endl;
    delete []s;
    delete []m;
    return 0;
}
