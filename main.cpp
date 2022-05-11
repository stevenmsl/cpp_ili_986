#include <iostream>
#include <vector>
#include <string>
#include <tuple>
#include <unordered_map>
#include "solution.h"
#include "util.h"

using namespace std;
using namespace sol986;

/*
Input: A = [[0,2],[5,10],[13,23],[24,25]], B = [[1,5],[8,12],[15,24],[25,26]]
Output: [[1,2],[5,5],[8,10],[15,23],[24,24],[25,25]]
Reminder: The inputs and the desired output are lists of Interval objects, and not arrays or lists.
*/

tuple<vector<vector<int>>, vector<vector<int>>, vector<vector<int>>>
testFixture1()
{
  auto A = vector<vector<int>>{{0, 2}, {5, 10}, {13, 23}, {24, 25}};
  auto B = vector<vector<int>>{{1, 5}, {8, 12}, {15, 24}, {25, 26}};
  auto output = vector<vector<int>>{{1, 2}, {5, 5}, {8, 10}, {15, 23}, {24, 24}, {25, 25}};

  return make_tuple(A, B, output);
}

void test1()
{
  auto f = testFixture1();
  cout << "Expect to see: " << Util::toString(get<2>(f)) << endl;
  Solution sol;
  cout << Util::toString(sol.findIntersection(get<0>(f), get<1>(f))) << endl;
}

main()
{
  test1();
  return 0;
}