#include <algorithm>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

int part1(std::vector<int> column1, std::vector<int> column2) {

    std::sort(column1.begin(), column1.end());
    std::sort(column2.begin(), column2.end());

    int total_distance = 0;
    for (int i = 0; i < column1.size(); i++) {
        total_distance += abs(column1[i] - column2[i]);
    }

    return total_distance;
}

int part2(std::vector<int> column1, std::vector<int> column2) {

    int similarity_score = 0;
    for (int i = 0; i < column1.size(); i++) {
        int count = std::count(column2.begin(), column2.end(), column1[i]);
        similarity_score += column1[i] * count;
    }

    return similarity_score;
}

int main(int argc, char* argv[]) {
    
    if (argc != 3) {
        std::cerr << "Usage: " << argv[0] << " partnum input.txt\n"  << std::endl;
        return -1;
    }

    std::ifstream file(argv[2]);

    std::vector<int> column1;
    std::vector<int> column2;
    int num1, num2;

    while (file >> num1 >> num2) {
        column1.push_back(num1);
        column2.push_back(num2);
    }

    if (column1.size() != column2.size()) {
        std::cerr << "Error: Location ID lists are not of the same size." << std::endl;
        return -1;
    }

    if (std::string(argv[1]) == "1") {
        std::cout << "Solution part 1: " << part1(column1, column2) << std::endl;
    } else if (std::string(argv[1]) == "2") {
        std::cout << "Solution part 2: " << part2(column1, column2) << std::endl;
    } else {
        std::cerr << "Error: Invalid part number." << std::endl;
        return -1;
    }
 
    return 0;
}
