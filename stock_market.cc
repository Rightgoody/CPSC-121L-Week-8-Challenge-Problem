#include "stock_market.h"

void Stock_Market::AddStock(std::string& name, std::string& date, double price){
    Stock NewStock(name, date, price);
    stocks_.push_back(NewStock);
}

int Stock_Market::TotalSpecificStockTransactions(std::string& date, std::string& name){
    int stock_transactions{0};
    for (Stock transaction : stock_) {
        if (date == transaction.GetDate() && name == transaction.GetName() ) {
            stock_transactions += 1;
        }

    }
    return stock_transactions;
}

int Stock_Market::TotalStockTransactions(std::string& date){
    int total_transactions{0};
    for (Stock transaction : stock_) {
        if (date == transaction.GetDate() ) {
            total_transactions += 1;
        }
    }
    return total_transactions;
}

std::string Stock_Market::HighestStockPrice(std::string& name) {
    // Step 1: Create Variables to hold data
    double current_price{0.0};
    int index_location{0};
    // Step 2: For Loop to iterate over the stock_
    for ( int i = 0; i < stocks_.size(); i++) {
        // Step 3: If the date matches, and the price of the stock on the day is bigger, update the date (index) and update the price
        if (name == stocks_.at(i).GetName() && current_price < stocks_.at(i).GetPrice() ) {
            current_price = stocks_at(i).GetPrice();
            index_location = i;
        }
    }
    // Step 4: exit the for loop and return the date (index) of the stock
    return stocks_.at(index_location).GetDate;
}
