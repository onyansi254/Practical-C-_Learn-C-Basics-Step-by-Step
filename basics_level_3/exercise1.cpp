// Compute the max value inside the list of numbers (vector)
// -> Create a function and pass the vestor as a parameter

#include <iostream>
#include <vector>
#include <algorithm> // For std::max_element

// Function to compute the maximum value in a vector
int findMaxValue(const std::vector<int>& numbers) {
    if (numbers.empty()) {
        throw std::invalid_argument("The vector is empty.");
    }

    // Use std::max_element to find the maximum element in the vector
    return *std::max_element(numbers.begin(), numbers.end());
}

int main() {
    // Example vector of numbers
    std::vector<int> numbers = {10, 20, 5, 40, 30};

    //try {
        // Call the function and display the result
        int maxValue = findMaxValue(numbers);
        std::cout << "The maximum value in the vector is: " << maxValue << std::endl;
    //} catch (const std::exception& e) {
        //std::cerr << "Error: " << e.what() << std::endl;
    //}

    return 0;
}
