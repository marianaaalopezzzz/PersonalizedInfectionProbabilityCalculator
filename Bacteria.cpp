#include "Bacteria.h"
//Constructor 
Bacteria::Bacteria(const std::string& name, double transmission_prob, int severity, const std::string& transmission_method, bool antibiotic_resistance)
    :Disease(name, transmission_prob, severity, transmission_method), antibiotic_resistance(antibiotic_resistance){}
