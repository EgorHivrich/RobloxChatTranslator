#include <iostream>
#include <memory>

#include "./ui/include.hpp"

class Application {
public:
    Application(void)
      : _isRunning(true) { }

public:
    bool startup(void) { return true; }

private:
    bool _isRunning = false;
};

int main(int argc, char* argv[]) {
    std::unique_ptr<Application> app = std::make_unique<Application>();
    return app->startup();
}