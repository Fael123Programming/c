#include <iostream>

//cout, cin and cerr are objects from 'iostream' library.

using namespace std;

int main() {
    cout << 9 / 2 << endl;
    int n = 9, m = 2;
    cout << n / static_cast<double>(m) << endl;
    return 0;
}