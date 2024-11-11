#include <string>
class Disease{
    private: 
        std::string name;
        double trans_prob;
        int severity;
        std::string trans_method;
    public: 
        // Constructor 
        Disease(const std::string& name, double trans_prob, int severity, const std::string& trans_method)
            :name(name), trans_prob(trans_prob), severity(severity), trans_method(trans_method){}
            
}; 

class Virus : public Disease {
    private:
        double mutation;
    public:
        // Constructor
        Virus(const std::string& name, double trans_prob, int severity, const std::string& trans_method, double mutation)
            : Disease(name, trans_prob, severity, trans_method), mutation(mutation){}

};

class Bacteria : public Disease {
    private:
        bool antibiotic_resistance;
    public:
        // Constructor
        Bacteria(const std::string& name, double trans_prob, int severity, const std::string& trans_method, bool antibiotic_resistance)
            : Disease(name, trans_prob, severity, trans_method), antibiotic_resistance(antibiotic_resistance){}

};
