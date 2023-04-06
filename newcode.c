#include<stdio.h>
#include<string.h>

void fruits_and_vegetables(int item_select)
{  
    FILE *bill_item;
    int quantity;
    int total_price;
    switch (item_select)
    {
        case 101:
        bill_item=fopen("bill.txt","a");
        printf("Enter quantity of product: ");
        scanf("%d", &quantity);
        fprintf(bill_item,"The quantity for added product (mango) : %d\n",quantity);
        total_price=quantity*100;
        fprintf(bill_item,"The total price of mango is %d\n", total_price);
        printf("This item is added to the cart");
        fclose(bill_item);      
        break;

         case 102:
        bill_item=fopen("bill.txt","a");
        printf("Enter quantity of product: ");
        scanf("%d", &quantity);
        fprintf(bill_item,"The quantity for added product(apple) : %d\n",quantity); 
        total_price=quantity*80;
        fprintf(bill_item,"The total price of apple is %d\n", total_price);
        printf("This item is added to the cart");
        fclose(bill_item);      
        break;

        case 103:
        bill_item=fopen("bill.txt","a");
        printf("Enter quantity of product: ");
        scanf("%d", &quantity);
        fprintf(bill_item,"The quantity for added product(orange) : %d\n",quantity); 
        total_price=quantity*50;
        fprintf(bill_item,"The total price of orange is %d\n", total_price);
        printf("This item is added to the cart");
        fclose(bill_item);      
        break;

        case 104:
        bill_item=fopen("bill.txt","a");
        printf("Enter quantity of product: ");
        scanf("%d", &quantity);
        fprintf(bill_item,"The quantity for added product(banana per dozen) : %d\n",quantity); 
        total_price=quantity*20;
        fprintf(bill_item,"The total price of banana is %d\n", total_price);
        printf("This item is added to the cart");
        fclose(bill_item);      
        break;

        case 105:
        bill_item=fopen("bill.txt","a");
        printf("Enter quantity of product: ");
        scanf("%d", &quantity);
        fprintf(bill_item,"The quantity for added product(promogranent) : %d\n",quantity); 
        total_price=quantity*70;
        fprintf(bill_item,"The total price of promogranent is %d\n", total_price);
        printf("This item is added to the cart");
        fclose(bill_item);      
        break;

        case 106:
        bill_item=fopen("bill.txt","a");
        printf("Enter quantity of product: ");
        scanf("%d", &quantity);
        fprintf(bill_item,"The quantity for added product(custard apple) : %d\n",quantity); 
        total_price=quantity*90;
        fprintf(bill_item,"The total price of custard apple is %d\n", total_price);
        printf("This item is added to the cart");
        fclose(bill_item);      
        break;

        case 107:
        bill_item=fopen("bill.txt","a");
        printf("Enter quantity of product: ");
        scanf("%d", &quantity);
        fprintf(bill_item,"The quantity for added product(strawberry) : %d\n",quantity); 
        total_price=quantity*70;
        fprintf(bill_item,"The total price of strawberry is %d\n", total_price);
        printf("This item is added to the cart");
        fclose(bill_item);      
        break;

        case 108:
        bill_item=fopen("bill.txt","a");
        printf("Enter quantity of product: ");
        scanf("%d", &quantity);
        fprintf(bill_item,"The quantity for added product(cherry) : %d\n",quantity); 
        total_price=quantity*80;
        fprintf(bill_item,"The total price of cherry is %d\n", total_price);
        printf("This item is added to the cart");
        fclose(bill_item);      
        break;

        case 109:
        bill_item=fopen("bill.txt","a");
        printf("Enter quantity of product: ");
        scanf("%d", &quantity);
        fprintf(bill_item,"The quantity for added product(kiwi) : %d\n",quantity); 
        total_price=quantity*50;
        fprintf(bill_item,"The total price of kiwi is %d\n", total_price);
        printf("This item is added to the cart");
        fclose(bill_item);      
        break;

        case 110:
        bill_item=fopen("bill.txt","a");
        printf("Enter quantity of product: ");
        scanf("%d", &quantity);
        fprintf(bill_item,"The quantity for added product(brocolli) : %d\n",quantity); 
        total_price=quantity*65;
        fprintf(bill_item,"The total price of brocolli is %d\n", total_price);
        printf("This item is added to the cart");
        fclose(bill_item);      
        break;

        case 111:
        bill_item=fopen("bill.txt","a");
        printf("Enter quantity of product: ");
        scanf("%d", &quantity);
        fprintf(bill_item,"The quantity for added product(onion) : %d\n",quantity); 
        total_price=quantity*80;
        fprintf(bill_item,"The total price of onion is %d\n", total_price);
        printf("This item is added to the cart");
        fclose(bill_item);      
        break;

        case 112:
        bill_item=fopen("bill.txt","a");
        printf("Enter quantity of product: ");
        scanf("%d", &quantity);
        fprintf(bill_item,"The quantity for added product(potato) : %d\n",quantity); 
        total_price=quantity*40;
        fprintf(bill_item,"The total price of potato is %d\n", total_price);
        printf("This item is added to the cart");
        fclose(bill_item);      
        break;

        case 113:
        bill_item=fopen("bill.txt","a");
        printf("Enter quantity of product: ");
        scanf("%d", &quantity);
        fprintf(bill_item,"The quantity for added product(tomato) : %d\n",quantity); 
        total_price=quantity*50;
        fprintf(bill_item,"The total price of tomato is %d\n", total_price);
        printf("This item is added to the cart");
        fclose(bill_item);      
        break;

        case 114:
        bill_item=fopen("bill.txt","a");
        printf("Enter quantity of product: ");
        scanf("%d", &quantity);
        fprintf(bill_item,"The quantity for added product(peas) : %d\n",quantity); 
        total_price=quantity*30;
        fprintf(bill_item,"The total price of peas is %d\n", total_price);
        printf("This item is added to the cart");
        fclose(bill_item);      
        break;

        case 115:
        bill_item=fopen("bill.txt","a");
        printf("Enter quantity of product: ");
        scanf("%d", &quantity);
        fprintf(bill_item,"The quantity for added product(brinjal) : %d\n",quantity); 
        total_price=quantity*20;
        fprintf(bill_item,"The total price of brinjal is %d\n", total_price);
        printf("This item is added to the cart");
        fclose(bill_item);      
        break;

        case 116:
        bill_item=fopen("bill.txt","a");
        printf("Enter quantity of product: ");
        scanf("%d", &quantity);
        fprintf(bill_item,"The quantity for added product(okra) : %d\n",quantity); 
        total_price=quantity*30;
        fprintf(bill_item,"The total price of okra is %d\n", total_price);
        printf("This item is added to the cart");
        fclose(bill_item);      
        break;

        case 117:
        bill_item=fopen("bill.txt","a");
        printf("Enter quantity of product: ");
        scanf("%d", &quantity);
        fprintf(bill_item,"The quantity for added product(beans) : %d\n",quantity); 
        total_price=quantity*50;
        fprintf(bill_item,"The total price of beans is %d\n", total_price);
        printf("This item is added to the cart");
        fclose(bill_item);      
        break;

        case 118:
        bill_item=fopen("bill.txt","a");
        printf("Enter quantity of product: ");
        scanf("%d", &quantity);
        fprintf(bill_item,"The quantity for added product(cucumber)) : %d\n",quantity); 
        total_price=quantity*40;
        fprintf(bill_item,"The total price of cucumber is %d\n", total_price);
        printf("This item is added to the cart");
        fclose(bill_item);      
        break;

        case 119:
        bill_item=fopen("bill.txt","a");
        printf("Enter quantity of product: ");
        scanf("%d", &quantity);
        fprintf(bill_item,"The quantity for added product(carrot) : %d\n",quantity); 
        total_price=quantity*60;
        fprintf(bill_item,"The total price of carrot is %d\n", total_price);
        printf("This item is added to the cart");
        fclose(bill_item);      
        break;

        case 120:
        bill_item=fopen("bill.txt","a");
        printf("Enter quantity of product: ");
        scanf("%d", &quantity);
        fprintf(bill_item,"The quantity for added product(raddish) : %d\n",quantity); 
        total_price=quantity*50;
        fprintf(bill_item,"The total price of raddish is %d\n", total_price);
        printf("This item is added to the cart");
        fclose(bill_item);      
        break;
        
        case 121:
        default:
        printf("invalid input");
        break;
    }
}

