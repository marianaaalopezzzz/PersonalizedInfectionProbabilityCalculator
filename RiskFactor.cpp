#include "RiskFactor.h"
//Constructor 
RiskFactor::RiskFactor(const std::string& climate, int population, int hygene)
    : climate(climate), population(population), hygene_level(hygene) {}

//Setters 
void RiskFactor::setClimate(const std::string& climate) { this->climate = climate; }
void RiskFactor::setPopulation(int population) { this->population = population; }
void RiskFactor::setHygene_Level(int hygene) { this->hygene_level = hygene; }

// Getters
std::string RiskFactor::getClimate() const { return climate; }
int RiskFactor::getPopulation() const { return population; }
int RiskFactor::getHygiene_Level() const { return hygene_level; }

