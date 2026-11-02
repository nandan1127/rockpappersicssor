#include <iostream>
#include <iomanip>
double showbalance(double balance);
double deposite();
double withdrawl(double balance);
int main()
{

   double balance = 0;
   int choice;
   do
   {
      std::cout << "****************\n";
      std::cout << "enter your choice: \n";
      std::cout << "*****************\n";
      std::cout << "1. showbalance:\n";
      std::cout << "2. deposite:\n";
      std::cout << "3. withdrawl:\n";
      std::cout << "4. exit\n";
      std::cin >> choice;
      std::cin.clear();
      fflush(stdin);
      switch (choice)
      {
      case 1:
         showbalance(balance);
         break;
      case 2:
         balance += deposite();
         showbalance(balance);
         break;
      case 3:
         balance -= withdrawl(balance);
         showbalance(balance);
         break;
      case 4:
         std::cout << "thank you for visting!!";
         break;
      default:
         std::cout << "invalid choice!!";
         break;
      }
   } while (choice != 4);
}
double showbalance(double balance)
{
   std::cout << "your balance amount:" << balance << "$\n";
   return 0;
}
double deposite()
{
   double amount = 0;
   std::cout << "enter the deposite amount:";
   std::cin >> amount;
   if (amount < 0)
   {
      std::cout << "enter a valid amount to deposite";
   }
   else
   {
      return amount;
   }
}
double withdrawl(double balance)
{
   double amount = 0;
   std::cout << "entre your withdrwal amount:";
   std::cin >> amount;
   if (amount > balance)
   {
      std::cout << "insufficent balance!!";
   }
   else
   {
      return amount;
   }
}