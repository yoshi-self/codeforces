#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cctype>
#include <climits>
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <sstream>
#include <vector>
#include <map>
#include <set>
#include <complex>
#include <functional>
#include <utility>
#include <iterator>

#define REP(i, n) for(int i = 0; i < (int)(n); ++i)
#define FOR(i, m, n) for(int i = (m); i < (int)(n); ++i)
#define ALL(x) (x).begin(), (x).end()
#define INF 2000000000

#ifdef LOCAL
  #define dprintf(...) fprintf(stdout, __VA_ARGS__)
#else
  #define dprintf(...) 0
#endif

using namespace std;

typedef long long LL;
typedef unsigned long long ULL;
typedef unsigned int uint;

const double PI = 3.1415926535897932384626433832795;

int main() {
  int n, m;
  cin >> n >> m;
  map<string, string> mp;
  REP(i, m) {
    string a, b;
    cin >> a >> b;
    mp[a] = a.size() <= b.size() ? a : b;
  }
  REP(i, n) {
    string s;
    cin >> s;
    cout << mp[s];
    if(i != n - 1) {
      cout << " ";
    }
  }
  cout << endl;
  return 0;
}
