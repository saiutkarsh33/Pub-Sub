#include "topic.h"   
#include "publisher.h"     
#include "subscriber.h"   

#include <memory>
#include <iostream>

int main() {
    Topic topic1(1);
    Topic topic2(2);

    Publisher publisher1(1);
    Publisher publisher2(2);

    auto subscriber1 = std::make_shared<Subscriber>(1);
    auto subscriber2 = std::make_shared<Subscriber>(2);

    topic1.add_subscriber(subscriber1);
    topic2.add_subscriber(subscriber2);

    publisher1.publish("Hello from Publisher 1!", topic1);

    publisher2.publish("Hello from Publisher 2!", topic2);

    return 0;
}
