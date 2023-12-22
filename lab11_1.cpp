#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

int main() {
    std::cout << "Press Enter 3 times to reveal your future.\n";
    std::cin.get();
    std::cin.get();
    std::cin.get();

    std::srand(static_cast<unsigned int>(std::time(0))); 

    int random_number = std::rand() % 8; 

    std::string grade;
    if (random_number == 0) {
        grade = "A";
    } else if (random_number == 1) {
        grade = "B+";
    } else if (random_number == 2) {
        grade = "B";
    } else if (random_number == 3) {
        grade = "C+";
    } else if (random_number == 4) {
        grade = "C";
    } else if (random_number == 5) {
        grade = "D+";
    } else if (random_number == 6) {
        grade = "D";
    } else if (random_number == 7) {
        grade = "F";
    }
     else {
        grade = "W";
    }

    std::cout << "You will get " << grade << " in this 261102.\n";

    return 0;
}