void detergents_function(int item_select2)
{  
    FILE *bill_item2;
    int quantity;
    int total_price;

    switch (item_select2)
    {
        case 201:
        bill_item2=fopen("bill.txt","a");
        printf("Enter quantity of product: ");
        scanf("%d", &quantity);
        fprintf(bill_item2,"The quantity for added product (surf excel-easy wash) : %d\n",quantity);
        total_price=quantity*367;
        fprintf(bill_item2,"The total price of surf excel-easy wash is %d\n", total_price);
        printf("This item is added to the cart");
        fclose(bill_item2);      
        break;

        case 202:
        bill_item2=fopen("bill.txt","a");
        printf("Enter quantity of product: ");
        scanf("%d", &quantity);
        fprintf(bill_item2,"The quantity for added product (wheel-lemon wash) : %d\n",quantity);
        total_price=quantity * 52;
        fprintf(bill_item2,"The total price of wheel-lemon wash is %d\n", total_price);
        printf("This item is added to the cart");
        fclose(bill_item2);      
        break;
        
        case 203:
        bill_item2=fopen("bill.txt","a");
        printf("Enter quantity of product: ");
        scanf("%d", &quantity);
        fprintf(bill_item2,"The quantity for added product (surf excel-matic wash) : %d\n",quantity);
        total_price=quantity* 279;
        fprintf(bill_item2,"The total price of surf excel-matic wash is %d\n", total_price);
        printf("This item is added to the cart");
        fclose(bill_item2);      
        break;
        
        case 204:
        bill_item2=fopen("bill.txt","a");
        printf("Enter quantity of product: ");
        scanf("%d", &quantity);
        fprintf(bill_item2,"The quantity for added product (surf excel-quick wash) : %d\n",quantity);
        total_price=quantity*350;
        fprintf(bill_item2,"The total price of surf excel-quick wash is %d\n", total_price);
        printf("This item is added to the cart");
        fclose(bill_item2);      
        break;
        
        case 205:
        bill_item2=fopen("bill.txt","a");
        printf("Enter quantity of product: ");
        scanf("%d", &quantity);
        fprintf(bill_item2,"The quantity for added product (tide powder) : %d\n",quantity);
        total_price=quantity*58;
        fprintf(bill_item2,"The total price of tide powder is %d\n", total_price);
        printf("This item is added to the cart");
        fclose(bill_item2);      
        break;
        
        case 206:
        bill_item2=fopen("bill.txt","a");
        printf("Enter quantity of product: ");
        scanf("%d", &quantity);
        fprintf(bill_item2,"The quantity for added product (rin powder) : %d\n",quantity);
        total_price=quantity*73;
        fprintf(bill_item2,"The total price of rin powder is %d\n", total_price);
        printf("This item is added to the cart");
        fclose(bill_item2);      
        break;
 
        break;
        case 21:
        default:
        printf("invalid input");
        break;
    }
}

void cleaners_function(int item_select3)
{  
    FILE *bill_item3;
    int quantity;
    int total_price;
    switch (item_select3)
    {
        case 207:
        bill_item3=fopen("bill.txt","a");
        printf("Enter quantity of product: ");
        scanf("%d", &quantity);
        fprintf(bill_item3,"The quantity for added product (HARPIC-DISINFECTANT TOILET CLEANER) : %d\n",quantity);
        total_price=quantity*223;
        fprintf(bill_item3,"The total price of HARPIC-DISINFECTANT TOILET CLEANER is %d\n", total_price);
        printf("This item is added to the cart");
        fclose(bill_item3);      
        break;

        case 208:
        bill_item3=fopen("bill.txt","a");
        printf("Enter quantity of product: ");
        scanf("%d", &quantity);
        fprintf(bill_item3,"The quantity for added product (LIZOL-KITCHEN CLEANER) : %d\n",quantity);
        total_price=quantity*83;
        fprintf(bill_item3,"The total price of LIZOL-KITCHEN CLEANER is %d\n", total_price);
        printf("This item is added to the cart");
        fclose(bill_item3);      
        break;

        case 209:
        bill_item3=fopen("bill.txt","a");
        printf("Enter quantity of product: ");
        scanf("%d", &quantity);
        fprintf(bill_item3,"The quantity for added product (LIME-FLOOR CLEANER ) : %d\n",quantity);
        total_price=quantity*70;
        fprintf(bill_item3,"The total price of LIME-FLOOR CLEANER  is %d\n", total_price);
        printf("This item is added to the cart");
        fclose(bill_item3);      
        break;

        case 210:
        bill_item3=fopen("bill.txt","a");
        printf("Enter quantity of product: ");
        scanf("%d", &quantity);
        fprintf(bill_item3,"The quantity for added product (NEEM-FLOOR CLEANER) : %d\n",quantity);
        total_price=quantity*85;
        fprintf(bill_item3,"The total price of NEEM-FLOOR CLEANER is %d\n", total_price);
        printf("This item is added to the cart");
        fclose(bill_item3);      
        break;
 
        break;
        case 21:
        default:
        printf("invalid input");
        break;
    }
}

