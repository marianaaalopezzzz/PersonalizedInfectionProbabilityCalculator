#ifndef REPORT_H
#define REPORT_H

#include <string>
#include "RiskCalculator.h"

class Report : public RiskCalculator {
    private: 
        double final_calculated_probability;          
        std::string summary;       
        std::string recommendations;
    public: 
        // Constructor
        Report(const User& user, const Disease& disease, const RiskFactor& riskFactor, double probability, const std::string& summary, const std::string& recommendations);

        // Setters 
        void setFinal_Calculated_Probability(double final_calculated_probability);
        void setSummary(const std::string& summary);    
        void setRecommendations(const std::string& recommendations);

        //Getters 
        double getFinal_Calculated_Probability() const;
        std::string getSummary() const;
        std::string getRecommendations() const;
        
};
#endif
