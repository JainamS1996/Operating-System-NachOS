//Name : Jainam Savla
// SU ID: 705946284

#include "kernel.h"
#include "main.h"
#include "thread.h"
#include "list.h"
#include "Customer.h"
#include "debug.h"
#include "copyright.h"
#include "cstdlib"
#include "ctime"
#include "cmath"


//Cashier List Declaration

List<Customer*> *Cashier1 = new List<Customer*>();
List<Customer*> *Cashier2 = new List<Customer*>();
List<Customer*> *Cashier3 = new List<Customer*>();
List<Customer*> *Cashier4 = new List<Customer*>();
List<Customer*> *Cashier5 = new List<Customer*>();
List<Customer*> *Cashier6 = new List<Customer*>();
List<Customer*> *Cashier7 = new List<Customer*>();
List<Customer*> *Cashier8 = new List<Customer*>();
List<Customer*> *Cashier9 = new List<Customer*>();
List<Customer*> *Cashier10 = new List<Customer*>();
List<Customer*> *WaitingQueue = new List<Customer*>();
List<Customer*> *CustomersExiting = new List<Customer*>();

//Global variables
int customer_id = 1;
int checkout_customer=0;
int average_waiting_time=0;
int total_number_open_lines=0;
int time_cashier_with_more_than_3=0;
int tset = 0;
int maxtime_queue=0;
int mintime_queue=100000;
int max_entire_waiting=0;
int entire_simulstionmaximum_servicetime=0;
int entire_simulstionminimum_servicetime=111111111111111111110;
int smallest_waiting_time_for_entire_simulation=0;
int max_people_waiting=0;
int min_people_waiting=10000000;
int maximum_servicetime=0;




//Function checking for time more than 3 customers in the List
int more_than_3()
{
    if(Cashier1->NumInList()>3){
        time_cashier_with_more_than_3=time_cashier_with_more_than_3+1;
    }
    if(Cashier2->NumInList()>3){
        time_cashier_with_more_than_3=time_cashier_with_more_than_3+1;
    }
    if(Cashier3->NumInList()>3){
        time_cashier_with_more_than_3=time_cashier_with_more_than_3+1;
    }
    if(Cashier4->NumInList()>3){
        time_cashier_with_more_than_3=time_cashier_with_more_than_3+1;
    }
    if(Cashier5->NumInList()>3){
        time_cashier_with_more_than_3=time_cashier_with_more_than_3+1;
    }
    if(Cashier6->NumInList()>3){
        time_cashier_with_more_than_3=time_cashier_with_more_than_3+1;
    }
    if(Cashier7->NumInList()>3){
        time_cashier_with_more_than_3=time_cashier_with_more_than_3+1;
    }
    if(Cashier8->NumInList()>3){
        time_cashier_with_more_than_3=time_cashier_with_more_than_3+1;
    }
    if(Cashier9->NumInList()>3){
        time_cashier_with_more_than_3=time_cashier_with_more_than_3+1;
    }
    if(Cashier10->NumInList()>3){
        time_cashier_with_more_than_3=time_cashier_with_more_than_3+1;
    }
    return time_cashier_with_more_than_3;
    
}

//Function for finding out number of open lines
int number_of_open_lines(){
    if(!Cashier1->IsEmpty()){
        total_number_open_lines=total_number_open_lines+1;
    }
    if(!Cashier2->IsEmpty()){
        total_number_open_lines=total_number_open_lines+1;
    }
    if(!Cashier3->IsEmpty()){
        total_number_open_lines=total_number_open_lines+1;
    }
    if(!Cashier4->IsEmpty()){
        total_number_open_lines=total_number_open_lines+1;
    }
    if(!Cashier5->IsEmpty()){
        total_number_open_lines=total_number_open_lines+1;
    }
    if(!Cashier6->IsEmpty()){
        total_number_open_lines=total_number_open_lines+1;
    }
    if(!Cashier7->IsEmpty()){
        total_number_open_lines=total_number_open_lines+1;
    }
    if(!Cashier8->IsEmpty()){
        total_number_open_lines=total_number_open_lines+1;
    }
    if(!Cashier9->IsEmpty()){
        total_number_open_lines=total_number_open_lines+1;
    }
    if(!Cashier10->IsEmpty()){
        total_number_open_lines=total_number_open_lines+1;
    }
    return total_number_open_lines;
}


