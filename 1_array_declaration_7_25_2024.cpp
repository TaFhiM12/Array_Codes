#include<bits/stdc++.h>
using namespace std ;
#define endl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

int32_t main()
{
    optimize();

    //array in stack.
    int a[5] = {2,3,4,5,6};

    //array inside heap memory.
    int *p = new int[10];
    for(int i=0 ; i<10 ; i++){
        cin >> p[i];
    }
    for(int i=0 ; i<10 ;i++){
        cout << p[i] << " ";
    }
    cout << endl ;
    return 0;
}