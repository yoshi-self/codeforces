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

std::string join(const std::vector<std::string> &v, const std::string delim = "") {
  std::string result;
  for(unsigned int i = 0; i < v.size(); ++i) {
    result += v[i];
    if(i != v.size() - 1) {
      result += delim;
    }
  }
  return result;
}

int main() {
  int n;
  cin >> n;
  map<int, int> m;
  int a;
  int maximum = -1;
  REP(i, n) {
    cin >> a;
    maximum = max(maximum, a);
    FOR(j, 1, a + 1) {
      m[j]++;
    }
  }
  vector<string> v(n);
  REP(i, n) {
    int num = 0;
    FOR(j, 1, maximum + 1) {
      if(m[j] >= n - i) {
        num++;
      }
    }
    v[i] = to_string(num);
  }
  string answer = join(v, " ");
  cout << answer << endl;
  return 0;
}
