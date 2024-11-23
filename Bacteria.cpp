#include "Bacteria.h"
//Constructor 
Bacteria::Bacteria(std::string name, double transmission_prob, int severity, std::string transmission_method, bool antibiotic_resistance)
    :Disease(name, transmission_prob, severity, transmission_method), antibiotic_resistance(antibiotic_resistance){}

bool Bacteria::hasAntibioticResistance() {
    return antibiotic_resistance;
}
