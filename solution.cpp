#include "solution.h"
#include "util.h"
#include <unordered_set>
#include <numeric>
#include <iterator>
#include <unordered_map>
#include <deque>
#include <string>
#include <sstream>
#include <algorithm>
#include <stack>
using namespace sol986;
using namespace std;

/*takeaways
  - use two pointers
  - advance the pointer if the interval it's representing
    has no chance to intersect with others
*/
vector<vector<int>> Solution::findIntersection(vector<vector<int>> &A,
                                               vector<vector<int>> &B)
{
  int m = A.size(), n = B.size(), i = 0, j = 0;
  auto result = vector<vector<int>>();

  while (i < m && j < n)
  {
    /* pick the later start time */
    auto s = max(A[i][0], B[j][0]);
    /* pick the earlier end time */
    auto e = min(A[i][1], B[j][1]);

    /* make sure it's legit */
    if (s <= e)
      result.push_back({s, e});

    /* whoever has a earlier end time would not
       have any chance in the next round
       - move ahead with its pointer
    */
    (A[i][0] < B[j][0]) ? i++ : j++;
  }

  return result;
}
