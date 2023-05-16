#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define pii pair<int, int>
#define pq priority_queue
#define vii vector<pii>

class Node {
public:
    int w;
    int l;
    int r;
    Node(int wx, int lx, int rx)
    {
        w = wx;
        l = lx;
        r = rx;
    }
};

class CMin {
public:
    bool operator()(pii a, pii b) {
        if (a.first > b.first) return 1;
        if (a.first == b.first)
            if (a.second > b.second) return 1;
        return 0;
    }
};

class CMax {
public:
    bool operator()(pii a, pii b) {
        if (a.first < b.first) return 1;
        if (a.first == b.first)
            if (a.second > b.second) return 1;
        return 0;
    }
};

void solve() {
    int n, s = 0;
    cin >> n;
    pq<pii, vii, CMax> maxq;
    pq<pii, vii, CMin> minq;
    vector<Node> w;
    w.reserve(n);


    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        s += x;
        int l = i > 0 ? i - 1 : -1;
        int r = i < n - 1 ? i + 1 : -1;
        Node n(x, l, r);
        w.push_back(n);
        pii y = make_pair(x, i);
        maxq.push(y);
        minq.push(y);
    }
    

    for (int i = 0; i < n; i++) {
        while (w[minq.top().second].w != minq.top().first)
            minq.pop();
        while (w[maxq.top().second].w != maxq.top().first)
            maxq.pop();

        pii r;
        if (s - maxq.top().first < maxq.top().first) {
            r = minq.top();
            minq.pop();
        } else {
            r = maxq.top();
            maxq.pop();
        }

        Node rx = w[r.second];
        w[r.second].w = -1;
        w[r.second].l = -1;
        w[r.second].r = -1;
    
        s -= rx.w;
        if (rx.l >= 0)
        {
            w[rx.l].w += rx.w / 2;
            w[rx.l].r = rx.r;
            s += rx.w / 2;
            pii l = make_pair(w[rx.l].w, rx.l);
            maxq.push(l);
            minq.push(l);
        }
        if (rx.r >= 0)
        {
            w[rx.r].w += rx.w / 2;
            w[rx.r].l = rx.l;
            s += rx.w / 2;
            pii r = make_pair(w[rx.r].w, rx.r);
            maxq.push(r);
            minq.push(r);
        }
        int c = 0;

        printf("%lld %lld\n", r.second + 1, r.first);
    }
}

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    while (t--) solve();

    return 0;
}