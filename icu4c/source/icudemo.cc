#include <iostream>
#include <utility>
#include <vector>

#include "unicode/unistr.h"
#include "unicode/ustream.h"

namespace {

int main(std::vector<icu::UnicodeString> args) {
  for (const auto& arg : args) {
    std::cout << arg << std::endl;
  }
  return 0;
}

}

int main(int argc, char** argv) {
  std::vector<icu::UnicodeString> args;
  for (int i = 0; i < argc; i++) {
    args.emplace_back(argv[i]);
  }
  return main(std::move(args));
}
