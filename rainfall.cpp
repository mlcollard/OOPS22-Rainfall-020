/*
    rainfall.cpp

    Rainfall report. Inputs are rain amounts per hour. Output is the average
    and heaviest rainfall.
*/

#include <iostream>
#include <iomanip>
#include <vector>
#include <iterator>
#include <algorithm>

// average of the data
double avg(const std::vector<double>& data) {

    double total = 0.0;
    for (const auto item : data) {
        total += item;
    }

    return total / data.size();
}

// maximum of the data
double max(const std::vector<double>& data) {

    return *std::max_element(data.begin(), data.end());
}

int main() {

    // input hourly rainfall data
    const std::vector<double> rainfall{ std::istream_iterator<double>(std::cin),
                                        std::istream_iterator<double>() };
    if (!rainfall.size()) {
        std::cerr << "Error: no rainfall data\n";
        return 1;
    }

    // output the rainfall report
    std::cout << "Average Hourly Rainfall: " << std::fixed << std::setprecision(2) << avg(rainfall) << " hundreds of inches" << '\n';
    std::cout << "Heaviest Hourly Rainfall: " << max(rainfall) << " hundreds of inches" << '\n';

    return 0;
}
