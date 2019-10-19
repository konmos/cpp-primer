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
    for (auto i : v1) cout << i << " ";
    cout << "}" << endl;
    
    cout << v2.size() << "{ ";
    for (auto i : v2) cout << i << " ";
    cout << "}" << endl;
    
    cout << v3.size() << "{ ";
    for (auto i : v3) cout << i << " ";
    cout << "}" << endl;
    
    cout << v4.size() << "{ ";
    for (auto i : v4) cout << i << " ";
    cout << "}" << endl;
    
    cout << v5.size() << "{ ";
    for (auto i : v5) cout << i << " ";
    cout << "}" << endl;
    
    cout << v6.size() << "{ ";
    for (auto i : v6) cout << i << " ";
    cout << "}" << endl;
    
    cout << v7.size() << "{ ";
    for (auto i : v7) cout << i << " ";
    cout << "}" << endl;
    
    return 0;
}