void dishwasher_function(int item_select4)
{  
    FILE *bill_item4;
    int quantity;
    int total_price;
    switch (item_select4)
    {
        case 211:
        bill_item4=fopen("bill.txt","a");
        printf("Enter quantity of product: ");
        scanf("%d", &quantity);
        fprintf(bill_item4,"The quantity for added product (vim-liquid gel) : %d\n",quantity);
        total_price=quantity*98;
        fprintf(bill_item4,"The total price of vim-liquid gel is %d\n", total_price);
        printf("This item is added to the cart");
        fclose(bill_item4);      
        break;
 
        case 212:
        bill_item4=fopen("bill.txt","a");
        printf("Enter quantity of product: ");
        scanf("%d", &quantity);
        fprintf(bill_item4,"The quantity for added product (exo-touch gel) : %d\n",quantity);
        total_price=quantity*224;
        fprintf(bill_item4,"The total price of exo-touch gel is %d\n", total_price);
        printf("This item is added to the cart");
        fclose(bill_item4);      
        break;
        
        case 213:
        bill_item4=fopen("bill.txt","a");
        printf("Enter quantity of product: ");
        scanf("%d", &quantity);
        fprintf(bill_item4,"The quantity for added product (prill-lime gel) : %d\n",quantity);
        total_price=quantity*330;
        fprintf(bill_item4,"The total price of prill-lime gel is %d\n", total_price);
        printf("This item is added to the cart");
        fclose(bill_item4);      
        break;
        
        case 214:
        bill_item4=fopen("bill.txt","a");
        printf("Enter quantity of product: ");
        scanf("%d", &quantity);
        fprintf(bill_item4,"The quantity for added product (giffy-lemon gel) : %d\n",quantity);
        total_price=quantity*209;
        fprintf(bill_item4,"The total price of giffy-lemon gel is %d\n", total_price);
        printf("This item is added to the cart");
        fclose(bill_item4);      
        break;
        
        case 215:
        bill_item4=fopen("bill.txt","a");
        printf("Enter quantity of product: ");
        scanf("%d", &quantity);
        fprintf(bill_item4,"The quantity for added product (godrej germ protection gel) : %d\n",quantity);
        total_price=quantity*331;
        fprintf(bill_item4,"The total price of godrej germ protection gel is %d\n", total_price);
        printf("This item is added to the cart");
        fclose(bill_item4);      
        break;
        
        case 21:
        default:
        printf("invalid input");
        break;
    }
}

void home_and_car_freshners_function(int item_select5)
{  
    FILE *bill_item5;
    int quantity;
    int total_price;
    switch (item_select5)
    {
        case 216:
        bill_item5=fopen("bill.txt","a");
        printf("Enter quantity of product: ");
        scanf("%d", &quantity);
        fprintf(bill_item5,"The quantity for added product (car freshner) : %d\n",quantity);
        total_price=quantity*339;
        fprintf(bill_item5,"The total price of car freshner is %d\n", total_price);
        printf("This item is added to the cart");
        fclose(bill_item5);      
        break;
        
        case 217:
        bill_item5=fopen("bill.txt","a");
        printf("Enter quantity of product: ");
        scanf("%d", &quantity);
        fprintf(bill_item5,"The quantity for added product (car wash) : %d\n",quantity);
        total_price=quantity*60;
        fprintf(bill_item5,"The total price of car wash is %d\n", total_price);
        printf("This item is added to the cart");
        fclose(bill_item5);      
        break;
        
        case 218:
        bill_item5=fopen("bill.txt","a");
        printf("Enter quantity of product: ");
        scanf("%d", &quantity);
        fprintf(bill_item5,"The quantity for added product (car liquid polish) : %d\n",quantity);
        total_price=quantity*72;
        fprintf(bill_item5,"The total price of car liquid polish is %d\n", total_price);
        printf("This item is added to the cart");
        fclose(bill_item5);      
        break;
        
        case 219:
        bill_item5=fopen("bill.txt","a");
        printf("Enter quantity of product: ");
        scanf("%d", &quantity);
        fprintf(bill_item5,"The quantity for added product (room freshner) : %d\n",quantity);
        total_price=quantity*75;
        fprintf(bill_item5,"The total price of room freshner is %d\n", total_price);
        printf("This item is added to the cart");
        fclose(bill_item5);      
        break;
        
        case 220:
        bill_item5=fopen("bill.txt","a");
        printf("Enter quantity of product: ");
        scanf("%d", &quantity);
        fprintf(bill_item5,"The quantity for added product (room freshner spray) : %d\n",quantity);
        total_price=quantity*187;
        fprintf(bill_item5,"The total price of room freshner spray is %d\n", total_price);
        printf("This item is added to the cart");
        fclose(bill_item5);      
        break;
        
        case 21:
        default:
        printf("invalid input");
        break;
    }
}

void coffee_function(int item_select6)
{  
    FILE *bill_item6;
    int quantity;
    int total_price;
    switch (item_select6)
    {
        case 301:
        bill_item6=fopen("bill.txt","a");
        printf("Enter quantity of product: ");
        scanf("%d", &quantity);
        fprintf(bill_item6,"The quantity for added product (NESCAFE INSTANT COFFEE) : %d\n",quantity);
        total_price=quantity*302;
        fprintf(bill_item6,"The total price of NESCAFE INSTANT COFFEE is %d\n", total_price);
        printf("This item is added to the cart");
        fclose(bill_item6);      
        break;
        
        case 302:
        bill_item6=fopen("bill.txt","a");
        printf("Enter quantity of product: ");
        scanf("%d", &quantity);
        fprintf(bill_item6,"The quantity for added product (BRU INSTANT COFFEE) : %d\n",quantity);
        total_price=quantity*288;
        fprintf(bill_item6,"The total price of BRU INSTANT COFFEE is %d\n", total_price);
        printf("This item is added to the cart");
        fclose(bill_item6);      
        break;

        case 303:
        bill_item6=fopen("bill.txt","a");
        printf("Enter quantity of product: ");
        scanf("%d", &quantity);
        fprintf(bill_item6,"The quantity for added product (BRU FILTER COFFEE) : %d\n",quantity);
        total_price=quantity*130;
        fprintf(bill_item6,"The total price of BRU FILTER COFFEE is %d\n", total_price);
        printf("This item is added to the cart");
        fclose(bill_item6);      
        break;

        case 304:
        bill_item6=fopen("bill.txt","a");
        printf("Enter quantity of product: ");
        scanf("%d", &quantity);
        fprintf(bill_item6,"The quantity for added product (COTHAS COFFEE) : %d\n",quantity);
        total_price=quantity*207;
        fprintf(bill_item6,"The total price of COTHAS COFFEE is %d\n", total_price);
        printf("This item is added to the cart");
        fclose(bill_item6);      
        break;

        case 305:
        bill_item6=fopen("bill.txt","a");
        printf("Enter quantity of product: ");
        scanf("%d", &quantity);
        fprintf(bill_item6,"The quantity for added product (SUNRISE INSTANT COFFEE) : %d\n",quantity);
        total_price=quantity*68;
        fprintf(bill_item6,"The total price of SUNRISE INSTANT COFFEE is %d\n", total_price);
        printf("This item is added to the cart");
        fclose(bill_item6);      
        break;

        case 306:
        bill_item6=fopen("bill.txt","a");
        printf("Enter quantity of product: ");
        scanf("%d", &quantity);
        fprintf(bill_item6,"The quantity for added product (GRAND FILTER COFFEE) : %d\n",quantity);
        total_price=quantity*31;
        fprintf(bill_item6,"The total price of GRAND FILTER COFFEE is %d\n", total_price);
        printf("This item is added to the cart");
        fclose(bill_item6);      
        break;

        case 307:
        bill_item6=fopen("bill.txt","a");
        printf("Enter quantity of product: ");
        scanf("%d", &quantity);
        fprintf(bill_item6,"The quantity for added product (GOLD INSTANT COFFEE) : %d\n",quantity);
        total_price=quantity*246;
        fprintf(bill_item6,"The total price of GOLD INSTANT COFFEE is %d\n", total_price);
        printf("This item is added to the cart");
        fclose(bill_item6);      
        break;
        
        case 21:
        default:
        printf("invalid input");
        break;
    }
}

