#include <iostream>
#include <string>

class Stock {
    public:

      Stock(std::string& date, std::string& stock_name, double price)
           : date_{date}, stock_name_{stock_name}, price_{price} { }

      std::string GetDate() { return date_ ;};

      std::string GetStockName() { return stock_name_ ;};

      double GetPrice() { return price_ ;};
    
    private:

      std::string date_;
      std::string stock_name_;
      double price_;

};