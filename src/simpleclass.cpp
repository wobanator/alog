#include <algorithm>
#include <alog/simpleclass.h>

using namespace alog;

std::vector<SimpleClass> SimpleClass::sortMe(std::vector<SimpleClass> v)
{
   std::stable_sort(v.begin(), v.end(), [](const SimpleClass &lhs, const SimpleClass &rhs) {
      return lhs.v < rhs.v || lhs.s < rhs.s;
   });
   return v;
}
