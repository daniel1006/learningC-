// a Namespace, provides a solution for preventing name conflict. It allows for identically named entitites as long as the namespaces are different.

#include <iostream>

namespace first {
    int x = 5;
}

namespace second {
    int x = 6;
}

int main() {
    
    using namespace first; // this line emplies that if we don't specify whihc namespace we want it will use the first one by default.

    std::cout << second::x; // This calls on the second namespace.

    

    return 0;
}