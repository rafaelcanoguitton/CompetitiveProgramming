    #include<bits/stdc++.h>
    using namespace std;
    double ans = 0.0;
    vector<int> adyacencia[100000];
     
    void dfs (int at, int padre, double probabilidad, int profundidad) {
        int debajo = 0;
        for (int i: adyacencia[at]) {
            if (i != padre) {
                debajo++;
            }
        }
        for (int i: adyacencia[at]) {
            if (i != padre) {
                dfs (i, at, probabilidad/debajo, profundidad+1);
            }
        }
        if (debajo == 0) {
            ans += probabilidad*profundidad;
        }
    }
    int main() {
        int N;
        cin >> N;
        for (int i=0; i<N-1; i++) {
            int a, b;
            cin >> a >> b;
            a--;
            b--;
            adyacencia[a].push_back(b);
            adyacencia[b].push_back(a);
        }
        dfs(0, 0, 1.0, 0);
        cout << fixed << setprecision(7) << ans <<endl;
    }