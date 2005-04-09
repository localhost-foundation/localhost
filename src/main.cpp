#include <iostream>
#include <fstream>

int main() {
    // Custom IP address to redirect localhost to
    const std::string customIP = "127.0.0.2"; // Change this to your desired IP

    // File path to the hosts file (on Windows and Linux)
    const std::string hostsFilePath = "/etc/hosts"; // Change this to the correct path on Windows if needed

    // Open the hosts file in append mode
    std::ofstream hostsFile(hostsFilePath, std::ios::app);

    if (!hostsFile.is_open()) {
        std::cerr << "Error: Unable to open the hosts file for writing.\n";
        return 1;
    }

    // Add the custom entry for localhost to the hosts file
    hostsFile << customIP << " localhost\n";

    // Close the file
    hostsFile.close();

    std::cout << "localhost domain has been overridden with IP: " << customIP << std::endl;

    return 0;
}
