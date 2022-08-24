/* 
	Student No : IM/2020/108
   	Student Name : Rankothge Pasindu Bhanuka
   	Assignment no : 1
	Due Date : 8/23
*/
#include <iostream>

using namespace std;

int main()
{
    cout << "------ Bhanuka's Balance Calculator ------\n";
    
    // Get userAmount
    cout << "your amount : ";
    int userAmount;
    cin >> userAmount;
    cout << "\n";
    
    //Get cash
    cout << "Enter cash : ";
    int userCash;
    cin >> userCash;
    cout << "\n";

    //Check the balance
    int userBalance = userCash - userAmount;
    cout << "Balance : " <<userBalance;
    cout << "\n-------------\n";
    
    // Note Count
    
    // 5000 Notes
    int fiveThousandCount = userBalance/5000;
    cout << "5000 : " << fiveThousandCount;
    cout << "\n";
    int afterFiveThousand = userBalance%5000;
  
    // 2000 Notes  
    int twoThousandCount = afterFiveThousand/2000;
    cout << "2000 : " << twoThousandCount;
    cout << "\n";
    int afterTwoThousand = afterFiveThousand%2000;
    
    // 1000 Notes
    int thousandCount = afterTwoThousand/1000;
    cout << "1000 : " << thousandCount;
    cout << "\n";
    int afterThousand = afterTwoThousand%1000;
 
    // 500 Notes   
    int FiveHundradCount = afterThousand/500;
    cout << "500 : " << FiveHundradCount;
    cout << "\n";
    int afterFiveHundrad = afterThousand%500;
    
    // 100 Notes
    int hundradCount = afterFiveHundrad/100;
    cout << "100 : " << hundradCount;
    cout << "\n";
    int afterHundrad = afterFiveHundrad%100;

    // 50 Notes    
    int fiftyCount = afterHundrad/50;
    cout << "50 : " << fiftyCount;
    cout <<  "\n";
    int afterFifty = afterHundrad%50;
 
    // 20 Notes   
    int twentyCount = afterFifty/20;
    cout << "20 : " <<twentyCount;
    cout <<  "\n";
    int afterTwenty = afterFifty%20;

    // 10 Coins    
    int tenCount = afterTwenty/10;
    cout << "10 : " << tenCount;
    cout << "\n";
    int afterTen = afterTwenty%10;
 
    // 5 Coins  
    int fiveCount = afterTen/5;
    cout << "5 : " <<fiveCount;
    cout << "\n";
    int afterFive = afterTen%5;
    
    // 2 Coins
    int twoCount = afterFive/2;
    cout << "2 : " <<twoCount;
    cout << "\n";
    
    // 1 Coins
    int oneCount = afterFive%2;
    cout << "1 : " <<oneCount;
    cout << "\n";
    
    return 0;
}

