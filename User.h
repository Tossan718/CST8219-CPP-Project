// Hotel & Flight Booking System.h : Include file for standard system include files,
// or project specific include files.

#pragma once

#include  <string>
#include <iostream>

#ifndef USER_H
#define USER_H	


class User {
private: 
	int  userId;
	std::string firstName;
	std::string lastName;
	std::string email;
	std::string password;
	int phoneNumber;
	std::vector<std::unique_ptr<Booking>> bookings;


public:
	// Default Constructor
	User();
	// Parameterized Constructor
	User(int id, std::string firstName, std::string lastName, std::string email, std::string password, int phoneNumber);
	// Copy Constructor 
	User(const User& other);
	// Move Constructor
	User(User&& other) noexcept;
	// Destructor
	virtual ~User() = default;

	// Getters 
	int getUserId() const;
	std::string getFirstName() const;
	std::string getLastName() const;
	std::string getEmail() const;
	std::string getPassword() const;
	int getPhoneNumber() const;

	// Setters
	void setFirstName(const std::string& firstName);
	void setLastName(const std::string& lastName);
	void setEmail(const std::string& email);
	void setPassword(const std::string& password);
	void setPhoneNumber(int phoneNumber);

	virtual void displayUserInfo() const;

};









#endif // !USER_H

// TODO: Reference additional headers your program requires here.
