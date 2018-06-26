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

int getDistance(char from, char to) {
  if(from == to) {
    return 0;
  }
  if(from > to) {
    swap(from, to);
  }
  if(to - from < 13) {
    return to - from;
  }
  else {
    return from + 26 - to;
  }
}

int main() {
  string s;
  cin >> s;
  int answer = 0;
  char prev = 'a';
  REP(i, s.size()) {
    int len = getDistance(prev, s[i]);
    answer += len;
    prev = s[i];
  }
  cout << answer << endl;

  return 0;
}
