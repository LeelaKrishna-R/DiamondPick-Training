//Taking every ticket price for every movie as standard 100rs..

#include <stdio.h>
#include <string.h>
int main()
{
    int movie;
    printf("Input a valid movie code from the list below:\n============\nList:\n============\n+ Spiderman: no way home - 101\n+ Ironman 3: 102\n+ Thor: love and thunder - 103\n+ The Incredible Hulk: 104\n+ Doctor Strange in the Multiverse of Madness: 105\n");
    scanf("%d", &movie);
    
    int allmovies[] = {101,102,103,104,105};
    int len = sizeof allmovies / sizeof allmovies[0];
    int found = 0;
        for (int i = 0; i < len; i++) {
        if (allmovies[i] == movie) {
            found = 1;
            break;
        }
    }
    
    if(found) {
    
      char dimension[10];
      printf("Which dimension would you like to select? (2d/3d)\n");
      scanf("%s", dimension);
    
    int tcount;
    printf("Input no of tickets would you like to book?\n");
    scanf("%d", &tcount);
    
    char snacks[500];
    printf("Would you like to order any snacks?\n[Menu: beverages, puff, popcorn,  sweetcorn, pizza]\nInput 'none' if you dont want any snacks\n");
    scanf("%s", snacks);
    
    int fcount;
    printf("How many %s would you like to order?\nInput '0' if you have selected none above\n", snacks);
    scanf("%d", &fcount);
    
    //ticket and food prices
    int tprice;
    if(strcmp(dimension, "2d")==0) {
        tprice=100;
    }
    else {
        tprice=200;
    }
    
    int pizzacost=150;
    int beveragecost = 30;
    int puffcost=20;
    int popcorncost=50;
    int sweetcorncost=15;
    
    int totalamt, ffare, tamt; 
    
           if(strcmp(snacks, "pizza") ==0) {
            ffare = pizzacost*fcount;
        }
        else if(strcmp(snacks, "beverages") ==0) {
            ffare = beveragecost*fcount;
        }
        else if(strcmp(snacks, "puff") ==0) {
            ffare = puffcost*fcount;
        }
        else if(strcmp(snacks, "popcorn") ==0) {
            ffare = popcorncost*fcount;
        }
        else if(strcmp(snacks, "sweetcorn") ==0) {
            ffare = sweetcorncost*fcount;
        }
        else if(strcmp(snacks, "none")){
            ffare = 0;
        }
        else {
            ffare = 0;
        }
        
        tamt=tcount*tprice;
        totalamt = tamt+ffare;
        printf("=================\nTicket Summary::\n-Tickets cost: ₹ %d\n-Total Tickets: %d\n-Selected Snacks: %s\n-Snacks cost: ₹ %d\n==================\nTotal amount: ₹ %d", tamt, tcount,snacks,ffare,totalamt);
        return 0;
    }
    else {
        printf("I couldn't find any results for that movie.. Try again later!");
        return 0;
    }
}
