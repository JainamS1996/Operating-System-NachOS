//Name: Jainam Savla
//SU ID : 705946284
#include "Customer.h"
#include<cstdlib> 
#include<stdio.h>
#include<cmath>
//Function definition

int Customer::get_customerId(void)
{
   return customer_id;
}

void Customer::set_customerId(int cust_id)
{
   customer_id = cust_id;
}

double Customer::get_checkout(void) 
{
   return checkout;
}

void Customer::set_checkout(void) 
{
    checkout= round(((item*5)/60)+1/6+1.5);
}

double Customer::get_waiting_time(void)
{
    return checkout1;
}

void Customer::set_waiting_time(void)
{
    checkout1= round(((item*5)/60)+1/6+1.5);}

void Customer::time_toDequeue()
{
	if(checkout>0)
	{
		checkout=checkout-1;
	}
	else
	{
        checkout=0;
	}
}



int Customer::get_itemNo(void) 
{
   return item;
}

void Customer::set_itemNo(void) 
{
   item =  rand()%(40-5 + 1) + 5;
}
