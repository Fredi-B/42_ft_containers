#include "./tests.hpp"          // test functions and colors definitions
#include "../inc/utility.hpp"   // std::pair, std::make_pair
#include <string>               // std::string
#include <iostream>             // std::cout


int utility_test()
{
  std::cout << std::endl << CYAN"-------- Utility tests --------" << NC << std::endl;

  /* pair::pair example from cplusplus.com */
  std::cout << CYAN_B"------- test cplusplus.com -------" << NC << std::endl;

  ft::pair <std::string,double> product1;                     // default constructor
  ft::pair <std::string,double> product2 ("tomatoes",2.30);   // value init
  ft::pair <std::string,double> product3 (product2);          // copy constructor

  product1 = ft::make_pair(std::string("lightbulbs"),0.99);   // using make_pair (move)

  product2.first = "shoes";                  // the type of first is string
  product2.second = 39.90;                   // the type of second is double

  std::cout << "The price of " << product1.first << " is $" << product1.second << '\n';
  std::cout << "The price of " << product2.first << " is $" << product2.second << '\n';
  std::cout << "The price of " << product3.first << " is $" << product3.second << '\n';

  /* test relational operators */
  std::cout << std::endl << CYAN_B"---- test relational operators ----" << NC << std::endl;

  ft::pair <int,int> ten_twenty_pair (10,20);
  ft::pair <int,int> ten_twenty_pair2 (10,20);
  ft::pair <int,int> five_ten_pair (5,10);

  std::cout << "ten_twenty_pair equals five_ten_pair                        : " << (ten_twenty_pair == five_ten_pair) << std::endl;
  std::cout << "ten_twenty_pair equals ten_twenty_pair2                     : " << (ten_twenty_pair == ten_twenty_pair2) << std::endl;
  std::cout << "ten_twenty_pair equals not ten_twenty_pair2                 : " << (ten_twenty_pair != ten_twenty_pair2) << std::endl;
  std::cout << "ten_twenty_pair equals not five_ten_pair                    : " << (ten_twenty_pair != five_ten_pair) << std::endl;
  std::cout << "ten_twenty_pair is less than five_ten_pair                  : " << (ten_twenty_pair < five_ten_pair) << std::endl;
  std::cout << "five_ten_pair is less than ten_twenty_pair                  : " << (five_ten_pair < ten_twenty_pair) << std::endl;
  std::cout << "ten_twenty_pair is less than or equal to five_ten_pair      : " << (ten_twenty_pair <= five_ten_pair) << std::endl;
  std::cout << "ten_twenty_pair is less than or equal to ten_twenty_pair2   : " << (ten_twenty_pair <= ten_twenty_pair2) << std::endl;
  std::cout << "ten_twenty_pair is greater than ten_twenty_pair2            : " << (ten_twenty_pair > ten_twenty_pair2) << std::endl;
  std::cout << "ten_twenty_pair is greater than five_ten_pair               : " << (ten_twenty_pair > five_ten_pair) << std::endl;
  std::cout << "five_ten_pair is greater than or equal to ten_twenty_pair   : " << (five_ten_pair >= ten_twenty_pair) << std::endl;
  std::cout << "ten_twenty_pair is greater than or equal to ten_twenty_pair2: " << (ten_twenty_pair >= ten_twenty_pair2) << std::endl;
  return 0;
}
