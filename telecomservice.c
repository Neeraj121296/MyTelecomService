#include <stdio.h>
#include<stdlib.h>

struct telecomService
{
   char PlanName[20];
   char MonthlyRent[20];
   char FreeInternet[100];
   char FreeCalls[70];
   char FreeSms[20];
   char CallCharges[20];
   char SmsCharges[20];
   char DataCharges[20];
   char RoamingCharges[20];

};

int main()
{
   struct telecomService *ptr;
   int i, noOfPlans;
   printf("Enter number of PostPaid plans to submit ");
   scanf("%d", &noOfPlans);

   // Allocates the memory for noOfRecords structures with pointer ptr pointing to the base address.
   ptr = (struct telecomService*) malloc (noOfPlans * sizeof(struct telecomService));

   for(i = 0; i < noOfPlans; ++i)
   {
       printf("Enter Plan Name: \n");
       scanf("%s", &(ptr+i)->PlanName);
       
       
       printf("Enter Monthly Rent: \n");
       scanf("%s ", &(ptr+i)->MonthlyRent);
       
       printf("Enter Free Internet: \n");
       scanf("%s ", &(ptr+i)->FreeInternet);
       
       printf("Enter Free Calls: \n");
       scanf("%s ", &(ptr+i)->FreeCalls);
       
       printf("Enter Free Sms: \n");
       scanf("%s ", &(ptr+i)->FreeSms);
       
       printf("Enter Call Charges: \n");
       scanf("%s ", &(ptr+i)->CallCharges);
       
       printf("Enter Sms Charges: \n");
       scanf("%s ", &(ptr+i)->SmsCharges);
   }

   printf("Displaying Information of Plans:\n");

      
   for(i = 0; i < noOfPlans ; ++i)
    { 
        printf("\n");    
        
      printf("PlanName : %s\n", (ptr+i)->PlanName);
      printf("MonthlyRent : %s\n", (ptr+i)->MonthlyRent);
      printf("FreeInternet : %s\n", (ptr+i)->FreeInternet);
      printf("FreeCalls : %s\n", (ptr+i)->FreeCalls);
      printf("FreeSms : %s\n", (ptr+i)->FreeSms);
      printf("CallCharges : %s\n", (ptr+i)->CallCharges);
      printf("SmsCharges : %s\n", (ptr+i)->SmsCharges);
      printf("DataCharges : %s\n", (ptr+i)->DataCharges);
      printf("RoamingCharges :  %s\n", (ptr+i)->RoamingCharges);
    }
    
    
    
   return 0;
}
