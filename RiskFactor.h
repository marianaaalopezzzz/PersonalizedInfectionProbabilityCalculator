#ifndef RISKFACTOR_H
#define RISKFACTOR_H

#include <string>

class RiskFactor{
    private: 
        std::string climate;
        int population;
        int hygiene_level;
    public: 
        // Constructor 
        RiskFactor(std::string climate, int population, int hygiene);
        
        //Setters  
        void setClimate(std::string climate); 
        void setPopulation(int population);
        void setHygiene_Level(int hygiene);

        //Getters 
        std::string getClimate();
        int getPopulation();
        int getHygiene_Level();
}; 

#endif
