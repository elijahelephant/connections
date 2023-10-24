#ifndef DICTIONARY_H
#define DICTIONARY_H

#include <istream>
#include <string>
#include <vector>
#include <unordered_map>
#include <forward_list>

#define MAX_LENGTH 100

class Dictionary {
  // Member Variables
  struct Word {
    std::string word = "";
    std::forward_list<Word*> adjs;
    std::vector<std::string> templates;
  };
  std::unordered_map<std::string, Word*> lengths[MAX_LENGTH];
  std::unordered_map<std::string, std::vector<Word*>> templates_map[MAX_LENGTH];
  size_t real_max_length = 0;

  // Helper Functions
  Dictionary(std::istream& stream);

public:
  // The create function used by the autograder:
  static Dictionary* create(std::istream& stream);
  ~Dictionary();

public:
  // The function that does all the work:
  std::vector<std::string> hop(const std::string& from, const std::string& to);
};

#endif
