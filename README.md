# Operating-System-NachOS

#C++ in Nachos by writing a program that simulates checkout lines at a supermarket. Each line is a queue object. The supermarket wants to build a simulation of checkout line to determine how many cashers they will need based on the average number of customers at different time of the day. Here is your situation.
You have been provided with the following known facts:
•	A casher takes an average of 5 seconds to scan a single item for a customer.
•	The average startup time for a check out (greeting a new customer, moving the conveyer belt to reach items, …) is 10 seconds.
•	The average close time for a check out (getting the total, handling coupons, getting payments, …) is 1.5 minute.
•	Customers, checking out have a random number of items, average range between 5 to 40 items.
•	Peak hours are between 4 to 6 pm and random number of customers arriving for a check out is between 5 and 10 every minute.
•	During regular hours customers between 0 and 5 arrive every minute.
•	There are maximum 10 checkout lines and minimum 2 lines. Depends on waiting customers checkout lines can open/close.
•	Each casher cannot have more than 5 customers in line.
•	There is a single waiting queue of arriving customers for a casher when all open lines are full. If there are more than 10 customers in this queue, open a new line.
•	If there is no customer in the waiting queue and the last customer of a checkout line is served, the line will be closed.

If the average arrival rate is larger than the average service rate, the queue would grow fast and this may cause long lines. Run the supermarket simulation from 2 pm to 7 pm using the following:
•	When a casher starts checking out a customer,
o	Determine the customer’s service time with his/her items, startup time and close out time
o	If total service time is fractional in minute, round up
•	For each minute of the day:
o	If a new customer arrives,
	Check whether there is an available open line (standing customers < 5), enqueue the customer to the open line
	Otherwise, enqueue the customer into the waiting queue
o	If service was completed for the last customer of a casher,
	Dequeue the next customer to be served
	If the waiting queue is not empty, move customer(s) from the waiting queue to the checkout line
	If the waiting queue and current checkout line are empty, close the line.
The supermarket wants to know the followings:
•	for every hour
o	average number of customers arriving for checkout
o	average/shortest/longest waiting time
o	average/shortest/longest service time
o	average number of open lines
o	maximum number of open lines
o	average time each casher will have more than 3 customers standing in line
o	average/smallest/largest number of customers in the waiting queue
•	for entire simulation
o	average/shortest/longest waiting time
o	average/shortest/longest service time
o	maximum number of customers in the waiting queue at any time
