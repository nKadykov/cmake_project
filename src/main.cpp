#include <iostream>
#include <boost/algorithm/string.hpp>

int main() {
    std::cout << "Hello World!" << std::endl;
    std::string s = "Boost Libraries";
    boost::to_upper(s);
    std::cout << s << std::endl;
    return 0;
}