void tea_function(int item_select7)
{  
    FILE *bill_item7;
    int quantity;
    int total_price;
    switch (item_select7)
    {
        case 308:
        bill_item7=fopen("bill.txt","a");
        printf("Enter quantity of product: ");
        scanf("%d", &quantity);
        fprintf(bill_item7,"The quantity for added product (red label-nature care tea) : %d\n",quantity);
        total_price=quantity * 264;
        fprintf(bill_item7,"The total price of red label-nature care tea is %d\n", total_price);
        printf("This item is added to the cart");
        fclose(bill_item7);      
        break;
        
        case 309:
        bill_item7=fopen("bill.txt","a");
        printf("Enter quantity of product: ");
        scanf("%d", &quantity);
        fprintf(bill_item7,"The quantity for added product (tata tea gold) : %d\n",quantity);
        total_price=quantity*530;
        fprintf(bill_item7,"The total price of tata tea gold is %d\n", total_price);
        printf("This item is added to the cart");
        fclose(bill_item7);      
        break;
        
        case 310:
        bill_item7=fopen("bill.txt","a");
        printf("Enter quantity of product: ");
        scanf("%d", &quantity);
        fprintf(bill_item7,"The quantity for added product (taj mahal-tea) : %d\n",quantity);
        total_price=quantity*630;
        fprintf(bill_item7,"The total price of taj mahal-tea is %d\n", total_price);
        printf("This item is added to the cart");
        fclose(bill_item7);      
        break;
        
        case 311:
        bill_item7=fopen("bill.txt","a");
        printf("Enter quantity of product: ");
        scanf("%d", &quantity);
        fprintf(bill_item7,"The quantity for added product (tata tea) : %d\n",quantity);
        total_price=quantity*476;
        fprintf(bill_item7,"The total price of tata tea is %d\n", total_price);
        printf("This item is added to the cart");
        fclose(bill_item7);      
        break;
        
        case 312:
        bill_item7=fopen("bill.txt","a");
        printf("Enter quantity of product: ");
        scanf("%d", &quantity);
        fprintf(bill_item7,"The quantity for added product (lipton green tea) : %d\n",quantity);
        total_price=quantity*135;
        fprintf(bill_item7,"The total price of lipton green tea is %d\n", total_price);
        printf("This item is added to the cart");
        fclose(bill_item7);      
        break;
        
        case 313:
        bill_item7=fopen("bill.txt","a");
        printf("Enter quantity of product: ");
        scanf("%d", &quantity);
        fprintf(bill_item7,"The quantity for added product (tata green tea) : %d\n",quantity);
        total_price=quantity*450;
        fprintf(bill_item7,"The total price of tata green tea is %d\n", total_price);
        printf("This item is added to the cart");
        fclose(bill_item7);      
        break;
        
        case 314:
        bill_item7=fopen("bill.txt","a");
        printf("Enter quantity of product: ");
        scanf("%d", &quantity);
        fprintf(bill_item7,"The quantity for added product (premium leaf tea) : %d\n",quantity);
        total_price=quantity*500;
        fprintf(bill_item7,"The total price of premium leaf tea is %d\n", total_price);
        printf("This item is added to the cart");
        fclose(bill_item7);      
        break;

        case 21:
        default:
        printf("invalid input");
        break;
    }
}

void juices_function(int item_select8)
{  
    FILE *bill_item8;
    int quantity;
    int total_price;
    switch (item_select8)
    {
        case 315:
        bill_item8=fopen("bill.txt","a");
        printf("Enter quantity of product: ");
        scanf("%d", &quantity);
        fprintf(bill_item8,"The quantity for added product (orange juice) : %d\n",quantity);
        total_price=quantity*15;
        fprintf(bill_item8,"The total price of orange juice is %d\n", total_price);
        printf("This item is added to the cart");
        fclose(bill_item8);      
        break;
        
        case 316:
        bill_item8=fopen("bill.txt","a");
        printf("Enter quantity of product: ");
        scanf("%d", &quantity);
        fprintf(bill_item8,"The quantity for added product ( apple juice) : %d\n",quantity);
        total_price=quantity*15;
        fprintf(bill_item8,"The total price of apple juice is %d\n", total_price);
        printf("This item is added to the cart");
        fclose(bill_item8);      
        break;
        
        case 317:
        bill_item8=fopen("bill.txt","a");
        printf("Enter quantity of product: ");
        scanf("%d", &quantity);
        fprintf(bill_item8,"The quantity for added product (mango juice) : %d\n",quantity);
        total_price=quantity*15;
        fprintf(bill_item8,"The total price of mango juice is %d\n", total_price);
        printf("This item is added to the cart");
        fclose(bill_item8);      
        break;
        
        case 318:
        bill_item8=fopen("bill.txt","a");
        printf("Enter quantity of product: ");
        scanf("%d", &quantity);
        fprintf(bill_item8,"The quantity for added product (pineapple juice) : %d\n",quantity);
        total_price=quantity*17;
        fprintf(bill_item8,"The total price of pineapple juice is %d\n", total_price);
        printf("This item is added to the cart");
        fclose(bill_item8);      
        break;
        
        case 319:
        bill_item8=fopen("bill.txt","a");
        printf("Enter quantity of product: ");
        scanf("%d", &quantity);
        fprintf(bill_item8,"The quantity for added product (pomogranate juice) : %d\n",quantity);
        total_price=quantity*19;
        fprintf(bill_item8,"The total price of pomogranate juice is %d\n", total_price);
        printf("This item is added to the cart");
        fclose(bill_item8);      
        break;
        
        case 320:
        bill_item8=fopen("bill.txt","a");
        printf("Enter quantity of product: ");
        scanf("%d", &quantity);
        fprintf(bill_item8,"The quantity for added product (lemon juice) : %d\n",quantity);
        total_price=quantity*13;
        fprintf(bill_item8,"The total price of lemon juice is %d\n", total_price);
        printf("This item is added to the cart");
        fclose(bill_item8);      
        break;
        
        case 321:
        bill_item8=fopen("bill.txt","a");
        printf("Enter quantity of product: ");
        scanf("%d", &quantity);
        fprintf(bill_item8,"The quantity for added product (cranberry juice) : %d\n",quantity);
        total_price=quantity*14;
        fprintf(bill_item8,"The total price of cranberry juice is %d\n", total_price);
        printf("This item is added to the cart");
        fclose(bill_item8);      
        break;

        case 21:
        default:
        printf("invalid input");
        break;
    }
}

