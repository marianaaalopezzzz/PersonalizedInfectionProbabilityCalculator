#include "Virus.h"
//Constructor 
Virus::Virus(std::string name, double transmission_prob, int severity, std::string transmission_method, double mutation)
    :Disease(name, transmission_prob, severity, transmission_method), mutation(mutation) {}

double Virus::getMutationRate(){
    return mutation; 
}
