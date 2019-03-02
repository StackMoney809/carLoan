/************************************************************/
/* Author: Rene Morales*/
/* Creation Date: February 16, 2019 */
/* Due Date: February 19, 2019 */
/* Course: CSC135 030 */
/* Professor Name: Dr. Manakkad */
/* Assignment: #1 */
/* Filename: carLoan.cpp.cpp */
/* Purpose: This program will show the user how much they owed for their car loan and the total interest*/

/************************************************************/

#include <iostream> // pre processor
#include <iomanip> // for fixed, setprecision, setw
#include <string> // to store the character vehicle
#include <cmath> // allows the pow function to be used



using namespace std;

//declare variables

string vehicle; //type of vehicle
int num_years; // define number of years
int num_payments_years = 12; // define the number of payments per year
double purchase_price; // price of the vehicle
double down_payment; // down payment of the vehicle
double annual_interest; //  annual intereset
double amount_financed; // amount to be financed
double monthly_payment; // monthly payment
double num_payments; // number of payments
double totalAmount; // total amount owed
float interest_rate; // interest rate;


int main() {

    // Prompt and read the name of the vehicle as an input from the user
    cout << "Please enter the type of vehicle: ";
    getline (cin, vehicle);

    // Prompt and read the purchase price of the car as an input from the user
    cout << "Please enter the purchase price of the car: ";
    cin >> purchase_price;

    // Prompt and read the amount of the down payment as an input from the user
    cout << "Please enter the amount of your down payment: ";
    cin >> down_payment;

    // Prompt and read the num of years as an input from the user
    cout << "Please enter the number of years to pay off the car: ";
    cin >> num_years;

    // Prompt and read the annual interest rate as an input from the user
    cout << "Please enter the annual Interest rate: ";
    cin >> annual_interest;

    cout << endl;

    cout << "Monthly Car Loan Payment Calculation" << endl;
    cout << "====================================" << endl;
    cout << endl;
    cout << endl;

    // display the type of vehicle
    cout << "Type of Vehicle: " << setw(28) << vehicle << endl;
    cout << endl;
    cout << endl;

    // Display the purchase price
    cout << "Purchase Price: " << setw(30) << fixed << setprecision(2) << purchase_price << endl;

    // Display the down Payment
    cout << "Down Payments: " << setw(31) << setprecision(2) << down_payment << endl;

      // define the value for the amount to be financed
    amount_financed =  (purchase_price - down_payment);

    // display the amount financed
    cout << "Amount Financed: " << setw(29) << setprecision(2) << amount_financed << endl;
    // display number of years
    cout << "Length of Loan: " << setw(24) << setprecision(0)<< num_years << " years" << endl;
    // display the anual insterest
    cout << "Anual Interest Rate: " << setw(24) << setprecision(2) << annual_interest << '%' << endl;
    annual_interest = (annual_interest / 100);
    cout << endl;
    cout << endl;


    // Calculate the monthly payment
    monthly_payment = (amount_financed * (annual_interest / num_payments_years))
    / ( 1 - pow(1 + annual_interest / num_payments_years, (- num_payments_years * num_years)));

    cout << "Monthly Payment: " << setw(23) << fixed <<  setprecision(2) << '$' << monthly_payment << endl;

    // calculate the number of payments
    num_payments = (num_payments_years * num_years);

    cout << "Number of Payments: " << setw(26) << setprecision(0) << num_payments << endl;
    cout << endl;
    cout << endl;

    // Calculate the total amount owed
    totalAmount = num_payments * monthly_payment;
    cout << "Total Amount Owed: " << setw(19) << setprecision(2) << '$' << totalAmount << endl;


     // Calculate the total interest
     interest_rate = (monthly_payment * num_payments - amount_financed );
    cout << "Total Interest Paids: " << setw(17) << setprecision(2) << '$' << interest_rate << endl;


    return 0;
}
