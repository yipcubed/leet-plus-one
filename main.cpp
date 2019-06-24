#include <iostream>
#include <queue>
#include <vector>
#include <stack>
#include <map>
#include <queue>

using namespace std;

// Live coding problems, watch at
// https://www.twitch.tv/yipcubed
// https://www.youtube.com/channel/UCTV_UOPu7EWXvYWsBFxMsSA/videos
//

// makes code faster, but larger. Just for LeetCode fun!
#pragma GCC optimise ("Ofast")

// makes stdin not synced so it is faster. Just for LeetCode fun!
static auto x = [](){ios_base::sync_with_stdio(false); cin.tie(NULL); return NULL;}();

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for (int i = digits.size() - 1; i >= 0; --i) {
          ++digits[i];
          if (digits[i] < 10) return digits;
          // no need to subtract 10, make it 0
          digits[i] = 0;
        }
        // no need to create a new vector, add to beginning
        digits.insert(digits.begin(), 1);
        return digits;
    }
};

ostream& operator<<(ostream& os, const vector<int>& v) {
  os << "[";
  for (int i : v) {
    os << i << " ";
  }
  os << "]";
  return os;
}

void test1() {
  Solution S;
  vector<int> v {1, 2, 3};
  cout << "124? " << S.plusOne(v) << endl;

  vector<int> v1 {1, 2, 9};
  cout << "130? " << S.plusOne(v1) << endl;

  vector<int> v2 {9, 9};
  cout << "100? " << S.plusOne(v2) << endl;
}

void test2() {
  Solution S;
}

void test3() {
  Solution S;
}

int main() {
  test1();
  test2();
  test3();
  cout << "Done!" << endl;
  
  return 0;
}