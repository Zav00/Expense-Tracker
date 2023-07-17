#ifndef EXPENSE_TRACKER_EXPENSETRACKER_H
#define EXPENSE_TRACKER_EXPENSETRACKER_H
#include "Expense.h"
using namespace  std;
class ExpenseTracker {
private:
    vector<Expense> expenses;

public:
    void addExpense(const string& category, double amount, const string& description, const string& dateTime) {
        Expense expense(category, amount, description, dateTime);
        expenses.push_back(expense);
    }

    void printAllExpenses() const {
        cout << "Expense List:\n";
        for (const Expense& expense : expenses) {
            cout << "Category: " << expense.getCategory() << endl;
            cout << "Amount: $" << expense.getAmount() << endl;
            cout << "Description: " << expense.getDescription() << endl;
            cout << "Date/Time: " << expense.getDateTime() << endl;
            cout << endl;
        }
    }

    void generateCategorySummaries() const {
        cout << "Category Summaries:\n";
        vector<string> categories;
        for (const Expense& expense : expenses) {
            if (find(categories.begin(), categories.end(), expense.getCategory()) == categories.end()) {
                categories.push_back(expense.getCategory());
            }
        }
        for (const string& category : categories) {
            double totalAmount = 0.0;
            for (const Expense& expense : expenses) {
                if (expense.getCategory() == category) {
                    totalAmount += expense.getAmount();
                }
            }
            cout << "Category: " << category << endl;
            cout << "Total Amount: $" << totalAmount << endl;
            cout << endl;
        }
    }

    void generateWeeklyReport() const {
        cout << "Weekly Report:\n";
        cout << "=========================\n";
        for (const Expense& expense : expenses) {
            cout << "Category: " << expense.getCategory() << endl;
            cout << "Amount: $" << expense.getAmount() << endl;
            cout << "Description: " << expense.getDescription() << endl;
            cout << "Date/Time: " << expense.getDateTime() << endl;
            cout << endl;
        }
    }

    void generateMonthlyReport() const {
        cout << "Monthly Report:\n";
        cout << "=========================\n";
        for (const Expense& expense : expenses) {
            cout << "Category: " << expense.getCategory() << endl;
            cout << "Amount: $" << expense.getAmount() << endl;
            cout << "Description: " << expense.getDescription() << endl;
            cout << "Date/Time: " << expense.getDateTime() << endl;
            cout << endl;
        }
    }

    void saveReportsToFile() const {
        ofstream file("expense_reports.txt");
        if (file.is_open()) {
            file << "Weekly Report:\n";
            file << "=========================\n";
            for (const Expense& expense : expenses) {
                file << "Category: " << expense.getCategory() << endl;
                file << "Amount: $" << expense.getAmount() << endl;
                file << "Description: " << expense.getDescription() << endl;
                file << "Date/Time: " << expense.getDateTime() << endl;
                file << endl;
            }
            file.close();
        }
    }
};
#endif //EXPENSE_TRACKER_EXPENSETRACKER_H
