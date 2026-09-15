#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x, y, z;
        cin >> x >> y >> z;

        int refills = (x + y - 1) / y;

        cout << refills * z << endl;
    }

    return 0;
}