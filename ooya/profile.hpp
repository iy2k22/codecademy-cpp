#include <iostream>
#include <vector>

class Profile {
    private:
        std::string name;
        int age;
        std::string city;
        std::string country;
        std::string sex;
        std::vector<std::string> hobbies;
    public:
        Profile(std::string pName, int pAge, std::string pCity, std::string pCountry, std::string pSex) {
            name = pName;
            age = pAge;
            city = pCity;
            country = pCountry;
            sex = pSex;
        }
        std::string view_profile(void);
        void add_hobby(std::string);
};