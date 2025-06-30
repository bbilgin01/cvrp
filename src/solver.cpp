#include "solver.hpp"
#include "distance.hpp"
#include <limits>
#include <iostream>


Solver::Solver(const RoutingData& data_, int vehicle_count, int vehicle_capacity)
    : data(data_)
    {
        for(int i = 0; i < vehicle_count; ++i){
            vehicles.emplace_back(i, vehicle_capacity);
        }
    }


void Solver::solve()
{
    std::vector<bool> visited(data.customers.size(), false);

    for(auto& vehicle: vehicles){
       Customer current = data.depot;

        while(true){
            int best_index = -1;
            double best_distance = std::numeric_limits<double>::max();
            for(int i = 0; i < data.customers.size(); i++){
                if (visited[i]) continue;
                if (!vehicle.can_add_customer(data.customers[i])) continue; 
                double distance = euclidean_distance(current, data.customers[i]);
                if(distance < best_distance) {
                    best_distance = distance;
                    best_index = i;
                }
                
            }  
            if(best_index == -1) break;

            vehicle.add_customer(data.customers[best_index]);
            visited[best_index] = true;
            current = data.customers[best_index];

        }
    }       
}

void Solver::print_solution()const{
    for(const auto& vehicle: vehicles){
        std::cout << "Vehicle ID: " << vehicle.id <<": Depot->";
        for(const auto& c : vehicle.route){
            std::cout << c.id  <<" -> ";
        }
        std::cout << "Depot (Load: "<< vehicle.load << ")\n";
    }
}