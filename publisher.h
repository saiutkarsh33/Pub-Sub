#ifndef Pubs_H
#define Pubs_H

#include <unordered_set>
#include <stack>
#include <string>
#include <memory>

class Topic;

class Publisher {
private:
    int id;

public:

    Publisher(int number);
    
    void publish(const std::string& s, const Topic& t) const;
};

#endif
