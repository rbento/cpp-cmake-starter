
#include <iostream>
#include "core.cpp"

int main(int argc, char** argv)
{
    std::cout << "Running..." << std::endl;

    core core;
    core.startup();

    return 0;
}
