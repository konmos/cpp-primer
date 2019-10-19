#ifndef EX7_31_H
#define EX7_31_H

class X;
class Y;

class X {
    Y *y_ptr;
};

class Y {
    X x_obj;
};
#endif