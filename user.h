#ifndef USER_H
#define USER_H

#include <string>

class User{
    private: 
        int age;
        std::string gender;
        bool pre_existing_cond;
        bool vaccines;
    public: 
        // Constructor 
         User(int age, std::string gender, bool pre_existing_cond, bool vaccines);
        
        // Setters 
        void setAge(int age); 
        void setGender(std::string gender);
        void setPre_Existing_Cond(bool condition);
        void setVaccines(bool vaccinated);

        //Getters 
        int getAge();
        std::string getGender(); 
        bool hasPre_Existing_Cond(); 
        bool hasVaccines(); 

};
#endif
