
#ifndef SOLUTION_H
#define SOLUTION_H

#include "node.h"
#include <vector>
#include <queue>
#include <unordered_map>
#include <map>
#include <string>
#include <stack>

using namespace std;
namespace sol986
{

  class Solution
  {
  private:
  public:
    vector<vector<int>> findIntersection(vector<vector<int>> &A,
                                         vector<vector<int>> &B);
  };
}
#endif