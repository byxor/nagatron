#include "pollution.hpp"
#include <iostream>

bool PollutionChecker::IsPolluted(Contents contents, Contents whitelisted) {
  for (auto const& path: contents)
    if (!IsWhitelisted(path, whitelisted))
      return true;
  return false;
}

bool PollutionChecker::IsWhitelisted(Path path, Contents whitelisted) {
  for (auto const& whitelistedPath: whitelisted)
    if (path == whitelistedPath)
      return true;
  return false;
}
