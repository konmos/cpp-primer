#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::string;
using std::endl;
using std::cout;

int main(){
    vector<int> v1;                 // size:0,  no values.
    vector<int> v2(10);             // size:10, value:0
    vector<int> v3(10, 42);         // size:10, value:42
    vector<int> v4{ 10 };           // size:1,  value:10
    vector<int> v5{ 10, 42 };       // size:2,  value:10, 42
    vector<string> v6{ 10 };        // size:10, value:""
    vector<string> v7{ 10, "hi" };  // size:10, value:"hi"
    
    cout << v1.size() << "{ ";
    for (auto it = v1.cbegin(); it != v1.end(); ++it) cout << *it << " ";
    cout << "}" << endl;
    
    cout << v2.size() << "{ ";
    for (auto it = v2.cbegin(); it != v2.end(); ++it) cout << *it << " ";
    cout << "}" << endl;
    
    cout << v3.size() << "{ ";
    for (auto it = v3.cbegin(); it != v3.end(); ++it) cout << *it << " ";
    cout << "}" << endl;
    
    cout << v4.size() << "{ ";
    for (auto it = v4.cbegin(); it != v4.end(); ++it) cout << *it << " ";
    cout << "}" << endl;
    
    cout << v5.size() << "{ ";
    for (auto it = v5.cbegin(); it != v5.end(); ++it) cout << *it << " ";
    cout << "}" << endl;
    
    cout << v6.size() << "{ ";
    for (auto it = v6.cbegin(); it != v6.end(); ++it) cout << *it << " ";
    cout << "}" << endl;
    
    cout << v7.size() << "{ ";
    for (auto it = v7.cbegin(); it != v7.end(); ++it) cout << *it << " ";
    cout << "}" << endl;
    
    return 0;
}