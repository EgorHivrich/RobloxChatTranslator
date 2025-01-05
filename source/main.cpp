#include <iostream>
#include <vector>

class Application {
public:
    Application(int argumentsCount, char* arguments[]);

    bool startup(void) { return true; }

private:
    std::vector<std::string> _arguments;
};

int main(int argc, char* argv[])
{
    Application* application = new Application(argc, argv);
    return application->startup();
}