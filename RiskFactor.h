#ifndef RISKFACTOR_H
#define RISKFACTOR_H

#include <string>

class RiskFactor{
    private: 
        std::string climate;
        int population;
        int hygene_level;
    public: 
        // Constructor 
        RiskFactor(const std::string& climate, int population, int hygene);
        
        //Setters  
        void setClimate(const std::string& climate); 
        void setPopulation(int population);
        void setHygene_Level(int hygene);

        //Getters 
        std::string getClimate() const;
        int getPopulation() const;
        int getHygiene_Level() const;
}; 

#endif
