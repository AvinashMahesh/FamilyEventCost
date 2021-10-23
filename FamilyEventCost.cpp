#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
 
int main() {
int kidc, adc, mealtype;
float admc, dep, kidmc;
char room;
 
cout << "# of Adults" << endl;
cin >> adc;
cout << "# of Children" << endl;
cin >> kidc;
 
cout << "Choose a Meal" << endl;
cout << "(1) Deluxe Meal $15.80 for Adults and $9.48 for Children" << endl;
cout << "(2) Standard Meal $11.75 for Adults and $7.05 for Children" << endl;
cin >> mealtype;
 
if (mealtype==1)
{
  admc=15.8;
  kidmc=9.48;
}
else
{
  admc=11.75;
  kidmc=7.05;
}
 
float desc = 0;
float roomcost;
cout << "Pick a Room (A $55, B $75, C $85, D $100, or E $130) (Enter lowercase letter)" << endl;
cin >> room;
switch (room)
{
 char a, b, c, d, e;
  case 'a': roomcost=55;
break;
case 'b':  roomcost=75;
break;
case 'c':  roomcost=85;
break;
case 'd':  roomcost=100;
break;
case 'e':  roomcost=130;
break;
}
 
char charge;
cout << "Is it during Friday, Saturday, or Sunday (y or n)" << endl;
cin >> charge;
 
float tiptax = 0.18;
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
cout << setw(35) << "Room Fee:  $" << setw(15) << fixed << setprecision(2) << roomcost << endl;
cout << setw(35) << "Tip and Tax Rate:   " << setw(15) << fixed << setprecision(2) << tiptax << endl;
cout << setw(50) << "---------" << endl;
float admt = admc*adc;
cout << setw(35) << "Total Cost for Adult Meals:  $" << setw(15) << fixed << setprecision(2) << admt << endl;
float kidmt = kidc*kidmc;
cout << setw(35) << "Total Cost for Child Meals:  $" << setw(15) << fixed << setprecision(2) << kidmt << endl;
float destot = desc*(adc+kidc);
float foodtot = destot+admt+kidmt;
cout << setw(35) << "Total Meal Cost:  $" << setw(15) << fixed << setprecision(2) << foodtot << endl;
float tiptaxtot = foodtot*tiptax;
cout << setw(35) << "Tip and Tax Amount:  $" << setw(15) << fixed << setprecision(2) << tiptaxtot << endl;
cout << setw(35) << "Room Cost:  $" << setw(15) << fixed << setprecision(2) << roomcost << endl;
cout << setw(50) << "---------" << endl;
float totalcost = foodtot+tiptaxtot+roomcost;
cout << setw(35) << "Total:  $" << setw(15) << fixed << setprecision(2) << totalcost << endl;
 
float surcharge = totalcost*0.07;
if(charge=='y')
{
 cout << setw(35) << "Surcharge:  $" << setw(15) << fixed << setprecision(2) << surcharge << endl;
cout << setw(50) << "---------" << endl;
 totalcost=totalcost + surcharge;
 cout << setw(35) << "Total:  $" << setw(15) << fixed << setprecision(2) << totalcost << endl;
}
cout << setw(35) << "Deposit Amount:  $" << setw(15) << fixed << setprecision(2) << dep << endl;
cout << setw(50) << "---------" << endl;
float bal = totalcost-dep;
cout << setw(35) << "Balance Due:  $" << setw(15) << fixed << setprecision(2) << bal << endl;
cout << endl;
 
if(totalcost<100)
{
 cout << "If payment is made within 10 days, you will receive a 0.5% discount." << endl;
 float dis=totalcost - (totalcost*0.005)-dep;
 cout << "Your new total is $" << setprecision(2) << dis << endl;
}
 
if(totalcost>=100 && totalcost<200)
{
 cout << "If payment is made within 10 days, you will receive a 1.5% discount." << endl;
 float dis=totalcost - (totalcost*0.015)-dep;
 cout << "Your new total is $" << setprecision(2) << dis << endl;
}
 
if(totalcost>=200 && totalcost < 400)
{
 cout << "If payment is made within 10 days, you will receive a 3% discount." << endl;
 float dis=totalcost - (totalcost*0.03)-dep;
 cout << "Your new total is $" << setprecision(2) << dis << endl;
}
 
if(totalcost>=400 && totalcost < 800)
{
 cout << "If payment is made within 10 days, you will receive a 4% discount." << endl;
 float dis=totalcost - (totalcost*0.04)-dep;
 cout << "Your new total is $" << setprecision(2) << dis << endl;
}
 
if(totalcost>=800)
{
 cout << "If payment is made within 10 days, you will receive a 5% discount." << endl;
 float dis=totalcost - (totalcost*0.05) - dep;
 cout << "Your new total is $" << setprecision(2) << dis << endl;
}
 
return 0;
}
