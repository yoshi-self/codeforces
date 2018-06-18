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

bool compare(const vector<int>& lhs, const vector<int>& rhs) {
  if(lhs[0] == rhs[0]) {
    return lhs[1] < rhs[1];
  }
  else {
    return lhs[0] < rhs[0];
  }
}

int main() {
  int n;
  cin >> n;
  vector<vector<int>> v;

  REP(i, n) {
    vector<int> t(2);
    cin >> t[0] >> t[1];
    v.push_back(t);
  }

  sort(v.begin(), v.end(), compare);
  bool happy = false;
  FOR(i, 1, n) {
    if(v[i - 1][0] < v[i][0] && v[i - 1][1] > v[i][1]) {
      happy = true;
    }
  }
  if(happy) {
    cout << "Happy Alex" << endl;
  }
  else {
    cout << "Poor Alex" << endl;
  }
  return 0;
}
