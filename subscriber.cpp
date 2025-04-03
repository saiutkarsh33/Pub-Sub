#include "subscriber.h" 
#include <iostream>

Subscriber::Subscriber(int number) : id(number), latest_message("") {}

void Subscriber::receive_message(const std::string& s) {
    latest_message = s;
    std::cout << "Subscriber " << id << " received message: " << s << std::endl;
}
