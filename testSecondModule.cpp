// Global module fragment where #includes can happen
module;
#include <iostream>

// first thing after the Global module fragment must be a module command
export module test_second_module;
import test_module;

export void testInside(){
    foo testClass {};
    //auto text {testClass.getName()};
    constexpr auto text = "const expr";
    std::cout << text << std::endl;
    //std::cout << "inside second:" << printTest;
}
