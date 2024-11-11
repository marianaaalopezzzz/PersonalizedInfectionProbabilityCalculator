#ifndef REPORT_H
#define REPORT_H

#include <string>
#include "RiskCalculator.h"

class Report : public RiskCalculator {
    private: 
        double final_calculated_probability;          
        std::string summary_and_recommendations;       
    public: 
        // Constructor
        Report(const User& user, const Disease& disease, const RiskFactor& riskFactor)
            : RiskCalculator(user, disease, riskFactor), final_calculated_probability(0.0), summary_and_recommendations("") {}
        
        void generateReport(double final_probability, const std::string& summary) {
            final_calculated_probability = final_probability; 
            summary_and_recommendations = summary;          
        }

        double getFinalProbability() const {
            return final_calculated_probability;
        }

        std::string getSummary() const {
            return summary_and_recommendations;
        }
};
#endif
