#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
 
int main() {
int kidc, adc;
float admc, desc, room, tiptax, dep;
 
cout << "# of Adults" << endl;
cin >> adc;
cout << "# of Children" << endl;
cin >> kidc;
 
cout << "Adult Meal Price $" << endl;
cin >> admc;
float kidmc = admc*0.6;
cout << "Cost for Dessert $" << endl;
cin >> desc;
cout << "Room fee (No Room put 0)" << endl;
cin >> room;
cout << "Tip and Tax rate (as a decimal)" << endl;
cin >> tiptax;
cout << "Deposit Amount $" << endl;
cin >> dep;
cout << endl;
cout << setw(35) << "Codebusters Parties Plus" << endl;
cout << setw(29) << "Final Bill" << endl;
cout << endl;
cout << setw(35)<< "Number of Adults:   " << setw(15) << adc << endl;
cout << setw(35)<< "Number of Children:   " << setw(15) << kidc << endl;
cout << setw(35) << "Cost Per Adult:  $" << setw(15) << fixed << setprecision(2) << admc << endl;
cout << setw(35) << "Cost per Child:  $" << setw(15) << fixed << setprecision(2) << kidmc << endl;
cout << setw(35) << "Cost Per Dessert:  $" << setw(15) << fixed << setprecision(2) << desc << endl;
cout << setw(35) << "Room Fee:  $" << setw(15) << fixed << setprecision(2) << room << endl;
cout << setw(35) << "Tip and Tax Rate:   " << setw(15) << fixed << setprecision(2) << tiptax << endl;
cout << setw(50) << "---------" << endl;
float admt = admc*adc;
cout << setw(35) << "Total Cost for Adult Meals:  $" << setw(15) << fixed << setprecision(2) << admt << endl;
float kidmt = kidc*kidmc;
cout << setw(35) << "Total Cost for Child Meals:  $" << setw(15) << fixed << setprecision(2) << kidmt << endl;
float destot = desc*(adc+kidc);
cout << setw(35) << "Total Dessert Cost:  $" << setw(15) << fixed << setprecision(2) << destot << endl;
float foodtot = destot+admt+kidmt;
cout << setw(35) << "Total Meal Cost:  $" << setw(15) << fixed << setprecision(2) << foodtot << endl;
float tiptaxtot = foodtot*tiptax;
cout << setw(35) << "Tip and Tax Amount:  $" << setw(15) << fixed << setprecision(2) << tiptaxtot << endl;
cout << setw(35) << "Room Cost:  $" << setw(15) << fixed << setprecision(2) << room << endl;
cout << setw(50) << "---------" << endl;
float totalcost = foodtot+tiptaxtot+room;
cout << setw(35) << "Total:  $" << setw(15) << fixed << setprecision(2) << totalcost << endl;
cout << setw(35) << "Deposit Amount:  $" << setw(15) << fixed << setprecision(2) << dep << endl;
cout << setw(50) << "---------" << endl;
float bal = totalcost-dep;
cout << setw(35) << "Balance Due:  $" << setw(15) << fixed << setprecision(2) << bal << endl;
return 0;
}
