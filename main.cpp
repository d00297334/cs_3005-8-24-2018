#include <iostream>
#include <string>

void do_sum() {
    int start;
    int end;

    std::cout << "Sum first? ";
    std::cin >> start;
    std::cout << "Sum second? ";
    std::cin >> end;

    int i;
    int total = 0;
    for(i = start; i <= end; i++) {
        total += i;
    }
    std::cout << "Sum " << start << " to " << end << " is " << total << "." << std::endl;     
}

void calculator() {
    std::string action = "continue";
    
    while (action != "quit") {
        std::cout << "Action? ";
        std::cin >> action;
        if (action == "sum") {
            do_sum();
        } else if (action == "quit") {

        } else {
            std::cout << "I don't understand " << action << ". Please use sum or quit." << std::endl;
        }
    }
}

int main() {
    calculator();
    return 0;
}