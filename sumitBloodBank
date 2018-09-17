#include <stdio.h>
#include<stdlib.h>

struct donors
{
   char Name[300];
   char Age[300];
   char Address[500];
   char EmailId[100];
   char mobile[1000];
   char bloodGroup[100];
   char Gender[100];
   
};

int main()
{
   struct donors *ptr;
   int i, noOfRecords;
   printf("Enter number of Donors who want to donate blood: ");
   scanf("%d", &noOfRecords);

   // Allocates the memory for noOfRecords structures with pointer ptr pointing to the base address.
   ptr = (struct donors*) malloc (noOfRecords * sizeof(struct donors));

   for(i = 0; i < noOfRecords; ++i)
   {
       printf("Enter valid name of Donor: \n");
       scanf("%s", &(ptr+i)->Name);
       
       printf("Enter valid Age of Donor: \n");
       scanf("%s", &(ptr+i)->Age);
       
       printf("Enter valid Address of Donor: \n");
       scanf("%s", &(ptr+i)->Address);
       
       printf("Enter valid EmailId of Donor: \n");
       scanf("%s", &(ptr+i)->EmailId);
       
       printf("Enter valid mobile of Donor: \n");
       scanf("%s", &(ptr+i)->mobile);
       
       printf("Enter valid bloodGroup of Donor: \n");
       scanf("%s", &(ptr+i)->bloodGroup);
       
       printf("Enter valid Gender of Donor: \n");
       scanf("%s", &(ptr+i)->Gender);
   }

   printf("\n\n\nDisplaying Information of Donors:\n\n\n");

   for(i = 0; i < noOfRecords ; ++i)
    { printf("Name of donor is:%s\n", (ptr+i)->Name);
      printf("Age of donor is:%s\n", (ptr+i)->Age);
      printf("Address of donor is:%s\n", (ptr+i)->Address);
      printf("EmailId of donor is:%s\n", (ptr+i)->EmailId);
      printf("mobile of donor is:%s\n", (ptr+i)->mobile);
      printf("bloodGroup of donor is:%s\n", (ptr+i)->bloodGroup);
      printf("Gender of donor is:%s\n", (ptr+i)->Gender);
    }
    
   return 0;
}
