#include<string>
#include<cstring>
using namespace std;
string a,t;
int i,j;
int main(){
    a=" morning";
    j=1;
    for(i=2;i<=7;i++)
        if(a[j]<a[i])
            j=i;
    j=j-1;
    for(i=1;i<=j;i++)
        printf("%c",a[i]);
    return 0;
}