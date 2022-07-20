#include <stdio.h>
#include <string.h>

int main()
{
    int tnum,tosearch;
    printf("Enter train number:\n");
    scanf("%d", &tnum);
    tosearch=tnum;
   
    //all trains running today
    int alltrains[] = {12121, 13131, 15151, 16161, 17171};
    int len = sizeof alltrains / sizeof alltrains[0];
    int trainfound = 0;
        for (int i = 0; i < len; i++) {
        if (alltrains[i] == tnum) {
            trainfound = 1;
            break;
        }
    }
    if(!trainfound) {
        printf("I couldnt find any train with %d as its number", tnum);
        return 0;
    }
    else {
        int tcount, tfare, fcount, ffare, ccount;
       
        char berth[20], coach[20], food[50];
        printf("Input no of tickets you'd like to book today? (adults only)\n");
        scanf("%d", &tcount);
       
        printf("Input no of child passengers\n");
        scanf("%d", &ccount);
       
        printf("Input berth type (sleeper/seater)\n");
        scanf("%s", berth);
       
        printf("Input coach type (ac/nonac)\n");
        scanf("%s", coach);
       
        printf("Would you like to order any food? (Pass 'none' if you dont want to order food.)\nFood Menu: pasta, noodles, tea, chapathi, daal, rice\n");
        scanf("%s", food);
       
        printf("How many pieces of %s food would you like to order?\n(Input '0' if you have selected 'none' above.)\n", food);

        scanf("%d", &fcount);
       
        //per ticket fares pre defined
        int ac_sleeper_fare = 300;
        int ac_seater_fare = 200;
        int nonac_sleeper_fare = 180;
        int nonac_seater_fare = 120;
       
        //pre-defined food cost
        int cost_pasta = 100;
        int cost_noodles = 80;
        int cost_tea = 20;
        int cost_chapathi = 50;
        int cost_daal = 40;
        int cost_rice = 60;
       
        if(strcmp(berth, "sleeper") ==0 && strcmp(coach, "ac")==0) {
            tfare = ac_sleeper_fare*tcount + (ac_sleeper_fare*ccount)*0.25;
        }
        else if(strcmp(berth, "sleeper")==0 && strcmp(coach, "nonac")==0) {
            tfare = ac_seater_fare*tcount + (ac_seater_fare*ccount)*0.25;
        }
        else if(strcmp(berth, "seater")==0 && strcmp(coach, "ac")==0) {
            tfare = nonac_seater_fare*tcount + (nonac_seater_fare*ccount)*0.25 ;
        }
        else if(strcmp(berth, "seater")==0 && strcmp(coach, "nonac")==0){
            tfare = nonac_sleeper_fare*tcount + (nonac_sleeper_fare*tcount)*0.25;
        }
        else{
            printf("You didn't pass valid input parameters to book a ticket.\n");
            return 0;
        }
        printf("==========================\nTicket Summary\n==========================\n");
        printf("Ticker fare for %d adults and %d children: ₹ %d\n", tcount, ccount, tfare);
        if(strcmp(food, "pasta") ==0) {
            ffare = cost_pasta*fcount;
        }
        else if(strcmp(food, "noodles") ==0) {
            ffare = cost_noodles*fcount;
        }
        else if(strcmp(food, "tea") ==0) {
            ffare = cost_tea*fcount;
        }
        else if(strcmp(food, "chapathi") ==0) {
            ffare = cost_chapathi*fcount;
        }
        else if(strcmp(food, "daal") ==0) {
            ffare = cost_daal*fcount;
        }
        else if(strcmp(food, "rice") ==0) {
            ffare = cost_rice*fcount;
        }
        else if(strcmp(food, "none")){
            ffare = 0;
        }
        else {
            ffare = 0;
        }

        printf("Ticker fare for %s food: ₹ %d\n", food, ffare);
        int total_fare = ffare+tfare;
        printf("Summary : \n₹ %d", total_fare);
        return 0;
    }
}
