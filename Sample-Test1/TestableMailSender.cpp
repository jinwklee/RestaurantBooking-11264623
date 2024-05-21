#include <iostream>
#include "pch.h"
#include "../RestaurantBooking/MailSender.cpp"

using namespace std;

class TestableMailSender : public MailSender {
public:
	void sendMail(Schedule* schedule) override {
		countSendMailMethodIsCalled++;
	}

	bool getCountSendMailMethodIsCalled() {
		return countSendMailMethodIsCalled;
	}

private:
	bool countSendMailMethodIsCalled = 0;
};