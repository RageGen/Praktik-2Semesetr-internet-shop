#ifndef TEST_CLIENT_H
#define TEST_CLIENT_H
#include <string>
#include <iostream>
#include <vector>
#include <iomanip>

class Client{
private:
    std::string m_full_name;
    std::int64_t m_phone_number;
    std::string m_email;
    std::string m_address;
public:
    Client(std::string, std::int64_t , std::string, std::string);
    std::string getFullName();
    std::int64_t getPhoneNumber();
    std::string getEmail();
    std::string getAddress();
    std::string setFullName();
    std::int64_t setPhoneNumber();
    std::string setEmail();
    std::string setAddress();
};
#endif
