//Made by Rafael Pompa
//Created on 9/26
//this program is used to show user inputs on a resturant menu.

#include <iostream>
#include<cmath>
using namespace std;

float SmallFrenchFries =3.49;
float ChickenMcNuggets =7.19; 
float BigMac =8.09;
float McChicken =4.10;
float OreoMcFlurry =3.19;
float Icedlatte =4.29;


void menu(){ //function declaration with function name menu.
//this function demostrate the output of a menu and user inputs.
//function body
  cout<<"Mcdonalds Menu"<<"\n";
  cout<<"1.  Small French Fries .................$3.49"<<"\n";
  cout<<"2.  10 pc. Chicken McNuggets............$7.19"<<"\n";
  cout<<"3.  Big Mac.............................$8.09"<<"\n";
  cout<<"4.  Mc Chicken..........................$4.10"<<"\n";
  cout<<"5.  OREO McFlurry.......................$3.19"<<"\n";
  cout<<"6.  Iced Latte..........................$4.29"<<"\n";
}

int main() {  
  string choice = "";

  cout<<"Welcome to the Mcdonalds! what would you like to get?"<<"\n";
  menu(); //function call
  cout<<"Please enter a item from the menu: ";
  //you have to put the words together with no spaces otherwise it wont show the whole thing
  cin>>choice;

  cout<<"Alright, you order is 1 "<< choice << ". You can now pull up to the front now and pay."<<"\n";
}