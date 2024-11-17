#include "Virus.h"
//Constructor 
Virus::Virus(const std::string& name, double transmission_prob, int severity, const std::string& transmission_method, double mutation)
    :Disease(name, transmission_prob, severity, transmission_method), mutation(mutation) {}
    
