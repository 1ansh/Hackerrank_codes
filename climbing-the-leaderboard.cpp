#include <bits/stdc++.h>

using namespace std;

int main()
{
  unsigned long n, m, tmp;
  cin >> n;
  stack<unsigned long> scores;
  while (n-- > 0) {
    cin >> tmp;
    if (scores.empty() || scores.top() != tmp) scores.push(tmp);
  }
  cin >> m;
  while (m-- > 0) {
    cin >> tmp;
    while (!scores.empty() && tmp >= scores.top()) scores.pop();
    cout << scores.size() + 1 << endl;
  }
  return 0;
}