//Function for finding out max number of open lines every minute
int MaxNumberOfOpenLines()
{
    int count=0;
    if(!Cashier1->IsEmpty()){
        count=count+1;
    }
    if(!Cashier2->IsEmpty()){
        count=count+1;
    }
    if(!Cashier3->IsEmpty()){
        count=count+1;
    }
    if(!Cashier4->IsEmpty()){
        count=count+1;
    }
    if(!Cashier5->IsEmpty()){
        count=count+1;
    }
    if(!Cashier6->IsEmpty()){
        count=count+1;
    }
    if(!Cashier7->IsEmpty()){
        count=count+1;
    }
    if(!Cashier8->IsEmpty()){
        count=count+1;
    }
    if(!Cashier9->IsEmpty()){
        count=count+1;
    }
    if(!Cashier10->IsEmpty()){
        count=count+1;
    }
    return count;
}


// Iterating the Waiting queue for finding the waiting time
int print_waitingqueuelist()
{
    ListIterator<Customer*> *a = new ListIterator<Customer*>(WaitingQueue);
    for(; !a->IsDone(); a->Next())
    {
        Customer *c = a->Item();
        average_waiting_time= average_waiting_time+1;
        maxtime_queue=max(maxtime_queue,average_waiting_time);
        mintime_queue=min(mintime_queue,average_waiting_time);
        
    }
    
}

/**void print_List(List<Customer*> *Cashierlolol){
    {
        ListIterator<Customer*> *z = new ListIterator<Customer*>(Cashierlolol);
        for(; !z->IsDone(); z->Next())
        {
            Customer *c10 = z->Item();
            cout<<c10->get_customerId();
        }
        cout << endl;
    }
}**/

//Function for finding the number of customers leaving the supermarket
void print_ExitList()
{
    ListIterator<Customer*> *iterator = new ListIterator<Customer*>(CustomersExiting);
    
    
    for(; !iterator->IsDone(); iterator->Next())
    {
        Customer *c = iterator->Item();
        checkout_customer=checkout_customer+1;
    }
    cout << endl;
}

// Finding out how many customers can be accomodated in the cashiers list
int cashier_number(List<Customer*> *Cashier )
{
    
    int a=4-Cashier->NumInList();
    return a;
    
}


//Return the count of number of customers in peak hours and normal hours.
    int No_of_Customers(int time)
    {
        if(time<=120 || time>240)
        {
            int counter=rand()%(5+1);
            return counter;
        }
        else
        {
            int counter=rand()%(10-5 +1)+5;
            return counter;
            
        }
    }

//Function from waiting queue to Cashier Queue

void waitingqueuetoCashier(List<Customer*> *Cashierlo){
    
    Cashierlo -> Append(WaitingQueue->RemoveFront());

}

//Function for Cashier Queue to Customers Exiting the SuperMarket

// Customer Exiting Queue is created for the Statistics Purpose

void cashier_checkingout(List<Customer*> *Cashierlol ){
    
    if(!Cashierlol->IsEmpty()){
        if(Cashierlol->Front()->get_checkout() != 0)
        {
            Cashierlol->Front()->time_toDequeue();
            
        }
        else if(Cashierlol -> Front() -> get_checkout() == 0)
        {
            CustomersExiting -> Append(Cashierlol -> RemoveFront());
            
        }
    }
    
    
}




//Core(Heart) of the simulation

