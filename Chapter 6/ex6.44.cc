#include <string>

using std::string;

inline bool isShorter(string const &s1, string const &s2) {
    return s1.size() < s2.size();
}