#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cctype>
#include <climits>
#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
#include <vector>
#include <map>
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

int main() {
  int n;
  cin >> n;
  map<string, int> m;
  REP(i, n) {
    string t;
    cin >> t;
    m[t]++;
  }

  int score = -1;
  string answer = "";
  for(auto it = m.begin(); it != m.end(); ++it) {
    string team = it->first;
    int num = it->second;
    if(num > score) {
      score = num;
      answer = team;
    }
  }

  cout << answer << endl;

  return 0;
}
