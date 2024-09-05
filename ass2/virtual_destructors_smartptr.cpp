#include <iostream>
#include <memory>  // For std::unique_ptr

using namespace std;

class base {
protected:
    int privatevar;

public:
    base(int var) : privatevar(var) {}

    virtual int getprotectedvar() {
        return privatevar;
    }

    virtual ~base() {
        cout << "Base Class Destructor " << endl;
    }
};

class derived : public base {
    int* data;
public:
    derived(int var, int x) : base(var) {
        data = new int(x);
    }

    int getprotectedvar() override {
        return (*data) * privatevar;
    }

    ~derived() {
        delete data;
        cout << "Derived Class Destructor " << endl;
    }
};

int main() {
    // Create a unique_ptr to manage the base class object
    unique_ptr<base> basePtr = make_unique<derived>(20, 2);
    cout << basePtr->getprotectedvar() << endl;  // Calls Derived::getprotectedvar

    // No need to manually delete the object; unique_ptr takes care of it
    return 0;
}

