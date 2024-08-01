#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

const int mx = 1000000;
int arr[mx], n;

bool RbinarySearch(int l , int h , int x){
    int mid ;
    if(l<=h){
        mid = (l+h)/2 ;
        if(arr[mid] == x) {
            return true;
        }
        else if(arr[mid]>x){
            return RbinarySearch(l,mid-1,x);
        }
        else{
            return RbinarySearch(mid+1 , h , x);
        }
    }
    else return false ;
}

bool binarySearch(int x)
{
    int low = 0, high = n - 1, mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == x)
        {
            return true;
        }
        else if (arr[mid] > x)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return false;
}

int32_t main()
{
    optimize();
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // before apply binary search you have to sort the array..
    sort(arr, arr + n);

    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        if(RbinarySearch(0,n-1,x)){
            cout << x << " is found. " << endl;
        }
        else {
            cout << x << " is not found." << nl ;
        }
    }
    return 0;
}