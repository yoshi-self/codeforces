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

using namespace std;

typedef long long LL;
typedef unsigned long long ULL;
typedef unsigned int uint;

int main() {
  int n, a, b;
  cin >> n >> a >> b;
  int answer = (a + b) % n;
  if(answer == 0) {
    answer = n;
  }
  else if(answer < 0) {
    answer += n;
  }
  cout << answer << endl;

  return 0;
}
