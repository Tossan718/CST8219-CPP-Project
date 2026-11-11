#include "User.h"

#include <memory>
#include <iostream>
#include <string>

// Default Constructor
User::User() : userId(0), firstName("N/A"), lastName("N/A"), email(""), password(""), phoneNumber(0) {};

// Copy Constructor
User::User(int id, std::string firstName, std::string lastName, std::string email, std::string password, int phoneNumber)
	: userId(id), firstName(firstName), lastName(lastName), email(email), password(password), phoneNumber(phoneNumber) {
}

// -- User getters -- 
int User::getUserId() const {
	return userId;
}

int User::getFirstName() const {
	return firstName;
}

int User::getLastName() const {
	return lastName;
}

int User::getEmail() const {
	return email;
}

int User::getPassword() const {
	return password;
}

int User::getPhoneNumber() const {
	return phoneNumber;
}

// -- User setters --
void User::setFirstName(const std::string& firstName) {
	this->firstName = firstName;
}

void User::setLastName(const std::string& lastName) {
	this->lastName = lastName;
}

void User::setEmail(const std::string& email) {
	this->email = email;
}

void User::setPassword(const std::string& password) {
	this->password = password;
}

void User::setPhoneNumber(int phoneNumber) {
	this->phoneNumber = phoneNumber;
}

// Display User Information
void User::displayInfo() const
{
	std::cout << "User ID: " << userId << '\n';
	std::cout << "Name: "
		<< firstName << " "
		<< lastName << '\n';
	std::cout << "Email: " << email << '\n';
	std::cout << "Phone: " << phoneNumber << '\n';
}