void CreateCustomer(int time){
    
    /***int NoOfCustomer=0;
     int time=0
     
     for(int i=0;i<5;i++)
     {
     NoOfCustomer=rand()%(5-0 + 1) + 0;
     
     for(int i=0;i<=NoOfCustomer;i++){
     CreateCustomer(cid++);
     
     if(WaitingCustomers->NumInList()>0 && Cashier1->NumInList()<5)
     {
     while(Cashier1->NumInList<5)
     {
     Customer *FirstPersonWaitingQ = WaitingCustomers-> RemoveFront();
     Cashier1->Append(FirstPersonWaitingQ);
     cout << " Cashier 1 id is and checkout time is" << Cashier1->Front()->get_customerId()<< Cashier2->Front()->get_checkout();
     
     }
     }
     ListIterator<Person*> *iterator = new ListIterator<Person*>(list);
     for(; !iterator->IsDone(); iterator->Next()){
     
     Customer *c = iterator->Item();
     cout<<c->get_customerId();
     }
     if(WaitingCustomers->NumInList()==10 && Cashier2->NumInList()<5)
     {
     
     while(Cashier1->NumInList<=5)
     
     {
     Customer *FirstPersonWaitingQ = WaitingCustomers-> RemoveFront();
     Cashier1->Append(FirstPersonWaitingQ);
     cout << " Cashier 2 current customer id is and checkout time is" << Cashier1->Front()->get_customerId()<< Cashier2->Front()->get_checkout();
     }
     
     }
     /**if(time%60){
     printf("Stats hourly\n");
     }**/
    
    
    
    
    /**else if(120=<time<240)
     {
     NoOfaCustomer=rand()%(10-5 + 1) + 5;
     for(int i=0;i<=NoOfCustomer;i++){
     CreateCustomer(cid++)
     
     }
     }
     
     else{
     NoOfCustomer=rand()%(5-0 + 1) + 0;
     for(int i=0;i<=NoOfCustomer;i++){
     CreateCustomer(cid++)
     
     printf("Stats"\n");
     }
     
     
     }
     **/

    
    int customer_count=No_of_Customers(time);
    for(int i=0;i<customer_count;i++)
    {
        Customer *customer = new Customer;
        customer->set_customerId(customer_id++);
        customer->set_checkout();
        customer->set_itemNo();
        customer->set_waiting_time();
        WaitingQueue->Append(customer);
       
//Waiting Queue to Cashier
        if(Cashier1->NumInList() <=4)
        {
            int c=cashier_number(Cashier1);
            for(int i=0;i<c;i++){
                
                if(!WaitingQueue -> IsEmpty()){
            
                    waitingqueuetoCashier(Cashier1);
            }
            }
        }
 
        else if(Cashier2->NumInList() <=4)
        {
            int c=cashier_number(Cashier2);
            for(int i=0;i<c;i++){
                if(!WaitingQueue -> IsEmpty()){
                    waitingqueuetoCashier(Cashier2);
            }
        }
        }
        
        if(WaitingQueue->NumInList()<=4){
            
            if(WaitingQueue->NumInList() >= 10){
                
                int c=cashier_number(Cashier3);
                for(int i=0;i<c;i++){
                    waitingqueuetoCashier(Cashier3);
                    
                }
        }
            
        }
        
        if(Cashier4->NumInList() <= 4)
        {
            if (WaitingQueue->NumInList() >= 10){
                
                int c=cashier_number(Cashier4);
                for(int i=0;i<c;i++){

                    waitingqueuetoCashier(Cashier4);
                }
            }
            
        }
        if(Cashier5->NumInList() <= 4){
            if( WaitingQueue->NumInList() >= 10){
                
                
                int c=cashier_number(Cashier5);
                for(int i=0;i<c;i++)
                {
                    waitingqueuetoCashier(Cashier5);

                    
                }
            }
            
        }
        
        if(Cashier6->NumInList() <= 4){
            if (WaitingQueue->NumInList() >= 10){
                int c=cashier_number(Cashier6);
                for(int i=0;i<c;i++)
                {
                    waitingqueuetoCashier(Cashier6);

                }
            }
            
        }
        if(Cashier7->NumInList() <= 4){
            if( WaitingQueue->NumInList() >= 10){
                int c=cashier_number(Cashier7);
                for(int i=0;i<c;i++)
                {
                    waitingqueuetoCashier(Cashier7);
                }
            }
            
        }
        if(Cashier8->NumInList() <= 4){
            if (WaitingQueue->NumInList() >= 10){
                int c=cashier_number(Cashier8);
                for(int i=0;i<c;i++){
                    waitingqueuetoCashier(Cashier8);

                }
            }
            
        }
        if(Cashier9->NumInList() <= 4){
            if(WaitingQueue->NumInList() >= 10){
                int c=cashier_number(Cashier9);
                for(int i=0;i<c;i++){
                    waitingqueuetoCashier(Cashier9);

                }
            }
            
        }
        if(Cashier10->NumInList() <= 4){
            if( WaitingQueue->NumInList() >= 10){
                int c=cashier_number(Cashier10);
                for(int i=0;i<c;i++)
                {
                    waitingqueuetoCashier(Cashier10);

                }
            }
        }
        
    }
    //Customer checking out the cashier line
     cashier_checkingout(Cashier1);
      cashier_checkingout(Cashier2);
      cashier_checkingout(Cashier3);
      cashier_checkingout(Cashier4);
      cashier_checkingout(Cashier5);
      cashier_checkingout(Cashier6);
      cashier_checkingout(Cashier7);
      cashier_checkingout(Cashier8);
      cashier_checkingout(Cashier9);
      cashier_checkingout(Cashier10);
    
    

   
}

