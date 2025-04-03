#ifndef Topic_H
#define Topic_H

#include <unordered_set>
#include <stack>
#include <string>
#include <memory>

class Subscriber;

class Topic {
private:
    std::unordered_set<std::shared_ptr<Subscriber>> subscribers;
    int id;

public:

    Topic(int number);
    
    void add_subscriber(const std::shared_ptr<Subscriber>& s);
    void remove_subscriber(const std::shared_ptr<Subscriber>& s);
    void add_message(const std::string& s) const;
};

#endif