void milk_function(int item_select9)
{  
    FILE *bill_item9;
    int quantity;
    int total_price;
    switch (item_select9)
    {
        case 322:
        bill_item9=fopen("bill.txt","a");
        printf("Enter quantity of product: ");
        scanf("%d", &quantity);
        fprintf(bill_item9,"The quantity for added product (full cream milk) : %d\n",quantity);
        total_price=quantity*100;
        fprintf(bill_item9,"The total price of full cream milk is %d\n", total_price);
        printf("This item is added to the cart");
        fclose(bill_item9);      
        break;
        
        case 323:
        bill_item9=fopen("bill.txt","a");
        printf("Enter quantity of product: ");
        scanf("%d", &quantity);
        fprintf(bill_item9,"The quantity for added product (single toned milk) : %d\n",quantity);
        total_price=quantity*100;
        fprintf(bill_item9,"The total price of single toned milk is %d\n", total_price);
        printf("This item is added to the cart");
        fclose(bill_item9);      
        break;
        
        case 324:
        bill_item9=fopen("bill.txt","a");
        printf("Enter quantity of product: ");
        scanf("%d", &quantity);
        fprintf(bill_item9,"The quantity for added product (double milk) : %d\n",quantity);
        total_price=quantity*100;
        fprintf(bill_item9,"The total price of double milk is %d\n", total_price);
        printf("This item is added to the cart");
        fclose(bill_item9);      
        break;
        
        case 325:
        bill_item9=fopen("bill.txt","a");
        printf("Enter quantity of product: ");
        scanf("%d", &quantity);
        fprintf(bill_item9,"The quantity for added product (skimmed milk) : %d\n",quantity);
        total_price=quantity*100;
        fprintf(bill_item9,"The total price of skimmed milk is %d\n", total_price);
        printf("This item is added to the cart");
        fclose(bill_item9);      
        break;
        
        case 326:
        bill_item9=fopen("bill.txt","a");
        printf("Enter quantity of product: ");
        scanf("%d", &quantity);
        fprintf(bill_item9,"The quantity for added product (almond milk) : %d\n",quantity);
        total_price=quantity*100;
        fprintf(bill_item9,"The total price of almond milk is %d\n", total_price);
        printf("This item is added to the cart");
        fclose(bill_item9);      
        break;

        case 21:
        default:
        printf("invalid input");
        break;
    }
}

void dairy_and_bread_function(int item_select10)
{  

    FILE *bill_item10;
    int quantity;
    int total_price;
    switch (item_select10)
    {
        case 401:
        bill_item10=fopen("bill.txt","a");
        printf("Enter quantity of product: ");
        scanf("%d", &quantity);
        fprintf(bill_item10,"The quantity for added product (AMUL CHEESE ) : %d\n",quantity);
        total_price=quantity*110;
        fprintf(bill_item10,"The total price of AMUL CHEESE  is %d\n", total_price);
        printf("This item is added to the cart");
        fclose(bill_item10);      
        break;

        case 402:
        bill_item10=fopen("bill.txt","a");
        printf("Enter quantity of product: ");
        scanf("%d", &quantity);
        fprintf(bill_item10,"The quantity for added product (AMUL BUTTER ) : %d\n",quantity);
        total_price=quantity*39;
        fprintf(bill_item10,"The total price of AMUL BUTTER  is %d\n", total_price);
        printf("This item is added to the cart");
        fclose(bill_item10);      
        break;

        case 403:
        bill_item10=fopen("bill.txt","a");
        printf("Enter quantity of product: ");
        scanf("%d", &quantity);
        fprintf(bill_item10,"The quantity for added product (AMUL BUTTERMILK ) : %d\n",quantity);
        total_price=quantity*21;
        fprintf(bill_item10,"The total price of AMUL BUTTERMILK  is %d\n", total_price);
        printf("This item is added to the cart");
        fclose(bill_item10);      
        break;

        case 404:
        bill_item10=fopen("bill.txt","a");
        printf("Enter quantity of product: ");
        scanf("%d", &quantity);
        fprintf(bill_item10,"The quantity for added product (AMUL YOGURT ) : %d\n",quantity);
        total_price=quantity*16;
        fprintf(bill_item10,"The total price of AMUL YOGURT  is %d\n", total_price);
        printf("This item is added to the cart");
        fclose(bill_item10);      
        break;

        case 405:
        bill_item10=fopen("bill.txt","a");
        printf("Enter quantity of product: ");
        scanf("%d", &quantity);
        fprintf(bill_item10,"The quantity for added product (AMUL PANEER ) : %d\n",quantity);
        total_price=quantity*110;
        fprintf(bill_item10,"The total price of AMUL PANEER  is %d\n", total_price);
        printf("This item is added to the cart");
        fclose(bill_item10);      
        break;

        case 406:
        bill_item10=fopen("bill.txt","a");
        printf("Enter quantity of product: ");
        scanf("%d", &quantity);
        fprintf(bill_item10,"The quantity for added product (AMUL GHEE ) : %d\n",quantity);
        total_price=quantity*610;
        fprintf(bill_item10,"The total price of AMUL GHEE is %d\n", total_price);
        printf("This item is added to the cart");
        fclose(bill_item10);      
        break;

        case 407:
        bill_item10=fopen("bill.txt","a");
        printf("Enter quantity of product: ");
        scanf("%d", &quantity);
        fprintf(bill_item10,"The quantity for added product (BROWN BREAD ) : %d\n",quantity);
        total_price=quantity*47;
        fprintf(bill_item10,"The total price of BROWN BREAD is %d\n", total_price);
        printf("This item is added to the cart");
        fclose(bill_item10);      
        break;

        case 408:
        bill_item10=fopen("bill.txt","a");
        printf("Enter quantity of product: ");
        scanf("%d", &quantity);
        fprintf(bill_item10,"The quantity for added product (WHITE BREAD) : %d\n",quantity);
        total_price=quantity*38;
        fprintf(bill_item10,"The total price of WHITE BREAD is %d\n", total_price);
        printf("This item is added to the cart");
        fclose(bill_item10);      
        break;

        case 409:
        bill_item10=fopen("bill.txt","a");
        printf("Enter quantity of product: ");
        scanf("%d", &quantity);
        fprintf(bill_item10,"The quantity for added product (BURGER BUNS ) : %d\n",quantity);
        total_price=quantity*55;
        fprintf(bill_item10,"The total price of BURGER BUNS is %d\n", total_price);
        printf("This item is added to the cart");
        fclose(bill_item10);      
        break;

        case 410:
        bill_item10=fopen("bill.txt","a");
        printf("Enter quantity of product: ");
        scanf("%d", &quantity);
        fprintf(bill_item10,"The quantity for added product (MULTIGRAIN BREAD ) : %d\n",quantity);
        total_price=quantity*40;
        fprintf(bill_item10,"The total price of MULTIGRAIN BREAD is %d\n", total_price);
        printf("This item is added to the cart");
        fclose(bill_item10);      
        break;

        case 411:
        bill_item10=fopen("bill.txt","a");
        printf("Enter quantity of product: ");
        scanf("%d", &quantity);
        fprintf(bill_item10,"The quantity for added product (ATTA BREAD ) : %d\n",quantity);
        total_price=quantity*39;
        fprintf(bill_item10,"The total price of ATTA BREAD  is %d\n", total_price);
        printf("This item is added to the cart");
        fclose(bill_item10);      
        break;

        case 412:
        bill_item10=fopen("bill.txt","a");
        printf("Enter quantity of product: ");
        scanf("%d", &quantity);
        fprintf(bill_item10,"The quantity for added product (WHOLE WHEAT BREAD ) : %d\n",quantity);
        total_price=quantity*36;
        fprintf(bill_item10,"The total price of WHOLE WHEAT BREAD  is %d\n", total_price);
        printf("This item is added to the cart");
        fclose(bill_item10);      
        break;

        case 413:
        bill_item10=fopen("bill.txt","a");
        printf("Enter quantity of product: ");
        scanf("%d", &quantity);
        fprintf(bill_item10,"The quantity for added product (PIZZA BASE  ) : %d\n",quantity);
        total_price=quantity*31;
        fprintf(bill_item10,"The total price of PIZZA BASE  is %d\n", total_price);
        printf("This item is added to the cart");
        fclose(bill_item10);      
        break;

        case 414:
        bill_item10=fopen("bill.txt","a");
        printf("Enter quantity of product: ");
        scanf("%d", &quantity);
        fprintf(bill_item10,"The quantity for added product (PAV ) : %d\n",quantity);
        total_price=quantity*24;
        fprintf(bill_item10,"The total price of PAV  is %d\n", total_price);
        printf("This item is added to the cart");
        fclose(bill_item10);      
        break;

        case 415:
        bill_item10=fopen("bill.txt","a");
        printf("Enter quantity of product: ");
        scanf("%d", &quantity);
        fprintf(bill_item10,"The quantity for added product (SANDWICH BREAD ) : %d\n",quantity);
        total_price=quantity*27;
        fprintf(bill_item10,"The total price of SANDWICH BREAD  is %d\n", total_price);
        printf("This item is added to the cart");
        fclose(bill_item10);      
        break;
        
        case 21:
        default:
        printf("invalid input");
        break;
    }
}

