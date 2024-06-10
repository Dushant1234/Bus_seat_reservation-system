                                            // Sacho Satram <3
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int option,n=0, destination, type1, type2;  // FOR INITIAL MENU INILILIZATIONS
	int j, q, confirm,toreserve,n1,k = 1,Total_bill, i, price=0,z=0,reserved;        // FOR KHI TO SUK STANDARD C INITILIZATIONS
	
	
	
	printf("\n\t\t\t====================> WELCOME TO TESLA E-BUS SERVICES <=====================");

	printf("\n\n\t\t\t\t\t   Choose Any One Option From Following:\n\n\n");
	printf("\t\t1. Reserve Your Seat\n");
	printf("\t\t2. Exit\n");
	scanf("%d", &option);
	switch (option)
	{
 
	case 1:
	{

		printf("Enter Your Destination\n");
		printf("======================> From Karachi to Lahore 'Press 1'\n");
		printf("======================> From Karachi to Sukkur 'Press 2'\n\n");
		scanf("%d", &destination);
		if (destination == 1)
		{
			printf("Choose Category:\n");
			printf("======> Standard Class 'Press 1'\t\t=\tRs.3000\n");
			printf("======> Business Class 'Press 2'\t\t=\tRs.4500\n");
			scanf("%d", &type1);
			
			
			//             START OF STANDARD CLASS FROM KARACHI TO LAHORE
			
			if (type1 == 1)
			{
				
				  price = 3000;
				
				
				
				printf("Enter Quantity\t=\t");
				scanf("%d", &q);

				if(q<=20) {
				
		
			
			do {
					
					n1=1;
			 
			 	
				 
				 printf("\n\n\t\t=================> 'R' = ALREADY RESERVED\n");
				 printf("\t\t=================> 'A' = AVAILABLE");
				
			printf("\n\n\n");
			
			for (i = 1; i <= 7; i++)
			{
				for (j = 1; j <= 4; j++)
				{

					if ( n1 == 1 || n1 == 5 || n1 == 7 || n1 == 12 || n1 == 15 || n1 == 17 || n1 == 20 || n1 == 26)
					{

						printf("\t\tNo: %d => 'R'",n1);
						n1++;
					}
					else
					{

						printf("\t\tNo: %d => 'A' ", n1);
						n1++;
					}
				
				}

				printf("\n\n");
			}
			
			
		    	printf("\n");
			printf("Enter Seat Number You Want to Reserve: \t=\t");
			scanf("%d", &toreserve);
			
	
			
			
		
			printf("\n\n");

			if (toreserve == 1 || toreserve == 5 || toreserve == 7 || toreserve == 12 || toreserve == 15 || toreserve == 17 || toreserve == 20 || toreserve == 26)
			{
				printf("\t\t==========================> This Seat is Already Reserved :( <========================\n");
				printf("\n\t\t==========================> Choose From Avaialble Only :( <========================\n");
				
			}

			else if (toreserve > 28)
			{
				printf("\t\t=======================> The Bus Has Only 28 Seats :(  <=======================\n");
			}
			else
			{
				printf(" Confirm Your Booking\n ");
				printf("Yes 'Press 1' \t\tNo  'Press 2'\t\t :\t");
				scanf("%d", &confirm);

				if (confirm == 1)
				{

					printf("\n\t\t==================> Your Seat Has Been Reserved Successfully :) <====================");
					k++;
					
				}
			
				else if (confirm == 2)
				{
					printf("\t\t========================> Thankyou For Visiting US....<==================== :)");
					
				}
				else
				{

					printf("===================> You Have Entered Wrong Key....<====================");
				}
				// END OF ELSE CONDITION CONFIRM YOUR BOOKING
			
			} 
		  	
			  	// END OF DO LOOP FOR QUANTITY
				  	  	
					
    	} 
    	
		while(k<=q); {
				toreserve = reserved;
			k++;
		
		}
		
			Total_bill=price*q;
			printf("\n\n=================> Your Total Bill is %d For %d Seats Reservation STANDARD CLASS from KARACHI to LAHORE <==================",Total_bill,q);
		}  // END OF  QUANTITY IF  CONDITION
			
			
	else
	 {
				printf("==================> Only 20 Seats are Available in the Bus Currently <================");
			}  // END OF  QUANTITY  ELSE CONDITION
			
		
			// END OF IF TYPE1 == 1 FOR STANDARD Class khi to lhr
		}
	} 
		           								// END OF KHI TO LAHORE STANDARD CLASS	
		           					//	----------------------------------------------------------------------
		           								
				   	//  START OF BUSINESS CLASS FROM KHI TO LHR						   	
		
			if (type1 == 2)
			{
				
				  price = 4500;
				
				
				printf("Enter Quantity\t=\t");
				scanf("%d", &q);

				if(q<=10) {
				
		
			do {
				
					
					n1=1;
					 printf("\n\t\t=================> 'R' = ALREADY RESERVED");
				 printf("\n\t\t=================> 'A' = AVAILABLE");	
				
			printf("\n\n\n");
			
			for (i = 1; i <= 5; i++)
			{
				for (j = 1; j <= 3; j++)
				{

					if ( n1 == 3 || n1 == 6|| n1 == 9 || n1 == 15)
					{ 
						printf("\t\tNo: %d => 'R'",n1);
						n1++;
					}
					else
					{

						printf("\t\tNo: %d => 'A' ", n1);
						n1++;
					}
				}

				printf("\n\n");
			}
		
			printf("Enter Seat Number You Want to Reserve: \t=\t");
			scanf("%d", &toreserve);
		
			printf("\n\n");

			if ( toreserve == 3 || toreserve == 6|| toreserve == 9 || toreserve == 15)
			{
				printf("\t\t==========================> This Seat is Already Reserved :( <========================\n");
				printf("\n\t\t==========================> Choose From Avaialble Only :( <========================\n");
				
			}

			else if (toreserve > 15 )
			{
				printf("\t\t=======================> The Bus Has Only 15 Seats :(  <=======================\n");
			}
			else
			{
				printf(" Confirm Your Booking\n ");
				printf("Yes 'Press 1' \t\tNo  'Press 2'\t\t :\t");
				scanf("%d", &confirm);

				if (confirm == 1)
				{

					printf("\n\t\t==================> Your Seat Has Been Reserved Successfully :) <====================");
					k++;
					
				}
			
				else if (confirm == 2)
				{
					printf("\t\t========================> Thankyou For Visiting US....<==================== :)");
					
				}
				else
				{

					printf("\t\t===================> You Have Entered Wrong Key....<====================");
				}
				// END OF ELSE CONDITION for CONFIRM YOUR BOOKING
			} 
		     // END OF DO LOOP FOR QUANTITY	
		}
		while(k<=q); {
		
		k++;
		
				
		}
			
			Total_bill=price*q;
			printf("\n\n================> Your Total Bill is %d For %d Seats Reservation in BUSINESS CLASS from KARACHI to LAHORE <=============",Total_bill,q);
		}  // END OF  QUANTITY IF  CONDITION
			
			
	else
	 {
				printf("==================> Only 10 Seats are Available in the Bus Currently <================");
			}  // END OF  QUANTITY  ELSE CONDITION
			
		
			// END OF IF TYPE2 == 1 FOR BUSSINESS/STANDARD
		}
		// END OF DESTINATION == 2 FOR LAHORE OR SUKKUR
		
		
		//   							END OF KARACHI TO LAHORE  BUSNIESSSSS...................                                                          
		
		
		else if (destination == 2)
		{
			printf("Choose Category:\n");
			printf("> Press 1 for Standard Class\t\t=\tRs.1800\n");
			printf("> Press 2 for Business Class\t\t=\tRs.2800\n");
			scanf("%d", &type2);

										// ===============> START OF STANDARD CLASS FROM KHI TO SUKK. <========================= 
			if (type2 == 1)
			{
				
				  price = 1800;

				printf("Enter Quantity\t=\t");
				scanf("%d", &q);

				if(q<=20) {

			do {
					
					n1=1;
						 printf("\n\t\t=================> 'R' = ALREADY RESERVED");
				 printf("\n\t\t=================> 'A' = AVAILABLE\n");
					
				
			printf("\n\n\n");
			
			for (i = 1; i <= 7; i++)
			{
				for (j = 1; j <= 4; j++)
				{

					if (n1 == 1 || n1 == 5 || n1 == 7 || n1 == 12 || n1 == 15 || n1 == 17 || n1 == 20 || n1 == 26 )
					{
					printf("\t\tNo: %d => 'R'",n1);
						n1++;
					}
					else
					{

						printf("\t\tNo: %d => 'A' ", n1);
						n1++;
					}
				}

				printf("\n\n");
			}
		
			printf("Enter Seat Number You Want to Reserve: \t=\t");
			scanf("%d", &toreserve);
		
			printf("\n\n");

			if (toreserve == 1 || toreserve == 5 || toreserve == 7 || toreserve == 12 || toreserve == 15 || toreserve == 17 || toreserve == 20 || toreserve == 26)
			{
				printf("\t\t==========================> This Seat is Already Reserved :( <========================\n");
				printf("\n\t\t==========================> Choose From Avaialble Only :( <========================\n");
				
			}

			else if (toreserve > 28)
			{
				printf("\t\t=======================> The Bus Has Only 28 Seats :(  <=======================\n");
			}
			else
			{
				printf(" Confirm Your Booking\n ");
				printf("Yes 'Press 1' \t\tNo  'Press 2'\t\t :\t");
				scanf("%d", &confirm);

				if (confirm == 1)
				{

					printf("\n\t\t==================> Your Seat Has Been Reserved Successfully :) <====================");
					k++;
					
				}
			
				else if (confirm == 2)
				{
					printf("\t\t========================> Thankyou For Visiting US....<==================== :)");
					
				}
				else
				{

					printf("\t\t===================> You Have Entered Wrong Key....<====================");
				}
				// END OF ELSE CONDITION CONFIRM YOUR BOOKING
			} 
		  		// END OF DO LOOP FOR QUANTITY   	
		} 
		while(k<=q); {
		
		 toreserve=n;
			
			k++;
				
		}
			
			Total_bill=	price*q;
			printf("\n\n=================> Your Total Bill is %d For %d Seats Reservation STANDARD CLASS from Karachi to Sukkur <==================",Total_bill,q);
		}  // END OF  QUANTITY IF  CONDITION
			
			
	else
	 {
				printf("==================> Only 20 Seats are Available in the Bus Currently <================");
			}  // END OF  QUANTITY  ELSE CONDITION
			
		
			// END OF IF TYPE2 == 1 FOR BUSSINESS/STANDARD
		}
		
												   
												   	//     START OF BUSINESS CLASS FROM KHI TO SUKK
			if (type2 == 2)
			{
				
				  price = 2800;
				
				
				printf("Enter Quantity\t=\t");
				scanf("%d", &q);

				if(q<=10) {
				
		
			do {
					
					n1=1;
						 printf("\n\t\t=================> 'R' = ALREADY RESERVED\n");
				 printf("\n\t\t=================> 'A' = AVAILABLE");
				
			printf("\n\n\n");
			
			for (i = 1; i <= 5; i++)
			{
				for (j = 1; j <= 3; j++)
				{

					if ( n1 == 2 || n1 == 7 || n1 == 12 || n1 == 15 || n1 == 8)
					{
					printf("\t\tNo: %d => 'R'",n1);
						n1++;
					}
					else
					{

						printf("\t\tNo: %d => 'A' ", n1);
						n1++;
					}
				}

				printf("\n\n");
			}
		
			printf("Enter Seat Number You Want to Reserve : \t=\t");
			scanf("%d", &toreserve);
		
			printf("\n\n");

			if ( toreserve == 2 || toreserve == 7 || toreserve == 8 || toreserve == 12 || toreserve == 15 )
			{
				printf("\t\t==========================> This Seat is Already Reserved :( <========================\n");
				printf("\n\t\t==========================> Choose From Avaialble Only :( <========================\n");
				
			}

			else if (toreserve > 15)
			{
				printf("\t\t=======================> The Bus Has Only 15 Seats :(  <=======================\n");
			}
			else
			{
				printf(" Confirm Your Booking\n ");
				printf("Yes 'Press 1' \t\tNo  'Press 2'\t\t :\t");
				scanf("%d", &confirm);

				if (confirm == 1)
				{

					printf("\n\t\t==================> Your Seat Has Been Reserved Successfully :) <====================");
					k++;
					
				}
			
				else if (confirm == 2)
				{
					printf("\t\t========================> Thankyou For Visiting US....<==================== :)");
					
				}
				else
				{

					printf("\t\t===================> You Have Entered Wrong Key....<====================");
				}
				// END OF ELSE CONDITION for CONFIRM YOUR BOOKING
			} 
		     // END OF DO LOOP FOR QUANTITY	
		}
		while(k<=q); {
		
		k++;
				
		}
			
			Total_bill=price*q;
			printf("\n\n=============> Your Total Bill is %d For %d Seats Reservation in BUSINESS CLASS from Karachi to Sukkur <=============",Total_bill,q);
		}  // END OF  QUANTITY IF  CONDITION
			
			
	else
	 {
				printf("==================> Only 10 Seats are Available in the Bus Currently <================");
			}  // END OF  QUANTITY  ELSE CONDITION
			
		
			// END OF IF TYPE2 == 1 FOR BUSSINESS/STANDARD
		}
		// END OF DESTINATION == 2 FOR LAHORE OR SUKKUR
     }
     break;
     // END OF FIRST CASE.
   }

			
	
	     
		 
		 case 2: {
		 	
		 	printf("\n\n\t\t\t======> You are Being Exited From Tesla E-Bus Services :(  <=======");
		 	
		 	void exit(int code);
		 	
		 	// END OF 3RD CASE
			break;
		 }
		 default:
		 	{
		 		printf("===================> You Have Entered Wrong Key....  <====================");
			 }
			 // END OF SWITCH CASE
}
			// END OF PROGRAM
		return 0;
}
