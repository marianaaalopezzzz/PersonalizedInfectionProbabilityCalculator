#include "RiskFactor.h"
//Constructor 
RiskFactor::RiskFactor(std::string climate, int population, int hygiene)
    : climate(climate), population(population), hygiene_level(hygiene) {}

//Setters 
void RiskFactor::setClimate(std::string climate) { this->climate = climate; }
void RiskFactor::setPopulation(int population) { this->population = population; }
void RiskFactor::setHygiene_Level(int hygiene) { this->hygiene_level = hygiene; }

// Getters
std::string RiskFactor::getClimate() { return climate; }
int RiskFactor::getPopulation() { return population; }
int RiskFactor::getHygiene_Level() { return hygiene_level; }

