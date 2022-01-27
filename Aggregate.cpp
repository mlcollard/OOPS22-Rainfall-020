/*
    Aggregate.cpp

    Implementation file for aggregate functions
*/

#include "Aggregate.hpp"
#include <numeric>
#include <algorithm>

// average of the data
double avg(const std::vector<double>& data) {

    return std::accumulate(data.begin(), data.end(), 0.0) / data.size();
}

// maximum of the data
double max(const std::vector<double>& data) {

    return *std::max_element(data.begin(), data.end());
}
