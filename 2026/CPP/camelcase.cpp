//Solution for "Convert string to camel case" kata
//https://www.codewars.com/kata/517abf86da9663f1d2000003

#include <string>
#include <vector>
#include <regex>
#include <string>

std::string to_camel_case(std::string text) {
  //declare variables
  std::string result;

  //breaks input into array broken by "-" or "_"
  std::regex reg("[_\\-]+");
  std::sregex_token_iterator iter(text.begin(), text.end(), reg, -1);
  std::sregex_token_iterator end;
  std::vector<std::string> words(iter, end);

  //change cases
  for (size_t i = 1; i < words.size(); ++i) {
      words[i][0] = std::toupper(words[i][0]);
  }

  //combine into one word
  for (size_t i = 0; i < words.size(); ++i) {
        result += words[i];
  }
  
  return result;

}
