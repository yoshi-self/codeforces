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

// whether x is in v or not
template <class T>
bool inVector(const T &x, const std::vector<T> &v) {
  auto iter = std::find(v.begin(), v.end(), x);
  if(iter != v.end()) {
    return true;
  }
  else {
    return false;
  }
}

vector<char> vowels = {'A', 'E', 'I', 'O', 'U', 'Y'};

int main() {
  string s;
  cin >> s;
  int answer = 1;
  int count = 0;
  REP(i, s.size()) {
    count++;
    answer = max(answer, count);
    if(inVector(s[i], vowels)) {
      count = 0;
    }
  }
  if(!inVector(s[s.size() - 1], vowels)) {
    answer = max(answer, count + 1);
  }
  cout << answer << endl;

  return 0;
}
