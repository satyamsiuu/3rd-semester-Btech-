#include <iostream>

class A {
public:
    int func(int value) {
        return value * 2;
    }
};

class B {
public:
    int func(int value) {
        return value * 3;
    }
};

class C {
public:
    int func(int value) {
        return value * 5;
    }
};

class D {
private:
    int val;

public:
    D() : val(1) {}

    void update_val(int new_val) {
        int a_count = 0, b_count = 0, c_count = 0;
        A a;
        B b;
        C c;

        while (new_val % 2 == 0) {
            new_val /= 2;
            a_count++;
        }

        while (new_val % 3 == 0) {
            new_val /= 3;
            b_count++;
        }

        while (new_val % 5 == 0) {
            new_val /= 5;
            c_count++;
        }

        for (int i = 0; i < a_count; i++) {
            val = a.func(val);
        }

        for (int i = 0; i < b_count; i++) {
            val = b.func(val);
        }

        for (int i = 0; i < c_count; i++) {
            val = c.func(val);
        }

        std::cout << "A's func called " << a_count << " times" << std::endl;
        std::cout << "B's func called " << b_count << " times" << std::endl;
        std::cout << "C's func called " << c_count << " times" << std::endl;
    }

    int get_val() const {
        return val;
    }
};

int main() {
    D d;
    d.update_val(30);
    std::cout << "Updated value in D: " << d.get_val() << std::endl;
    return 0;
}
