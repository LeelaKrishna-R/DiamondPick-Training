#include <stdio.h>
#include <string.h>
int main()
{
    char destination[100];
    int tfee;
    printf("Welcome to Intercity ~!\nPlease enter your destination:\n");
    scanf("%s", destination);
    
    if(strcmp(destination, "chennai")==0) {
        tfee=500;
    }
    else if(strcmp(destination, "madurai")==0) {
        tfee=1000;
    }
    else if(strcmp(destination, "hyderabad")==0) {
         tfee=1500;
    }
    else {
        printf("Intercity is only offering its services to chennai, madurai and hyderabad routes.\nSorry to disappoint you passenger.");
        return 0;
    }
    int tcount;
    char pname[100];
    char berth[50];
    char atmos[50];
    char bpos[50];
    printf("Enter your name:\n");
    scanf("%s", pname);
    printf("Enter how many tickets would you like to book?\n");
    scanf("%d", &tcount);
    printf("Which beth would you prefer? (ac/nonac)?\n");
    scanf("%s", atmos);
    printf("Which one do you prefer? (sleeper/seater)\n");
    scanf("%s", berth);
    printf("Select your berth position? (lower/upper)\n");
    scanf("%s", bpos);
    
    int afee, bfee, bposfee;
    if(strcmp(berth, "sleeper")==0) {
        bfee=1000;
    }
    else {
        bfee = 500;
    }
    
    if(strcmp(atmos, "ac")==0) {
        afee=500;
    } 
    else {
        afee = 200;
    }
    
    if(strcmp(bpos, "lower") ==0) {
        bposfee = 300;
    }
    else {
        bposfee = 500;
    }
    int total, finalamt;
    total = tfee+afee+bfee+bposfee;
    finalamt = total*tcount;
    printf("\n\n============================\n");
    printf("Booking successfull...\n");
    printf("============================\n");
    printf("Ticket Details:\n");
    printf("Passenger name: %s\n", pname);
    printf("Destination: %s\n", destination);
    printf("Total tickets: %d\n", tcount);
    printf("============================\n");
    printf("Seat Details:\n");
    printf("============================\n");
    printf("Berth: %s\n", berth);
    printf("Type: %s\n", atmos);
    printf("Position: %s\n", bpos);
    printf("============================\n");
    printf("Fare Details:\n");
    printf("============================\n");
    printf("journey fare:₹ %d\n", tfee);
    printf("berth fare: ₹ %d\n", bfee);
    printf("coach fare: ₹ %d\n", afee);
    printf("berth pos fee: ₹ %d\n", bposfee);
    printf("============================\n");
    printf("Summary:\n");
    printf("============================\n");
    printf("Ticket cost per person: \n₹ %d\n", total);
    printf("Total billing amount:\n₹ %d\n", finalamt);
    printf("============================\n");
    printf("Thank you for chosing Intercity to travel, We hope you have a pleasent journey,,\nWe advise you to reach your destination 15min prior.");
    return 0;
}
