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
  int n, t;
  cin >> n >> t;
  cout << dec;
  if(n == 1) {
    if(t == 10) {
      cout << -1 << endl;
    }
    else {
      cout << t << endl;
    }
  }
  else {
    if(t == 10) {
      string s(n - 1, '1');
      cout << s + "0" << endl;
    }
    else {
      string s(n, t + '0');
      cout << s << endl;
    }
  }

  return 0;
}
