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
  int cups = 0;
  int medals = 0;
  int t;
  REP(i, 3) {
    cin >> t;
    cups += t;
  }
  REP(i, 3) {
    cin >> t;
    medals += t;
  }
  int shelves;
  cin >> shelves;
  int sCups = cups % 5 ? cups / 5 + 1 : cups / 5;
  int sMedals = medals % 10 ? medals / 10 + 1 : medals / 10;
  if(sMedals + sCups <= shelves) {
    cout << "YES" << endl;
  }
  else {
    cout << "NO" << endl;
  }
  return 0;
}
