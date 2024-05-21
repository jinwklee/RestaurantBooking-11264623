#include <iostream>
#include "pch.h"
#include "../RestaurantBooking/SmsSender.cpp"

using namespace std;

class TestableSmsSender : public SmsSender {
public:
	void send(Schedule* schedule) override {
		cout << "테스트용 SmsSender Class의 send 메서드 실행됨\n";
		sendMethodIsCalled = true;
	}

	bool isSendMethodIsCalled() {
		return sendMethodIsCalled;
	}

private:
	bool sendMethodIsCalled;
};