// Global module fragment where #includes can happen
module;
#include <iostream>
#include <string>

// first thing after the Global module fragment must be a module command
export module test_module;

export {
    
    void printTest(){
        std::cout << "module function\n";
    }
    
    class foo {
    public:
        foo()= default;
        ~foo()= default;
        static std::string getName() { return "foo name";}
    };
}



