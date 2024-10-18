#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = int64_t;
using vl = vector<ll>;

ll m, a, b, s;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> m;
  ll ans = 1;
  ll rot = 1;
  for (auto i = 0; i < m; ++i) {
    cin >> a >> b >> s;

    ans *= b;
    ans /= a;
    if (s == 1) {
      rot *= -1;
    }
  }

  if (rot == 1) {
    cout << 0;
  } else {
    cout << 1;
  }
  cout << ' ' << ans;

  return 0;
}