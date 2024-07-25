#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

int32_t main()
{
    optimize();
    //array in stack.
    int a[3][4] ={{1,2,3,0},{4,5,6,0},{7,8,9,0}};
    for(int i=0 ; i<3 ; i++){
        for(int j = 0 ; j<4 ; j++){
            cout << a[i][j] << " ";
        }
        cout << endl ;
    }

    //array declare  in stack and row in heap.
    int  *b[3];
    b[0] = new int[4];
    b[1] = new int[4];
    b[2] = new int[4];

    for(int i=0 ; i<3 ; i++){
        for(int j=0 ; j<4 ; j++){
            cin >> b[i][j] ;
        }
    }
    
    cout << "............................" <<endl;

    for(int i=0 ; i<3 ; i++){
        for(int j = 0 ; j<4 ; j++){
            cout << b[i][j] << " ";
        }
        cout << endl ;
    }
    
    //declare and row in heap...
    int **c;
    c = new int*[3];
    c[0] = new int[4];
    c[1] = new int[4];
    c[2] = new int[4];

    for(int i=0 ; i<3 ; i++){
        for(int j=0 ; j<4 ; j++){
            cin >> b[i][j] ;
        }
    }

    cout << "............................" <<endl;
    
    for(int i=0 ; i<3 ; i++){
        for(int j = 0 ; j<4 ; j++){
            cout << b[i][j] << " ";
        }
        cout << endl ;
    }
    return 0;
}