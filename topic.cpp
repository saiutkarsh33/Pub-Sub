#include "topic.h"
#include "subscriber.h" 
#include <iostream> 

Topic::Topic(int number) : id(number) {}

void Topic::add_subscriber(const std::shared_ptr<Subscriber>& s) {
    subscribers.insert(s); 
}

void Topic::remove_subscriber(const std::shared_ptr<Subscriber>& s) {
    subscribers.erase(s);
}

void Topic::add_message(const std::string& s) const {
    std::cout << "Topic " << id << " sending message: " << s << std::endl;
    for (const auto& sr : subscribers) {
        sr->receive_message(s);
    }
}


