#include "Report.h"
//Constructor 
Report::Report(const User& user, const Disease& disease, const RiskFactor& riskFactor, double probability, const std::string& summary, const std::string& recommendations)
    :RiskCalculator(user,disease, riskFactor), final_calculated_probability(probability), summary(summary), recommendations(recommendations) {}

// Setters
void Report::setFinal_Calculated_Probability(double final_calculated_probability) { this->final_calculated_probability = final_calculated_probability; }
void Report::setSummary(const std::string& summary) { this->summary = summary; }
void Report::setRecommendations(const std::string& recommendations) { this->recommendations = recommendations; }

// Getters
double Report::getFinal_Calculated_Probability() const { return final_calculated_probability; }
std::string Report::getSummary() const { return summary; }
std::string Report::getRecommendations() const { return recommendations; }
