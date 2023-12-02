#include <iostream>
#include <iomanip>
#include <ctime>

int main() {
    // Get the current date/time
    time_t now = time(0);

    // Convert now to tm struct for local timezone
    tm *ltm = localtime(&now);

    // Display date in YYYY-MM-DD format
    std::cout << 1900 + ltm->tm_year << "-" 
              << std::setfill('0') << std::setw(2) << 1 + ltm->tm_mon << "-" 
              << std::setfill('0') << std::setw(2) << ltm->tm_mday << std::endl;

    return 0;
}
