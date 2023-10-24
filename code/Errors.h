#ifndef ERRORS_H
#define ERRORS_H

#include <stdexcept>
#include <string>

struct InvalidWord: public std::runtime_error {
  InvalidWord(const std::string& word): std::runtime_error(word) {
    // That is all.
  }
};

struct NoChain: public std::runtime_error {
  NoChain(): std::runtime_error("No chain.") {
    // That is all.
  }
};

#endif
