#ifndef DISEASE_H
#define DISEASE_H

#include <string>

class Disease{
    protected: 
        std::string name;
        double transmission_prob;
        int severity;
        std::string transmission_method;
    public: 
        // Constructor 
        Disease(std::string name, double transmission_prob, int severity,std::string transmission_method);

        //Setters 
        void setName(std::string name);
        void setTransmission_Prob(double transmission_probability);
        void setSeverity(int severity);
        void setTransmission_Method(std::string transmission_method); 

        //Getters
        std::string getName(); 
        double getTransmission_Prob(); 
        int getSeverity(); 
        std::string getTransmission_Method();

        //Display Information 
        std::string displayInfo();
}; 
#endif
