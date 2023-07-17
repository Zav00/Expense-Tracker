#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>
#include "Expense.h"
#include "ExpenseTracker.h"

using namespace std;



int main() {
    ExpenseTracker expenseTracker;

    // Add sample expenses
    expenseTracker.addExpense("Food", 20.5, "Lunch", "2023-07-01 12:30");
    expenseTracker.addExpense("Transportation", 15.0, "Bus fare", "2023-07-02 08:45");
    expenseTracker.addExpense("Shopping", 50.75, "Clothes", "2023-07-02 15:20");
    expenseTracker.addExpense("Food", 12.75, "Dinner", "2023-07-03 19:00");
    expenseTracker.addExpense("Utilities", 30.0, "Electricity bill", "2023-07-04 10:15");

    // Print all expenses
    expenseTracker.printAllExpenses();

    // Generate category summaries
    expenseTracker.generateCategorySummaries();

    // Generate weekly report
    expenseTracker.generateWeeklyReport();

    // Generate monthly report
    expenseTracker.generateMonthlyReport();

    // Save reports to file
    expenseTracker.saveReportsToFile();

    return 0;
}