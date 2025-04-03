#include "publisher.h"
#include "topic.h"
#include <iostream>   

Publisher::Publisher(int number) : id(number) {}


void Publisher::publish(const std::string& s, const Topic& t) const {
    std::cout << "SPublisher " << id << " sent message: " << s << std::endl;
    t.add_message(s);
}
