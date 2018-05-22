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
  int answer = n;
  if(n < 0) {
    if(n >= -9) {
      answer = 0;
    }
    else {
      string a = to_string(n);
      string b = to_string(n);
      a.erase(a.size() - 1, 1);
      b.erase(b.size() - 2, 1);
      answer = max(stoi(a), stoi(b));
    }
  }
  cout << answer << endl;
  return 0;
}
