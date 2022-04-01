// Copyright (c) 2021 Ferdous Sediqi All rights reserved.
// Created by: Ferdous Sediqi
// Created on: March. 29, 2022
//  This program asks the user for the number of the month
// then display the month name if the input number
// is 0 or more than 12 display error.


#include <iostream>


int main() {
  // variable for month
  int user_month;
  // ask for user input
  std::cout << "Enter the number of the month ";
  std::cin >> user_month;

  // check the month number
switch(user_month) {
  case 1 : 
  std::cout << user_month <<" Represent January.";
  break ;
  case 2: 
  std::cout << user_month <<" Represent Februray.";
  break;
  case 3: 
  std::cout << user_month <<" Represent March.";
  break;
  case 4: 
  std::cout << user_month <<" Represent April.";
  break;
  case 5: 
  std::cout << user_month <<" Represent May.";
  break;
  case 6: 
  std::cout << user_month <<" Represent June.";
  break;
  case 7: 
  std::cout << user_month <<" Represent July.";
  break;
  case 8: 
  std::cout << user_month <<" Represent Augast.";
  break;
  case 9: 
  std::cout << user_month <<" Represent September.";
  break;
  case 10: 
  std::cout << user_month <<" Represent October.";
  break;
  case 11: 
  std::cout << user_month <<" Represent November.";
  break;
  case 12: 
  std::cout << user_month <<" Represent December.";
  break;
  default:
  std::cout << "Error! " << user_month << " does not represent a month";
  
  }
}