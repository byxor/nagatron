#ifndef POLLUTION_HPP
#define POLLUTION_HPP
#include <unordered_set>
#include <string>

typedef std::string Path;
typedef std::unordered_set<Path> Contents;

class PollutionChecker {
public:
  bool IsPolluted(Contents contents, Contents whitelisted=Contents{});
private:
  bool IsWhitelisted(Path path, Contents whitelisted);
};

#endif
