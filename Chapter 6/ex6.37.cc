#include <string>

using std::string;

// barebones
string (&func(string (&sarr)[10]))[10];

// type alias
using arrT = string[10];
arrT &foo(arrT &sarr);

// trailing return
auto bar(string (&sarr)[10]) -> string(&)[10];

// decltype
string arr[10];
decltype(arr) &baz(string (&sarr)[10]);