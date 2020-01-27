//Jainam Savla
//SU ID:705946284
//Customer.h file

#ifndef CUSTOMER_H
#define CUSTOMER_H

class Customer {
    private:
        int customer_id;   // unique identifier of a customer
        double checkout;   //checkout of the person
        int item; // number of Items
        int checkout1;
    public:
        void set_customerId(int customer_id); //set unique identifier number of a customer
        int get_customerId(void); //get unique identifier number of a customer

        void set_checkout(void); //set checkout of a customer
        double get_checkout( void ); //get checkout of a customer

        void set_itemNo(void); // set the number of items
        int get_itemNo(void); //get the number of items
    
    void set_waiting_time(void); // set the checkout of a customer
    double get_waiting_time(void); //get the checkout of a customer
    void time_toDequeue(void); // time to dequeue is used for decrementing the checkout

};

#endif
 //end class customer
