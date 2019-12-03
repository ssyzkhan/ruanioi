#include<cstdio>
#include<iostream>
#include<cmath>
using namespace std;
int b[105],c[105];
bool pl;
int main(){
    int i, j, j1, j2, p, q;
    cin >> q >> p;
    j = 1;
    pl = true;
    b[j] = q;
    j1 = 0;
    while (q > 0 && pl)
    {
        j1++;
        c[j1] = q * 10 / p;
        q = q * 10 - c[j1] * p;
        if (q > 0)
        {
            j2 = 1;
            while (b[j2] != q && j2 <= j)
                j2++;
            if (b[j2] == q)
            {
                pl = false;
                cout << "0.";
                for (i = 1; i <= j2 - 1; i++)
                    cout << c[i];
                cout << '{';
                for (i = j2; i <= j1; i++)
                    cout << c[i];
                cout << '}';
            }
            else
            {
                j++;
                b[j] = q;
            }
        }
        if (q == 0)
        {
            cout << "0.";
            for (i = 1; i <= j1; i++)
                cout << c[i];
            cout << endl;
        }
    }
    return 0;
}