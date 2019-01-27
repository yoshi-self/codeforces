#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <queue>

#define REP(i, n) for(int i = 0; i < (int)(n); ++i)

typedef long long LL; 

const int BUFF_SIZE = 200000+1;

using namespace std;

void print() { std::cout << '\n'; }
template <class Head, class... Tail>
void print(Head&& head, Tail&&... tail) {
  if(sizeof...(tail) > 0) {
    std::cout << head << ' ';
  }
  else {
    std::cout << head;
  }
  print(std::forward<Tail>(tail)...);
}

std::string input() {
  char buff[BUFF_SIZE];
  fgets(buff, sizeof(buff), stdin);
  std::string str(buff);
  if(str.back()  == '\n') {
    str.pop_back();
  }
  return str;
}

int main() {
  int n, k;
  scanf("%d %d", &n, &k);
  vector<LL> damages;
  LL t;
  REP(i, n) {
#ifdef LOCAL
    scanf("%lld", &t);
#else
    scanf("%I64d", &t);
#endif
    damages.push_back(t);
  }
  getchar();
  string buttons;
  buttons = input();

  LL ans = 0;
  char prev_btn = '0';
  int press = 0;
  priority_queue<LL, vector<LL>, greater<LL>> q;
  REP(i, n) {
    char btn = buttons[i];
    LL dmg = damages[i];

    if(prev_btn == btn) {
      if(press == k) {
        if(q.top() < dmg) {
          ans -= q.top();
          q.pop();
          ans += dmg;
          q.push(dmg);
        }
      }
      else {
        press++;
        ans += dmg;
        q.push(dmg);
      }
    }
    else {
      prev_btn = btn;
      press = 1;
      ans += dmg;
      q = priority_queue<LL, vector<LL>, greater<LL>>();
      q.push(dmg);
    }
  }
  cout << ans << '\n';
  return 0;
}
