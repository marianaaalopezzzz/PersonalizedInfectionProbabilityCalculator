#include "Disease.h"
Disease::Disease(const std::string& name, double transmission_prob, int severity, const std::string& transmission_method)
    :name(name), transmission_prob(transmission_prob), severity(severity), transmission_method(transmission_method) {}

// Setters
void Disease::setName(const std::string& name) { this->name = name; }
void Disease::setTransmission_Prob(double transmission_probability) { this->transmission_prob = transmission_probability; }
void Disease::setSeverity(int severity) { this->severity = severity; }
void Disease::setTransmission_Method(const std::string& transmission_method) { this->transmission_method = transmission_method; }

// Getters
std::string Disease::getName() const { return name; }
double Disease::getTransmissin_Prob() const { return transmission_prob; }
int Disease::getSeverity() const { return severity; }
std::string Disease::getTransmission_Method() const { return transmission_method; }

// Display Information
std::string Disease::displayInfo() const {
    return "Disease: " + name + "\nTransmission Probability: " + std::to_string(transmission_prob) +
           "\nSeverity: " + std::to_string(severity) + "\nTransmission Method: " + transmission_method;
}
