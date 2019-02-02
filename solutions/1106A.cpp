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

vector<vector<char>> vv;

void p() {
  REP(i, vv.size()) {
    REP(j, vv[i].size()) {
      cout << vv[i][j];
    }
    cout << endl;
  }
  cout << endl;
}

int main() {
  int n;
  scanf("%d", &n);
  vv.resize(n + 2, vector<char>(n + 2, '-'));
  char tc;
  REP(i, n) {
    REP(j, n) {
      scanf(" %c", &tc);
      vv[i + 1][j + 1] = tc;
    }
  }

  int ans = 0;
  FOR(i, 1, n + 1) {
    FOR(j, 1, n + 1) {
      if(vv[i][j] == 'X' && vv[i - 1][j - 1] == 'X'
          && vv[i - 1][j + 1] == 'X' && vv[i + 1][j - 1] == 'X'
          && vv[i + 1][j + 1] == 'X'
      ) {
        ans++;
      }
    }
  }

  cout << ans << '\n';
  return 0;
}
