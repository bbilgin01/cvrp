#include <iostream>
#include "solver.hpp"

using namespace std;

int main(int argc, char* argv[]){
    Customer depot(0, 0.0, 0.0, 0);
    RoutingData data(depot);
    
    data.add_customer(Customer(1, 1.0, 1.0, 2));
    data.add_customer(Customer(2, 2.0, 0.0, 4));
    data.add_customer(Customer(3, -1.0, -1.0, 3));
    data.add_customer(Customer(4, -2.0, 2.0, 2));
    data.add_customer(Customer(5, 0.0, 3.0, 1));

    int vehicle_count = 2;
    int vehicle_capacity = 6;
    Solver solver(data, vehicle_count, vehicle_capacity);
    solver.solve();
    solver.print_solution();
    
    return 0; 
}

