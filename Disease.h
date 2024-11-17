#ifndef DISEASE_H
#define DISEASE_H

#include <string>
class Disease{
    private: 
        std::string name;
        double transmission_prob;
        int severity;
        std::string transmission_method;
    public: 
        // Constructor 
        Disease(const std::string& name, double transmission_prob, int severity, const std::string& transmission_method);

        //Setters 
        void setName(const std::string& name);
        void setTransmission_Prob(double transmission_probability);
        void setSeverity(int severity);
        void setTransmission_Method(const std::string& transmission_method); 

        //Getters
        std::string getName() const; 
        double getTransmissin_Prob() const; 
        int getSeverity() const; 
        std::string getTransmission_Method() const;

        //Display Information 
        std::string displayInfo() const;
}; 
#endif

