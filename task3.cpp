#include<iostream>
using namespace std;

float fprice (char code , float price)
{
    float tax_rate,tax_amount,final_price;
    if(code == 'M')
    {
        tax_rate = 6.0;
    }
    else if(code == 'E')
    {
	tax_rate = 8.0;       
    }
    else if(code == 'S')
    {
        tax_rate = 10.0;
    }
    else if(code == 'V')
    {
        tax_rate = 12.0;
    }
    else if(code == 'T')
    {
        tax_rate = 15.0;
    }
        tax_amount= price*tax_rate/(100);
        final_price = price+tax_amount; 

    return final_price;

}

main()
{
    char code;
    float price, final_price;
    cout << "Enter vehicle price code(M, E, S, V, T): ";
    cin >>code;
    cout << "Enter vehicle price: ";
    cin >>price;
    final_price = fprice (code,price);
    cout << "the final price of vehicle of type " << code << " is " << final_price;

}