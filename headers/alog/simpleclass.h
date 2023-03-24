#pragma once

#include <string>
#include <vector>

namespace alog
{
class SimpleClass
{
 public:
   int v {};
   std::string s;

   static std::vector<SimpleClass> sortMe(std::vector<SimpleClass> v);
};
}   // namespace alog
