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
  int n;
  cin >> n;
  vector<int> v(n);
  REP(i, n) {
    cin >> v[i];
  }
  sort(v.begin(), v.end());
  int minimum;
  int maximum;

  REP(i, n) {
    if(i == 0) {
      minimum = v[1] - v[i];
      maximum = v[n - 1] - v[i];
    }
    else if(i == n - 1) {
      minimum = v[n - 1] - v[n - 2];
      maximum = v[n - 1] - v[0];
    }
    else {
      minimum = min(abs(v[i + 1] - v[i]), abs(v[i] - v[i - 1]));
      maximum = max(abs(v[n - 1] - v[i]), abs(v[i] - v[0]));
    }
    cout << minimum << " " << maximum << endl;
  }

  return 0;
}
