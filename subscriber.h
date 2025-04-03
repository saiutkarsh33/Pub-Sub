#ifndef Subs_H
#define Subs_H


#include <string>


class Subscriber {

    private:
      int id;
      std::string latest_message;
      

    public:
      // Normal constructor
      Subscriber(int number);
    
      void receive_message(const std::string& s);

};

#endif