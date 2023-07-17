#ifndef EXPENSE_TRACKER_EXPENSE_H
#define EXPENSE_TRACKER_EXPENSE_H
#include <string>
using namespace std;
class Expense {
private:
    string category;
    double amount;
    string description;
    string dateTime;

public:
    Expense(const string& category, double amount, const string& description, const string& dateTime)
            : category(category), amount(amount), description(description), dateTime(dateTime) {}

    const string& getCategory() const {
        return category;
    }

    double getAmount() const {
        return amount;
    }

    const string& getDescription() const {
        return description;
    }

    const string& getDateTime() const {
        return dateTime;
    }
};

#endif //EXPENSE_TRACKER_EXPENSE_H