void hair_care_function(int item_select11)
{  
    FILE *bill_item11;
    int quantity;
    int total_price;
    switch (item_select11)
    {
        case 501:
        bill_item11=fopen("bill.txt","a");
        printf("Enter quantity of product: ");
        scanf("%d", &quantity);
        fprintf(bill_item11,"The quantity for added product (dove shampoo) : %d\n",quantity);
        total_price=quantity*100;
        fprintf(bill_item11,"The total price of dove shampoo is %d\n", total_price);
        printf("This item is added to the cart");
        fclose(bill_item11);      
        break;
        
        case 502:
        bill_item11=fopen("bill.txt","a");
        printf("Enter quantity of product: ");
        scanf("%d", &quantity);
        fprintf(bill_item11,"The quantity for added product (garnier hair colour) : %d\n",quantity);
        total_price=quantity*100;
        fprintf(bill_item11,"The total price of garnier hair colour is %d\n", total_price);
        printf("This item is added to the cart");
        fclose(bill_item11);      
        break;
        
        case 503:
        bill_item11=fopen("bill.txt","a");
        printf("Enter quantity of product: ");
        scanf("%d", &quantity);
        fprintf(bill_item11,"The quantity for added product (navratana hair oil) : %d\n",quantity);
        total_price=quantity*100;
        fprintf(bill_item11,"The total price of navratana hair oil is %d\n", total_price);
        printf("This item is added to the cart");
        fclose(bill_item11);      
        break;
        
        case 504:
        bill_item11=fopen("bill.txt","a");
        printf("Enter quantity of product: ");
        scanf("%d", &quantity);
        fprintf(bill_item11,"The quantity for added product (dove hair conditioner) : %d\n",quantity);
        total_price=quantity*100;
        fprintf(bill_item11,"The total price of dove hair conditioner is %d\n", total_price);
        printf("This item is added to the cart");
        fclose(bill_item11);      
        break;
        
        case 505:
        bill_item11=fopen("bill.txt","a");
        printf("Enter quantity of product: ");
        scanf("%d", &quantity);
        fprintf(bill_item11,"The quantity for added product (almond hair oil) : %d\n",quantity);
        total_price=quantity*100;
        fprintf(bill_item11,"The total price of almond hair oil is %d\n", total_price);
        printf("This item is added to the cart");
        fclose(bill_item11);      
        break;

        case 21:
        default:
        printf("invalid input");
        break;
    }

    void skin_care_function(int item_select12)
{  
    FILE *bill_item12;
    int quantity;
    int total_price;
    switch (item_select12)
    {
        case 506:
        bill_item12=fopen("bill.txt","a");
        printf("Enter quantity of product: ");
        scanf("%d", &quantity);
        fprintf(bill_item12,"The quantity for added product (body lotion) : %d\n",quantity);
        total_price=quantity * 100;
        fprintf(bill_item12,"The total price of body lotion is %d\n", total_price);
        printf("This item is added to the cart");
        fclose(bill_item12);      
        break;
        
        case 507:
        bill_item12=fopen("bill.txt","a");
        printf("Enter quantity of product: ");
        scanf("%d", &quantity);
        fprintf(bill_item12,"The quantity for added product (face wash) : %d\n",quantity);
        total_price=quantity * 100;
        fprintf(bill_item12,"The total price of face wash is %d\n", total_price);
        printf("This item is added to the cart");
        fclose(bill_item12);      
        break;
        
        case 508:
        bill_item12=fopen("bill.txt","a");
        printf("Enter quantity of product: ");
        scanf("%d", &quantity);
        fprintf(bill_item12,"The quantity for added product (face cream) : %d\n",quantity);
        total_price=quantity * 100;
        fprintf(bill_item12,"The total price of face cream is %d\n", total_price);
        printf("This item is added to the cart");
        fclose(bill_item12);      
        break;
        
        case 509:
        bill_item12=fopen("bill.txt","a");
        printf("Enter quantity of product: ");
        scanf("%d", &quantity);
        fprintf(bill_item12,"The quantity for added product (lip care) : %d\n",quantity);
        total_price=quantity*100;
        fprintf(bill_item12,"The total price of lip care is %d\n", total_price);
        printf("This item is added to the cart");
        fclose(bill_item12);      
        break;
        
        case 510:
        bill_item12=fopen("bill.txt","a");
        printf("Enter quantity of product: ");
        scanf("%d", &quantity);
        fprintf(bill_item12,"The quantity for added product (neem face wash) : %d\n",quantity);
        total_price=quantity * 100;
        fprintf(bill_item12,"The total price of neem face wash is %d\n", total_price);
        printf("This item is added to the cart");
        fclose(bill_item12);      
        break;
        
        case 21:
        default:
        printf("invalid input");
        break;
    }
}
void oral_care_function(int item_select13)
{  
    FILE *bill_item13;
    int quantity;
    int total_price;
    switch (item_select13)
    {
        case 511:
        bill_item13=fopen("bill.txt","a");
        printf("Enter quantity of product: ");
        scanf("%d", &quantity);
        fprintf(bill_item13,"The quantity for added product (toothpaste) : %d\n",quantity);
        total_price=quantity*100;
        fprintf(bill_item13,"The total price of toothpaste is %d\n", total_price);
        printf("This item is added to the cart");
        fclose(bill_item13);      
        break;
        
        case 512:
        bill_item13=fopen("bill.txt","a");
        printf("Enter quantity of product: ");
        scanf("%d", &quantity);
        fprintf(bill_item13,"The quantity for added product (mouthwash) : %d\n",quantity);
        total_price=quantity*100;
        fprintf(bill_item13,"The total price of mouthwash is %d\n", total_price);
        printf("This item is added to the cart");
        fclose(bill_item13);      
        break;
        
        case 513:
        bill_item13=fopen("bill.txt","a");
        printf("Enter quantity of product: ");
        scanf("%d", &quantity);
        fprintf(bill_item13,"The quantity for added product (toothbrush) : %d\n",quantity);
        total_price=quantity*100;
        fprintf(bill_item13,"The total price of toothbrush is %d\n", total_price);
        printf("This item is added to the cart");
        fclose(bill_item13);      
        break;
        
        case 514:
        bill_item13=fopen("bill.txt","a");
        printf("Enter quantity of product: ");
        scanf("%d", &quantity);
        fprintf(bill_item13,"The quantity for added product (tongue cleaner) : %d\n",quantity);
        total_price=quantity*100;
        fprintf(bill_item13,"The total price of tongue cleaner is %d\n", total_price);
        printf("This item is added to the cart");
        fclose(bill_item13);      
        break;
        
        case 515:
        bill_item13=fopen("bill.txt","a");
        printf("Enter quantity of product: ");
        scanf("%d", &quantity);
        fprintf(bill_item13,"The quantity for added product (sensitive toothbrush) : %d\n",quantity);
        total_price=quantity*100;
        fprintf(bill_item13,"The total price of sensitive toothbrush is %d\n", total_price);
        printf("This item is added to the cart");
        fclose(bill_item13);      
        break;

        case 21:
        default:
        printf("invalid input");
        break;
    }
}
void perfumes_function(int item_select14)
{  
    FILE *bill_item14;
    int quantity;
    int total_price;

    switch (item_select14)
    {
        case 516:
        bill_item14=fopen("bill.txt","a");
        printf("Enter quantity of product: ");
        scanf("%d", &quantity);
        fprintf(bill_item14,"The quantity for added product (spinz deodorant) : %d\n",quantity);
        total_price=quantity*100;
        fprintf(bill_item14,"The total price of spinz deodorant is %d\n", total_price);
        printf("This item is added to the cart");
        fclose(bill_item14);      
        break;
        
        case 517:
        bill_item14=fopen("bill.txt","a");
        printf("Enter quantity of product: ");
        scanf("%d", &quantity);
        fprintf(bill_item14,"The quantity for added product (eva perfume) : %d\n",quantity);
        total_price=quantity*100;
        fprintf(bill_item14,"The total price of eva perfume is %d\n", total_price);
        printf("This item is added to the cart");
        fclose(bill_item14);      
        break;
        
        case 518:
        bill_item14=fopen("bill.txt","a");
        printf("Enter quantity of product: ");
        scanf("%d", &quantity);
        fprintf(bill_item14,"The quantity for added product (fogg perfume) : %d\n",quantity);
        total_price=quantity*100;
        fprintf(bill_item14,"The total price of fogg perfume is %d\n", total_price);
        printf("This item is added to the cart");
        fclose(bill_item14);      
        break;
        
        case 519:
        bill_item14=fopen("bill.txt","a");
        printf("Enter quantity of product: ");
        scanf("%d", &quantity);
        fprintf(bill_item14,"The quantity for added product (nivea deodorant) : %d\n",quantity);
        total_price=quantity*100;
        fprintf(bill_item14,"The total price of nivea deodorant is %d\n", total_price);
        printf("This item is added to the cart");
        fclose(bill_item14);      
        break;
        
        case 520:
        bill_item14=fopen("bill.txt","a");
        printf("Enter quantity of product: ");
        scanf("%d", &quantity);
        fprintf(bill_item14,"The quantity for added product (park avenue perfume) : %d\n",quantity);
        total_price=quantity*100;
        fprintf(bill_item14,"The total price of park avenue perfume is %d\n", total_price);
        printf("This item is added to the cart");
        fclose(bill_item14);      
        break;
        
        case 21:
        default:
        printf("invalid input");
        break;
    }
}

}

