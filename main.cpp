// 1-mashq
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1,2,2,3,2};
    map<int,int> m;

    for(int x : v) m[x]++;

    int mx = 0, res = 0;
    for(auto [k,v] : m)
        if(v > mx) mx = v, res = k;

    cout << res;
}
// 2-mashq
#include <bits/stdc++.h>
using namespace std;

int main() {
    string a = "listen", b = "silent";
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    cout << (a == b);
}
