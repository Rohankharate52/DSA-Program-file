#include <iostream>
#include <vector>

using namespace std; 


const int MAXN = 2e5 + 5;

vector<int> adj[MAXN];
int a[MAXN];

int dfs(int u, int p) {
    int ans = 0;
    for (int v : adj[u]) {
        if (v != p) {
            ans += max(0, dfs(v, u));
        }
    }
    a[u] += ans;
    return ans;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++) {
            adj[i].clear();
        }
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        for (int i = 2; i <= n; i++) {
            int p;
            cin >> p;
            adj[p].push_back(i);
        }
        dfs(1, 0);
        cout << a[1] << endl;
    }
    return 0;
}