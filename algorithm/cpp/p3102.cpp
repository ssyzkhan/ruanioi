#include<iostream>
#include"getTheInversion.h"
using namespace std;

int main(int argc, char const *argv[])
{
    int a[]={5,1,9,4,6,2,0,3,8,7},i,totalInversion;
    totalInversion = getTheInversion<int *>(a,a+10);
    copy(a,a+10,ostream_iterator<int>(cout," "));
    cout<<"\n"<<totalInversion<<endl;
    return 0;
}
