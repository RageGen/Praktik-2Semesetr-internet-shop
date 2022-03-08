#include "Client.h"
int NumberOfClients;

Client AddNewClient(){
    std::string name{};
    std::int64_t phone_number{};
    std::string email{};
    std::string address{};
    std::cin.ignore(1000,'\n');
    std::cout <<"Введите фамилию, имя и отчество--->";
    std::getline(std::cin, name);
    std::cout <<"Введите номер телефона--->";
    std::cin >> phone_number;
    std::cout <<"Введите e-mail адрес--->";
    std::cin >> email;
    std::cin.ignore(1000,'\n');
    std::cout <<"Введите фактический адрес--->";
    std::getline(std::cin, address);
    return Client(name, phone_number, email, address);
};
void ShowClientList(std::vector<Client>&ClientList){
    int64_t MaxNameLength{};
    int64_t MaxPhoneNumLength{11};
    int64_t MaxEmailLength{};
    int64_t MaxAddressLength{};
    for (int i{};i < NumberOfClients; i++){
        if(ClientList[i].getFullName().length() > MaxNameLength)
            MaxNameLength = ClientList[i].getFullName().length();
        if(ClientList[i].getEmail().length() > MaxEmailLength)
            MaxEmailLength = ClientList[i].getEmail().length();
        if(ClientList[i].getAddress().length() > MaxAddressLength)
            MaxAddressLength = ClientList[i].getAddress().length();
    }
    for (int j{}; j < NumberOfClients; j++)
        std::cout << '|' << std::setw(MaxNameLength) << std::left <<ClientList[j].getFullName()<<'|'<<std::setw(MaxPhoneNumLength)<<std::left<<ClientList[j].getPhoneNumber()
             <<'|'<<std::setw(MaxEmailLength)<<ClientList[j].getEmail()<<'|'<<std::setw(MaxAddressLength)<<ClientList[j].getAddress()<<std::endl;
};
int main()
{
    std::vector<Client> ClientList;
    std::cout << "Сколько ползователей хотите добавить?"<<std::endl;
    std::cin >> NumberOfClients;
    for(int i{}; i < NumberOfClients; i++){
        ClientList.push_back(AddNewClient());
    }
    ShowClientList(ClientList);
}