//For every hour finding the maximum people in the waiting room
int max_people_waiting_queue(){
    int number_of_people_in_waiting =WaitingQueue->NumInList();
    max_people_waiting=max(max_people_waiting,number_of_people_in_waiting);
    return max_people_waiting;
}
//For every hour finding the minimum people in waiting queue

int min_people_waiting_queue(){
    int number_of_people_in_waiting_queue1=WaitingQueue->NumInList();
    min_people_waiting=min(min_people_waiting,number_of_people_in_waiting_queue1);
    return min_people_waiting;
}
//For every hour finding out the average service time
void serviceTimehourly(int i){
    ListIterator<Customer*> *iterator = new ListIterator<Customer*>(CustomersExiting);
    for(; !iterator->IsDone(); iterator->Next())
    {
        Customer *c = iterator->Item();
        tset = tset + c->get_waiting_time();
        
    }
    cout <<"Average Service Time" <<int(tset/CustomersExiting->NumInList()) << endl;
}
int minimum_servicetime=100000;

// For every hour , finding out the shortest time

void shortestServiceTime(){
    ListIterator<Customer*> *iterator = new ListIterator<Customer*>(CustomersExiting);
    for(; !iterator->IsDone(); iterator->Next())
    {
        Customer *c = iterator->Item();
        int waiting_time=c->get_waiting_time();
        minimum_servicetime = min(minimum_servicetime,waiting_time);
    }
    cout << "Shortest Waiting Time Every Hour" << minimum_servicetime << endl;
}

//For hourly stats

void HourlyStats(int time){
    print_ExitList();
    print_waitingqueuelist();

    cout<< "Average number of customers arriving for checkout" << int(checkout_customer/time) << endl;
    cout<< "Average Waiting time every hour" << int(average_waiting_time/time) << endl;
    cout<<"Average time each casher will have more than 3 customers standing in line"<< int(time_cashier_with_more_than_3/time)<< endl;

}

//For hourly largest service time
void largestServiceTime(){
    ListIterator<Customer*> *iterator = new ListIterator<Customer*>(CustomersExiting);
    for(; !iterator->IsDone(); iterator->Next())
    {
        Customer *c = iterator->Item();
        int waiting_time=c->get_waiting_time();
        maximum_servicetime = max(maximum_servicetime,waiting_time);
    }
    cout << "Largest Service Time" << maximum_servicetime << endl;
}


