#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

int *p = new int[5];
int *q = new int[10];

int32_t main()
{
    optimize();
    for(int i=0 ; i<5 ; i++){
        cin >> p[i] ;
    }

    //declare bigger array.
    fill(q,q+10,0);
    //coping the elements p to q 
    for(int i=0 ; i<5 ; i++){
        q[i] = p[i] ;
    }
    cout << endl ;
    p = q ;
    q = NULL ;
    free(q);
    for(int i=0 ; i<10 ; i++){
        cout << p[i] << " ";
    }
    cout << endl;
    return 0;
}