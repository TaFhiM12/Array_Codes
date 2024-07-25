#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

int a[1000];
int n ;

void displayArray(int *a , int n ){
    for(int i=0 ; i<n ; i++){
        cout << a[i] <<  " ";
    }
    cout << endl ;
}

void insertElement(int *a , int x , int index){
    for(int i=n ; i>index ; i--){
        a[i] = a[i-1];
    }

    a[index] = x ;
    n++;
}

int32_t main()
{
    optimize();
    cin >> n ;
    for(int i=0 ; i<n ; i++) cin >> a[i];
    int x , index; 
    cin >> x >> index ;
    insertElement(a , x ,index);
    displayArray(a,n);
    return 0;
}