void main()
{
    //declaring integers
    int item_select;
    int item_select2;
    int item_select3;
    int item_select4;
    int item_select5;
    int item_select6;
    int item_select7;
    int item_select8;
    int item_select9;
    int item_select10;
    int item_select11;
    int item_select12;
    int item_select13;
    int item_select14;


    //declaring  file pointers
    FILE *bill_item;
    FILE *fruits_and_vegetables_file;
    FILE *detergents; 
    FILE *cleaners;     
    FILE *dishwasher;
    FILE *home_and_car_freshners;
    FILE *coffee;
    FILE *tea;
    FILE *fruit_juice;
    FILE *milk;
    FILE *dairy_and_bread;
    FILE *hair_care;
    FILE *oral_care;
    FILE *perfumes;
    FILE *skin_care;
    
    //declareing variables
     char bill_item_variable[1000];
     char fruits_vegetables_variable[1000];
     char detergents_variable[1000];
     char cleaner_variable[1000];
     char dishwashers_variable[1000];
     char home_and_car_freshners_variable[1000];
     char coffee_variables[1000];
     char tea_variables[1000];
     char fruit_juice_variable[1000];
     char milk_variable[1000];
     char dairy_and_bread_variable[1000];
     char hair_care_variable[1000];
     char oral_care_variable[1000];
     char perfumes_variable[1000];
     char skin_care_variable[1000];

     //for display of the items
     int department,cleaning_and_household_types,beverages_types, personal_care_types;
    printf("\n****************************************************************************\n");
    printf("                     WELCOME TO GROCERY STORE                        \n");
    printf("****************************************************************************\n\n\n");


    printf("1.FRUITS AND VEGETABLES\n2.CLEANING AND HOUSEHOLD\n3.BEVERAGES\n4.DAIRY AND BREAD\n5.PERSONAL CARE");
    department_selection:
    printf("\n\nEnter number of your department (Press 0 to exit) :\n\n");
    scanf("%d",&department);
    if(department==0)
    {
        goto program_exit;    
    }
    
    
    if(department==1)
    {

          fruits_and_vegetables_file=fopen("fruits_and_vegetables.txt","r");
          fscanf(fruits_and_vegetables_file,"%[^\0]",fruits_vegetables_variable);
          printf("\n%s\n\n",fruits_vegetables_variable);
          fclose(fruits_and_vegetables_file);
          printf("\nPlease enter your Item code: ");
          scanf("%d",&item_select);
          fruits_and_vegetables(item_select);
          goto department_selection; 
          
          
    }
    else if(department==2)
    {
        printf("\n\nYou have selected CLEANING AND HOUSEHOLD\n");
        printf("\nPlease select one of given the category \n\n1)DETERGENTS\n2)CLEANERS\n3)DISWASHERS\n4)HOME AND CAR FRESHNERS\n\n");
        scanf("%d",&cleaning_and_household_types);
        switch(cleaning_and_household_types)
        {
           case 1:
          detergents=fopen("detergent.txt","r");
          fscanf(detergents,"%[^\0]",detergents_variable);
          printf("\n%s",detergents_variable);
          fclose(detergents);


          printf("\nPlease enter your Item code: ");
          scanf("%d",&item_select2);
          detergents_function(item_select2);
          goto department_selection;
          break;

           case 2:
          cleaners=fopen("cleaners.txt","r");
          fscanf(cleaners,"%[^\0]",cleaner_variable);
          printf("\n%s",cleaner_variable);
          fclose(cleaners);

           printf("\nPlease enter your Item code: ");
          scanf("%d",&item_select3);
          cleaners_function(item_select3);
          goto department_selection;
          break;


           case 3:
          dishwasher=fopen("dishwasher.txt","r");
          fscanf(dishwasher,"%[^\0]",dishwashers_variable);
          printf("\n%s",dishwashers_variable);
          fclose(dishwasher);

          printf("\nPlease enter your Item code: ");
          scanf("%d",&item_select4);
          dishwasher_function(item_select4);
          goto department_selection;
          break;


           case 4:
          home_and_car_freshners=fopen("home_and_car_freshners.txt","r");
          fscanf(home_and_car_freshners,"%[^\0]",home_and_car_freshners_variable);
          printf("\n%s",home_and_car_freshners_variable);
          fclose(home_and_car_freshners);

          printf("\nPlease enter your Item code: ");
          scanf("%d",&item_select5);
          home_and_car_freshners_function(item_select5);
          goto department_selection;
          break;

          default:
          printf("Enter valid input");
          goto department_selection;
        }
    }

        else if(department==3)
        {
             printf("\nYou have selected BEVERAGES. ");
        printf("\n\nPlease select one of given the category \n\n1)COFFEE\n2)TEA\n3)JUICES\n4)MILK\n\n");
        scanf("%d",&beverages_types);
        switch(beverages_types)
        {
           case 1:
          coffee=fopen("coffee.txt","r");
          fscanf(coffee,"%[^\0]",coffee_variables);
          printf("\n%s",coffee_variables);
          fclose(coffee);

          printf("\nPlease enter your Item code: ");
          scanf("%d",&item_select6);
          coffee_function(item_select6);
          goto department_selection;
          break;

           case 2:
          tea=fopen("tea.txt","r");
          fscanf(tea,"%[^\0]",tea_variables);
          printf("\n%s",tea_variables);
          fclose(tea);

          printf("\nPlease enter your Item code: ");
          scanf("%d",&item_select7);
          tea_function(item_select7);
          goto department_selection;
          break;


           case 3:
          fruit_juice=fopen("juices.txt","r");
          fscanf(fruit_juice,"%[^\0]",fruit_juice_variable);
          printf("\n%s",fruit_juice_variable);
          fclose(fruit_juice);

          printf("\nPlease enter your Item code: ");
          scanf("%d",&item_select8);
          juices_function(item_select8);
          goto department_selection;
          break;


           case 4:
          milk=fopen("milk.txt","r");
          fscanf(milk,"%[^\0]",milk_variable);
          printf("\n%s",milk_variable);
          fclose(milk);

          printf("\nPlease enter your Item code: ");
          scanf("%d",&item_select9);
          milk_function(item_select9);
          goto department_selection;
          break;

          default:
          printf("Enter valid input");
          goto department_selection;
        }
        }
       
        else if(department==4)
    {

          dairy_and_bread=fopen("dairy_and_bread.txt","r");
          fscanf(dairy_and_bread,"%[^\0]",dairy_and_bread_variable);
          printf("\n%s",dairy_and_bread_variable);
          fclose(dairy_and_bread);

          printf("\nPlease enter your Item code: ");
          scanf("%d",&item_select10);
          dairy_and_bread_function(item_select10);
          goto department_selection; 
          
    }

   else if(department==5)
   {
       printf("\n\nYou have selected PERSONAL CARE category\n ");
        printf("\nPlease select one of given the category\n\n1)HAIR CARE\n2)ORAL CARE\n3)PERFUMES\n4)SKIN CARE\n\n");
        scanf("\n%d",&personal_care_types);
        switch(personal_care_types)
        {
           case 1:
          hair_care=fopen("hair_care.txt","r");
          fscanf(hair_care,"%[^\0]",hair_care_variable);
          printf("\n%s",hair_care_variable);
          fclose(hair_care);

          printf("\nPlease enter your Item code: ");
          scanf("%d",&item_select11);
          hair_care_function(item_select11);
          goto department_selection;
          break;

           case 2:
          oral_care=fopen("oral_care.txt","r");
          fscanf(oral_care,"%[^\0]",oral_care_variable);
          printf("\n%s",oral_care_variable);
          fclose(oral_care);

          printf("\nPlease enter your Item code: ");
          scanf("%d",&item_select13);
          oral_care_function(item_select13);
          goto department_selection;
          break;


           case 3:
          perfumes=fopen("perfumes.txt","r");
          fscanf(perfumes,"%[^\0]",perfumes_variable);
          printf("\n%s",perfumes_variable);
          fclose(perfumes_variable);

          printf("\nPlease enter your Item code: ");
          scanf("%d",&item_select14);
          perfumes_function(item_select14);
          goto department_selection;
          break;


           case 4:
          skin_care=fopen("skin_care.txt","r");
          fscanf(skin_care,"%[^\0]",skin_care_variable);
          printf("\n%s",skin_care_variable);
          fclose(skin_care_variable);

          printf("\nPlease enter your Item code: ");
          scanf("%d",&item_select12);
          skin_care_function(item_select12);
          goto department_selection;
          break;
          
          default:
          printf("Enter valid input");
          goto department_selection;
        }

    }

    program_exit:
    printf("Thank you for visiting!");
}