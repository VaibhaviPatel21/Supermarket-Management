#include <stdio.h>

void main()
{
 //declaring  file pointers
    FILE * fruits_and_vegetables;
    FILE *detergents;
    FILE *cleaners;
    FILE *dishwashers;
    FILE * home_and_car_freshners;
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
    printf("\n\nEnter number of your  department:  ");
    scanf("%d",&department);
    department:
    if(department==1)
    {

        fruits_and_vegetables=fopen("fruits_and_vegetables.txt","r");
          fscanf(fruits_and_vegetables,"%[^\0]",fruits_vegetables_variable);
          printf("\n%s",fruits_vegetables_variable);
          fclose(fruits_and_vegetables);
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
          goto department;
          break;

           case 2:
          cleaners=fopen("cleaners.txt","r");
          fscanf(cleaners,"%[^\0]",cleaner_variable);
          printf("\n%s",cleaner_variable);
          fclose(cleaners);
          goto department;
          break;


           case 3:
          dishwashers=fopen("dishwasher.txt","r");
          fscanf(cleaners,"%[^\0]",dishwashers_variable);
          printf("\n%s",dishwashers_variable);
          fclose(dishwashers);
          goto department;
          break;


           case 4:
          home_and_car_freshners=fopen("home_and_car_freshners.txt","r");
          fscanf(home_and_car_freshners,"%[^\0]",home_and_car_freshners_variable);
          printf("\n%s",home_and_car_freshners_variable);
          fclose(home_and_car_freshners);
          goto department;
          break;
          default:
          printf("Enter valid input");
          goto department;
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
          goto department;
          break;

           case 2:
          tea=fopen("tea.txt","r");
          fscanf(tea,"%[^\0]",tea_variables);
          printf("\n%s",tea_variables);
          fclose(tea);
          goto department;
          break;


           case 3:
          fruit_juice=fopen("juices.txt","r");
          fscanf(fruit_juice,"%[^\0]",fruit_juice_variable);
          printf("\n%s",fruit_juice_variable);
          fclose(fruit_juice);
          goto department;
          break;


           case 4:
          milk=fopen("milk.txt","r");
          fscanf(milk,"%[^\0]",milk_variable);
          printf("\n%s",milk_variable);
          fclose(milk);
          goto department;
          break;
          default:
          printf("Enter valid input");
          goto department;
        }
        }
        else if(department==4)
    {

        dairy_and_bread=fopen("dairy_and_bread.txt","r");
          fscanf(dairy_and_bread,"%[^\0]",dairy_and_bread_variable);
          printf("\n%s",dairy_and_bread_variable);
          fclose(dairy_and_bread_variable);
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
          goto department;
          break;

           case 2:
          oral_care=fopen("oral_care.txt","r");
          fscanf(oral_care,"%[^\0]",oral_care_variable);
          printf("\n%s",oral_care_variable);
          fclose(oral_care);
          goto department;
          break;


           case 3:
          perfumes=fopen("perfumes.txt","r");
          fscanf(perfumes,"%[^\0]",perfumes_variable);
          printf("\n%s",perfumes_variable);
          fclose(perfumes_variable);
          goto department;
          break;


           case 4:
          skin_care=fopen("skin_care.txt","r");
          fscanf(skin_care,"%[^\0]",skin_care_variable);
          printf("\n%s",skin_care_variable);
          fclose(skin_care_variable);
          goto department;
          break;
          default:
          printf("Enter valid input");
          goto department;
  }

}
    }
