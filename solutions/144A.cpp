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
  int maximum = -1;
  int minimum = INF;
  map<int, vector<int>> m;
  int t;
  REP(i, n) {
    cin >> t;
    m[t].push_back(i); 
    maximum = max(maximum, t);
    minimum = min(minimum, t);
  }
  int max_idx = m[maximum][0];
  int min_idx = m[minimum][m[minimum].size() - 1];
  int answer = max_idx + (n - 1 - min_idx);
  if(min_idx < max_idx) {
    answer--;
  }
  cout << answer << endl;
  return 0;
}