//For entire summary largest time
void entiresummary_largestServiceTime(){
    ListIterator<Customer*> *iterator = new ListIterator<Customer*>(CustomersExiting);
    cout<<""<<endl;
    for(; !iterator->IsDone(); iterator->Next())
    {
        Customer *c = iterator->Item();
        int waiting_time=c->get_waiting_time();
        entire_simulstionmaximum_servicetime = max(entire_simulstionmaximum_servicetime,waiting_time);
    }
    cout << "Largest Service Time For Entire Simulation" << entire_simulstionmaximum_servicetime << endl;
}

//For entire summary shortest time

void entiresummary_shortestServiceTime(){
    ListIterator<Customer*> *iterator = new ListIterator<Customer*>(CustomersExiting);
    for(; !iterator->IsDone(); iterator->Next())
    {
        Customer *c = iterator->Item();
        int waiting_time=c->get_waiting_time();
        entire_simulstionminimum_servicetime = min(entire_simulstionminimum_servicetime,waiting_time);
    }
    cout << "Shortest Service Time For Entire Simulation : " << entire_simulstionminimum_servicetime << endl;
}

void ThreadTest()
{   int maximum_open_line=0;
    int minimum_waiting_time=10000000;
    int maximum_waiting_time=0;
    int people_waiting_queue=0;

    srand(time(0)); // Generates random number every time, otherwise it generates the same random number.
    
    for (int i=0; i<=300;i++){
        int people=WaitingQueue->NumInList();
        max_entire_waiting=max(max_entire_waiting,people);

    //Average Time each casher will have more than 3 customers standing in line
        more_than_3();
    //Average People in Waiting Queue
        people_waiting_queue=people_waiting_queue+WaitingQueue->NumInList();
        
    //Maximum Customers in Waiting Line
        int max_cust=max_people_waiting_queue();
        
    //Minimum Customers in Waiting Queue
        int min_cust=min_people_waiting_queue();
        
        
    //Minimum & Waiting Time
      //  minimum_waiting_time=min(minimum_waiting_time,average_waiting_time);
       // maximum_waiting_time=max(maximum_waiting_time,average_waiting_time);
    //Average Number of Open Lines
        number_of_open_lines();
    //Maximum number of Open Lines
        int a=MaxNumberOfOpenLines();
        maximum_open_line=max(maximum_open_line,a);
    //Creating Customers
        CreateCustomer(i);
 //For Hourly Simulation
       if(i%60==0 && i!=0)
       {
          int a=number_of_open_lines();
           cout<<"#########################################################################"<<endl;

            cout<<"For Every Hour "<<endl;

           cout<<"#########################################################################"<<endl;

          HourlyStats(i);
            
            cout<<"Maximum waiting time"<< maxtime_queue<<endl;
            //maxtime_queue=10000;
            cout<<"Minimum waiting time"<< mintime_queue<<endl;
            //mintime_queue=0;
            cout<<"Average customers in waiting queue"<< int(people_waiting_queue/i)<<endl;
            cout<<"Largest customers in waiting queue"<< max_cust<<endl;
            max_people_waiting=0;

            cout<<"Smallest customers in waiting queue"<< min_cust<<endl;
            serviceTimehourly(i);
            tset=0;
            shortestServiceTime();
            minimum_servicetime=100000;

            largestServiceTime();
            maximum_servicetime=0;

          cout<< "Average number of open lines"<<int(a/i)<<endl;
          cout<< "Maximum number of open lines"<<maximum_open_line+2<<endl;
           maximum_open_line=0;
        }

        //Summary for Entire Evaluation
        
        if(i==300){
            cout<<endl;
            cout<<"#########################################################################"<<endl;
            cout<<"Entire Simulation"<<endl;
            cout<<"#########################################################################"<<endl;

            
            cout<< "Average Waiting Time is" << int(average_waiting_time/i)<<endl;
            cout<< "Maximum Number of People in Waiting Queue" << max_entire_waiting <<endl;
            serviceTimehourly(i);
            entiresummary_largestServiceTime();
            entiresummary_shortestServiceTime();
            cout<<"Smallest Waiting Time is "<<smallest_waiting_time_for_entire_simulation<<endl;
            cout<<"#########################################################################"<<endl;

        }

        }
    
}



