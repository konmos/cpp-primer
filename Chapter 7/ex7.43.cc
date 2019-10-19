#include <vector>

class NoDefault {
    public:
        NoDefault(int i): x(i) {}
    private:
        int x;
};

class C {
    public:
        C(): nd(0) {}
    private:
        NoDefault nd;
};

int main() {
    C c;
    std::vector<C> vec(10); 
    return 0;
}