/***************************************************************
* Author      : Alexander Haislip	
* Date : June, 2 2020
* Email : haislipalexander@gmail.com

The Uline company ships out a bundle of large heavy cardboard boxes (U-1234) that they 
stick onto a moving cart as part of a sale at their inventory factory.   
Each U-1234 unit sells for $19.97 with of sales tax of 5% and costs $2.34 to ship 
each unit.

The cart weighs 210 kilograms on its on.   Each U-1234 unit weighs 17 kilogram.    
Prompt the user for the weight of the loaded moving cart and display to the user the 
number of cardboard bundles that are on the cart.   

Truncate the weight so that if the user enters 228 then the program should say that 
it only has 1 10-pack box on the cart.

Once you have dispalyed the number of units also print out a receipt with the number 
of units sold, the amount of the sales price, the cost to ship, the tax on the sale 
and the final grand price of the sale.  So your receipt should look like:

Sale price of 10 units:    $199.70
Sales tax (5%):                  9.99

Shipping Cost:                  23.40                        

Final total:                     $233.09
***************************************************************/

#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>      // std::setprecision

using namespace std;

int main(){

    string productId = "U-1234";
    string itemMeasurement = "Kg";
    double unitCost = 19.97;
    double shippingCost = 2.34;
    double salesTaxPercent = .05;
    double salesTaxTotal = unitCost * salesTaxPercent;
    
    int itemWeight = 17;
    int cartWeight = 210;
    int orderWeight;
    int numOfItemsInOrder;

    cout << "What is the total weight of your current order? ";
    cin >> orderWeight;
    numOfItemsInOrder = (orderWeight - cartWeight) / itemWeight;
    //getline (cin, orderWeight, '\n');

    cout << "You have " << numOfItemsInOrder << " items, with a final weight of " << orderWeight << itemMeasurement << ".\n";

    double salesPrice = unitCost * numOfItemsInOrder;

     //print out item recipt here...
    cout << "Sale price of " << numOfItemsInOrder << " units.\t\t" << salesPrice << "\n";
    cout << "Sales tax(5%):\t\t" << setprecision(2) << salesTaxTotal << "\n \n";

    double orderShippingCost = numOfItemsInOrder * 2.34;

    cout << "Shipping cost:\t\t" << shippingCost << "\n\n";

    double total = salesPrice + orderShippingCost + salesTaxTotal;

    cout << "Final total:\t\t" << total << "\n\n";



    //print out item recipt here...

    return 0;    
}