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

// Greatest common divisor
template<class T>
T gcd(T x, T y) {
  if(x < y) {
    std::swap(x, y);
  }
  if(x == 0) {
    return y;
  }
  T r = x % y;
  while(r != 0) {
    x = y;
    y = r;
    r = x % y;
  }
  return y;
}

int main() {
  int a, b, n;
  cin >> a >> b >> n;

  int turn = 1;
  while(n != 0) {
    int c = turn == 1 ? a : b;
    int g = gcd(c, n);
    if(g > n) {
      break;
    }
    else {
      n -= g;
    }
    turn = (turn += 1) % 2;
  }
  cout << turn << endl;

  return 0;
}
