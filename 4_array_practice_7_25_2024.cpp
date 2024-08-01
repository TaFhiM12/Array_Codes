#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

int a[1000];
int n;

void displayArray(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

void insertElement(int *a, int x, int index)
{
    for (int i = n; i > index; i--)
    {
        a[i] = a[i - 1];
    }

    a[index] = x;
    n++;
}

void deleteeElement(int index)
{
    for (int i = index; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }
    n--;
}

void linearSearch(int x)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            cout << "Element Is Found" << endl;
            return;
        }
    }
    cout << "Element Is not Found " << endl;
}

int32_t main()
{
    optimize();
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    // //insert operation.
    // int x , index;
    // cin >> x >> index ;
    // insertElement(a , x ,index);
    // insertElement(a , x ,index);
    // displayArray(a,n);

    // //delete operation.
    // int deleteIndex;
    // cin >> deleteIndex ;
    // deleteeElement(deleteIndex);
    // displayArray(a,n);

    // linear Search.
    int ele;
    while(cin >> ele)
    {
        linearSearch(ele);
    }
    return 0;
}