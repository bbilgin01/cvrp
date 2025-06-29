#include <iostream>
#include "routing_data.hpp"

using namespace std;

int main(int argc, char* argv[]){
    Customer depot(0, 0.0, 0.0, 0);
    RoutingData data(depot);
    
    data.add_customer(Customer(1, 1.0, 1.0, 2));
    data.add_customer(Customer(2, -1.5, 2.0, 3));
    data.add_customer(Customer(3, 0.0, -3.0, 1));

    cout<<  "Customer List:\n";
    for(const auto& c : data.customers){
        cout << " ID: "<< c.id << " at Location: (" <<c.x<<","<<c.y<<"), Demand: "<< c.demand<< "\n";
    }

    return 0; 
}

