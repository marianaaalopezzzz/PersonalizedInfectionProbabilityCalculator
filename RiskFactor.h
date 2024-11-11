#include <string>
class RiskFactor{
    private: 
        std::string climate;
        int population;
        int hygene;
    public: 
        // Constructor 
        RiskFactor(const std::string& climate, int population, int hygene)
            :climate(climate), population(population), hygene(hygene){}
            
}; 
