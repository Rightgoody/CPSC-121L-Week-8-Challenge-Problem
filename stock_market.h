#include "stock.h"
#include <vector>

class Stock_Market {
    public:
      
      Stock_Market() {}
      
      void AddStock(std::string& name, std::string& date, double price);
      
      int TotalSpecificStockTransactions(std::string& date, std::string& name);

      int TotalStockTransactions(std::string& date);

      std::string HighestStockPrice(std::string& name);

    private:

      std::vector <Stock> stocks_ {};

};
