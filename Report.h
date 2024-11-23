#ifndef REPORT_H
#define REPORT_H

#include <string>

#include "RiskCalculator.h"


class Report{
    private: 
        RiskCalculator riskCalculator;
        double final_calculated_probability;          
        std::string summary;       
        std::string recommendations;
    public: 
        // Constructor
        Report(User user, Disease disease, RiskFactor riskFactor, double probability, std::string summary, std::string recommendations);

        // Setters 
        void setFinal_Calculated_Probability(double final_calculated_probability);
        void setSummary(std::string summary);    
        void setRecommendations(std::string recommendations);

        //Getters 
        double getFinal_Calculated_Probability();
        std::string getSummary();
        std::string getRecommendations();
        
};
#endif
