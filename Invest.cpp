//William Neal

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    //Declare variables for the input
    float initInvest, monDepos, AnulIntv, months, years;
    //Declare variables for total amount over time, interest, and year end interest
    float totalAmOT, intAmt, yearTotInt;


    //Display to da user
    cout << "***************Enjoy this App*****************\n";
    cout << "**************** Data Input ******************\n";
    cout << "Initial Investment Amount: \n";
    cout << "Monthly Deposit: \n";
    cout << "Annual Interest: \n";
    cout << "Number of years: \n";

    //Wait (hammer time) - missing thread.sleep
    system("PAUSE");

    //Take that delicious data 
    cout << "*********** AirGead Banking - Where Capitalism Rules! ***********\n";
    cout << "****************** Give me all your data :) *********************\n";
    cout << "************************* Data Input ****************************\n";
    cout << "Initial Investment Amount: $";
    cin >> initInvest;
    cout << "Monthly Deposit: $";
    cin >> monDepos;
    cout << "Annual Interest: %";
    cin >> AnulIntv;
    cout << "Number of years: ";
    cin >> years;
    months = years * 12;

    //Wait a min....
    system("PAUSE");

    //Set total amount to initial investment 
    totalAmOT = initInvest;

    //Year data without monthly deposits
    cout << "\nBalance and Interest Without Additional Monthly Deposits\n";
    cout << "==============================================================\n";
    cout << "Year\t\tYear End Balance\tYear End Earned Interest\n";
    cout << "--------------------------------------------------------------\n";


    for (int i = 0; i < years; i++) {

        //Calc yearly interest
        intAmt = (totalAmOT) * ((AnulIntv / 100));

        //Calc year end total
        totalAmOT = totalAmOT + intAmt;

        //Print results to table showcasing only 2 decimal points
        cout << (i + 1) << "\t\t$" << fixed << setprecision(2) << totalAmOT << "\t\t\t$" << intAmt << "\n";

    }

    //Set total amount over time to initial investment to be updated
    totalAmOT = initInvest;

    //Display year data with monthly deposits
    cout << "\n\nBalance and Interest With Additional Monthly Deposits\n";
    cout << "==============================================================\n";
    cout << "Year\t\tYear End Balance\tYear End Earned Interest\n";
    cout << "--------------------------------------------------------------\n";

    for (int i = 0; i < years; i++) {

        //Yearly interest to zero at the start of the year
        yearTotInt = 0;

        for (int j = 0; j < 12; j++) {

            //Calc monthly interest
            intAmt = (totalAmOT + monDepos) * ((AnulIntv / 100) / 12);

            //Calc month end interest
            yearTotInt = yearTotInt + intAmt;

            //Calc month end total
            totalAmOT = totalAmOT + monDepos + intAmt;

        }

        //Print results 
        cout << (i + 1) << "\t\t$" << fixed << setprecision(2) << totalAmOT << "\t\t\t$" << yearTotInt << "\n";


    }

    return 0;
}


/* 
Pseudocode

Declare variables for the input
Declare variables for the output
Ask the user for the data




*/