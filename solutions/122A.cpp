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

bool isLucky(int n) {
  string s = to_string(n);
  REP(i, s.size()) {
    if(!(s[i] == '4' || s[i] == '7')) {
      return false;
    }
  }
  return true;
}

int main() {
  int n;
  cin >> n;
  string answer = "NO";
  REP(i, n+1) {
    if(isLucky(i) && n % i == 0) {
      answer = "YES";
    }
  }
  cout << answer << endl;

  return 0;
}