#include <iostream>
#include <string>

using std::string; using std::cin; using std::cout; using std::endl;


int part_a()
{
    string str;
    for (string buf; cin >> buf; str += buf);
    cout << "CONCAT: " << str << endl;
    return 0;
}

int part_b()
{
    string str;
    for (string buf; cin >> buf; str += buf + " ");
    cout << "CONCAT: " << str << endl;
    return 0;
}

int main()
{
    string part;
    cin >> part;
    
    if (part == "a"){
        return part_a();
    } else {
        return part_b();
    }
}
