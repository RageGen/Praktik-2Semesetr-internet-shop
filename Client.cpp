#include "Client.h"
Client::Client(std::string fullName, std::int64_t phoneNum, std::string email, std::string address) {
    m_full_name = fullName;
    m_phone_number = phoneNum;
    m_email = email;
    m_address = address;
}
std::string Client::getFullName() {
    return m_full_name;
}
std::int64_t Client::getPhoneNumber() {
    return m_phone_number;
}
std::string Client::getEmail() {
    return m_email;
}
std::string Client::getAddress() {
    return m_address;
}
