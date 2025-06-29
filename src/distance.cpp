#include "distance.hpp"
#include <cmath>

double euclidean_distance(const Customer& a, const Customer& b){
    double dx = a.x - b.x;
    double dy = a.y - b.y;
    return std::sqrt(dx*dx + dy*dy);
}

