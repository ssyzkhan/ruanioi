#include"actsel.h"
#include<limits>
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int *x;
    int s[]={0,1,3,0,5,3,5,6,8,8,2,12,numeric_limits<int>::max()},
        f[]={0,4,5,6,7,8,9,10,11,12,13,14,numeric_limits<int>::max()};
    x=recurciveActivitySelector(s,f,0,12);
    for(int i=1;i<12;i++)
        cout<<x[i]<<" ";
    cout<<endl;
    delete []x;
    return 0;
}
