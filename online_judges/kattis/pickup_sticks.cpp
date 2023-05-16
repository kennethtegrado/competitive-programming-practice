#include <bits/stdc++.h>
using namespace std;

/*
APPROACH: 

Represent the problem as a directed graph.
1. The relation of sticks is represented by a directed edge.
2. If stick A is on top of stick B, then there is a directed edge from A to B.
3. The number of sticks on top of a stick is its in-degrees.
4. You can only remove sticks that do not have a stick on top of it.
    - Use topological sort so that sticks with 0 in-degrees come first.

*/ 

void solve() {
    int n, m;
    cin >> n >> m;

    // graph representation
    vector<vector<int>> adj(n);
    vector<int> deg(n, 0);

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        // increment the in-degree of b, since A is on top of it
        deg[b-1]++;
        // add a directed edge from a to b
        adj[a-1].push_back(b-1);
    }

    // initialize a queue for the edges
    queue<int> q;
    // res array for results
    vector<int> res;
    res.reserve(n);

    // initialize the q with the first sticks with 0 in-degrees
    for (int i = 0; i < n; i++) 
        if (deg[i] == 0) q.push(i);
    
    // iterate while the queue is empty
    while (!q.empty()) {
        // get the front of the quueue
        int u = q.front();
        q.pop();

        // push the front of the queue to our res array
        res.push_back(u);

        // since we removed a stick, reduce the in-degrees of sticks that are below it
        for (int i: adj[u]) {
            // reduce in-degree of ith stick
            deg[i]--;
    
            // update queue for sticks that have 0 in-degrees
            if (deg[i] == 0) q.push(i);
        }
    }

    // check if we were able to add all sticks to the res array
    if (res.size() == n) {
        for (int i : res) cout << i + 1 << endl;
    } else cout << "IMPOSSIBLE" << endl;
} 

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    while(t--) solve();

    return 0;
}