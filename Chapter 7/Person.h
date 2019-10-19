#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <iostream>

class Person;

std::istream& read(std::istream&, Person&);
std::ostream& print(std::ostream&, Person const&);

class Person {
    friend std::istream& read(std::istream&, Person&);
    friend std::ostream& print(std::ostream&, Person const&);
    
    public:
        Person() = default;
        Person(std::string const &n, std::string const &a): name(n), address(a);
        explicit Person(std::istream &is) { read(is, *this); }
        
        std::string get_name() const { return name; }
        std::string get_address() const { return address; }
    
    private:
        std::string name;
        std::string address;
};


std::istream& read(std::istream &is, Person &p) {
    is >> p.name >> p.address;
    return is;
}

std::ostream& print(std::ostream, &os, Person const &p) {
    os << p.name << " " << p.address;
    return os;
}
#endif