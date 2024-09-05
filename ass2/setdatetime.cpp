#include <iostream>
#include <cstdlib>  // for system()

int main() {

    std::string command = "sudo date 090123092024.00";

    // Execute the command
    int result = system(command.c_str());

    if (result == 0) {
        std::cout << "Date and time updated successfully!" << std::endl;
    } else {
        std::cerr << "Failed to update date and time. Please check your permissions." << std::endl;
    }

    return 0;
}

