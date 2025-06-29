#include <iostream>
#include "vehicle.hpp"

using namespace std;

int main(int argc, char* argv[]){
    Customer c1(1, 10.0, 5.0, 3);
    Customer c2(2, -3.5, 2.1, 5);
    Customer c3(3, 0.0, 0.0, 1);

    Vehicle v1(0,5);

    // std::cout<< "Customer " << c1.id <<": ("<< c1.x <<", "<< c1.y << "), Demand = " << c1.demand <<"\n";
    // std::cout<< "Customer " << c2.id <<": ("<< c2.x <<", "<< c2.y << "), Demand = " << c2.demand <<"\n";
    // std::cout<< "Customer " << c3.id <<": ("<< c3.x <<", "<< c3.y << "), Demand = " << c3.demand <<"\n";
    // std::cout<< "Distance c1->c2 : " << euclidean_distance(c1,c2)<< std::endl;    
    // std::cout<< "Distance c2->c3 : "<< euclidean_distance(c2,c3)<< std::endl; 
    
    if(v1.can_add_customer(c1)) v1.add_customer(c1);
    if(v1.can_add_customer(c2)) v1.add_customer(c2);
    if(v1.can_add_customer(c3)) v1.add_customer(c3);

    cout << "Vehicle " << v1.id << " route: \n";
    for(const auto& c : v1.route){
        cout << " Müşteri " << c.id << "( Load: " << c.demand <<")\n";    
    }
    cout << "Total load: " << v1.load << "\n";
    return 0; 
}

