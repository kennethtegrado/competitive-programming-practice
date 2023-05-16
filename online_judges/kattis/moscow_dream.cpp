#include <bits/stdc++.h>
using namespace std;

#define int long long int

void solve() {
    // these are the inputs needed for this problem
    int a,b,c,n;

    // scan the input
    scanf("%lld %lld %lld %lld", &a, &b, &c, &n);

    /*
    THINGS TO CONSIDER FOR THE SOLUTIOn:
    a >= 1, at least 1 easy
    b >= 1, at least 1 medium
    c >= 1, at least 1 hard
    n >= 3, you cannot have at least 1 easy, 1 medium, and 1 hard when n is less than 3
    a + b + c >= n, sum of a, b, and c should not be less than n
    */ 

    if ((a >= 1) && (b >= 1) && (c>= 1) && (n >= 3) && (a + b + c >= n)) printf("YES");
    else printf("NO");
    printf("\n");
}

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    while(t--) solve();

    return 0;
}