#ifndef SCREEN_H
#define SCREEN_H

#include <string>
#include <iostream>

class Screen {
    public:
        typedef std::string::size_type Pos;
        
        friend class Window_mgr;
        
        Screen() = default;
        Screen(Pos ht, Pos wd): height(ht), width(wd), contents(ht * wd, ' ') {}
        Screen(Pos ht, Pos wd, char c): height(ht), width(wd), contents(ht * wd, c) {}
        
        char get() const;
        char get(Pos, Pos) const;
        Screen& set(char);
        Screen& set(Pos, Pos, char);
        Screen& move(Pos, Pos);
        Screen& display(std::ostream &os) { do_display(os); return *this; }
        Screen const& display(std::ostream &os) const { do_display(os); return *this; }
        
    private:
        std::string contents;
        Pos cursor = 0, height = 0, width = 0;
        
        void do_display(std::ostream &os) const { os << contents; }
};


inline char Screen::get() const {
    return contents[cursor];
}

inline char Screen::get(Pos row, Pos column) const {
    Pos r = row * width;          // Compute row location
    return contents[r + column];  // Return character at given column
}

inline Screen& Screen::set(char c) {
    contents[cursor] = c;
    return *this;
}

inline Screen& Screen::set(Pos row, Pos column, char c) {
    contents[row*width + column] = c;
    return *this;
}
inline Screen& Screen::move(Pos row, Pos column) {
    Pos r = row * width;     // Compute row location
    cursor = row + column;   // Move cursor to the column within that row
    return *this;
}
#endif