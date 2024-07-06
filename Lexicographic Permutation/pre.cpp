#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) {
        a[i] = i+1;
    }

    do {
        for (int i = 0; i < n; i++) {
            cout << a[i];
            if(i<n-1)
            {
                cout<<" ";
            }
        }
        cout << endl;
    } while (next_permutation(a, a + n));
    return 0;
}
