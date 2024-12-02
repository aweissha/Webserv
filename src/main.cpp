#include "Server.hpp"

int main(int argc, char** argv) {
    std::string configFile = (argc > 1) ? argv[1] : "config/default.conf";

    try {
        Server server(configFile);
        server.run();
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}
