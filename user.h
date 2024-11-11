#include <string>
class User{
    private: 
        int age;
        std::string gender;
        bool pre_existing_cond;
        bool vaccines;
    public: 
        // Constructor 
        User(int age, const std::string& gender, bool pre_existing_cond, bool vaccines)
            :age(age), gender(gender), pre_existing_cond(pre_existing_cond), vaccines(vaccines){}

        User(int age, const std::string &gender, bool pre_existing_cond, bool vaccines);
};
