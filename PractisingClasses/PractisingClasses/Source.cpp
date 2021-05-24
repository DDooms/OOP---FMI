#include <iostream>
#include <cstring>

//class BankAccount {
//private:
//	char* clientName;
//	char* IBAN;
//	double money;
//public:
//	BankAccount() {
//		clientName = new char[20];
//		IBAN = new char[10];
//		strcpy_s(clientName, 6, "Empty");
//		strcpy_s(IBAN, 6, "Empty");
//		double money = 0.0;
//	}
//	BankAccount(const char* _clientName, const char* _IBAN, double _money) {
//		clientName = new char[strlen(clientName) + 1];
//		IBAN = new char[strlen(IBAN) + 1];
//		strcpy_s(clientName, strlen(_clientName) + 1, _clientName);
//		strcpy_s(IBAN, strlen(_IBAN) + 1, _IBAN);
//		this->money = _money;
//	}
//	
//	inline const char* getClientName() const { return this->clientName; };
//	inline const char* getIBAN() const { return this->IBAN; };
//	inline const double& getMoney() const { return this->money; };
//
//	void setClientName(const char* _clientName) {
//		strcpy_s(clientName, strlen(_clientName) + 1, _clientName);
//	}
//	void setIBAN(const char* _IBAN) {
//		strcpy_s(IBAN, strlen(_IBAN) + 1, _IBAN);
//	}
//	void setMoney(const double _money) {
//		this->money = _money;
//	}
//	void printBankAccount() const {
//		std::cout << clientName << "\n";
//		std::cout << IBAN << "\n";
//		std::cout << money << "\n";
//	}
//	void withdrawCash(double _money) {
//		if (_money > money) {
//			std::cout << "Not enough cash!\n";
//			return;
//		}
//		money -= _money;
//	}
//	void depositCash(double _money) {
//		money += _money;
//	}
//};

class Ticket {
private:
	char* departingPlace;
	char* arrivalPlace;
	int dateOfPublishment;
	double price;
public:
	Ticket() {
		departingPlace = new char[30];
		arrivalPlace = new char[30];
		strcpy_s(departingPlace, 6, "Empty");
		strcpy_s(arrivalPlace, 6, "Empty");
		int dateOfPublishment = 0;
		double price = 0.0;
	}
	Ticket(const char* _departingPlace, const char* _arrivalPlace, int _dateOfPublishment, double _price) {
		departingPlace = new char[strlen(departingPlace) + 1];
		strcpy_s(departingPlace, strlen(_departingPlace) + 1, _departingPlace);
		arrivalPlace = new char[strlen(arrivalPlace) + 1];
		strcpy_s(arrivalPlace, strlen(_arrivalPlace) + 1, _arrivalPlace);
		dateOfPublishment = _dateOfPublishment;
		price = _price;
	}
	inline const char* getDepartingPlace() const { return this->departingPlace; };
	inline const char* getArrivalPlace() const { return this->arrivalPlace; };
	inline const int getDateOfPublishment() const { return this->dateOfPublishment; };
	inline const double getPrice() const { return this->price; };

	void setDepartingPlace(const char* _departingPlace) {
		strcpy_s(departingPlace, strlen(_departingPlace) + 1, _departingPlace);
	}
	void setArrivalPlace(const char* _arrivalPlace) {
		strcpy_s(arrivalPlace, strlen(_arrivalPlace) + 1, _arrivalPlace);
	}
	void setDateOfPublishment(const int _dateOfPublishment) {
		this->dateOfPublishment = _dateOfPublishment;
	}
	void setPrice(const double _price) {
		this->price = _price;
	}

	void print() {
		std::cout << departingPlace << "\n";
		std::cout << arrivalPlace << "\n";
		std::cout << dateOfPublishment << "\n";
		std::cout << price << "\n";
	}

	void rightNames() {
		for (size_t i = 0; i < strlen(departingPlace)+1; i++)
		{
			if (i == 0)
			{
				if (departingPlace[i] >= 'a' && departingPlace[i] <= 'z')
				{
					departingPlace[i] -= 26;
				}
			}
			
			else if (departingPlace[i] >='A' && departingPlace[i] <= 'Z')
			{
				departingPlace[i] += 26;
			}
		}
		for (size_t i = 0; i < strlen(arrivalPlace) + 1; i++)
		{
			if (i == 0)
			{
				if (arrivalPlace[i] >= 'a' && arrivalPlace[i] <= 'z')
				{
					arrivalPlace[i] -= 26;
				}
			}

			else if (arrivalPlace[i] >= 'A' && arrivalPlace[i] <= 'Z')
			{
				arrivalPlace[i] += 26;
			}
		}
	}
};


class CashDesk {
private:
	Ticket ticket_list[30];
	int earned_money;
	int available_tickets;
public:
	CashDesk() {
		this->earned_money = 0;
		this->available_tickets = 0;
	}
	CashDesk(int _earned_money, int _available_tickets) {
		this->earned_money = _earned_money;
		this->available_tickets = _available_tickets;
	}
	inline const int& getEarnedMoney() const { return earned_money; };
	inline const int& getAvailableTickets() const { return available_tickets; };
	inline const Ticket* setTickets() const { return ticket_list; };

	void setAvailableTickets(int _available_tickets) {
		this->available_tickets = _available_tickets;
	}
	void setEarnedMoney(int _earned_money) {
		this->earned_money = _earned_money;
	}
	void setTickets(Ticket* _ticket_list) {
		for (int i = 0; i < available_tickets; ++i)
		{
			this->ticket_list[i] = _ticket_list[i];
		}
	}
};