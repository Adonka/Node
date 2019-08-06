/*CS288 H3 Session-2 HW#13;
*hwNumber13; 
*Adolfo Nakamura;
*07/31/2019
*/
#include<stdio.h>
#include<string.h>
/*typedef struct tnode *Treeptr;*/
typedef struct tnode { /* the tree node: */
char MealName[20];
char Ingredient1[10];
char Ingredient2[30];
float Rating; /* points to the text */
int count; /* number of occurrences */
/*Treeptr left;  left child */
/*Treeptr right;  right child */
} Cooknode;
int main()
{ Cooknode recipe1;
   strcpy(recipe1.MealName,"Pasta and Meat");
   strcpy(recipe1.Ingredient1,"Spaghetti");
   strcpy(recipe1.Ingredient2,"Meatballs with Eggs & Bread Crumb");
   recipe1.Rating = .98;
   printf("Recipe1's meal name is: %s;", recipe1.MealName);
   printf(" Recipe2's first ingredient is: %s;", recipe1.Ingredient1);
   printf(" Recipe2's second ingredient is: %s;", recipe1.Ingredient2);
   printf(" Recipe2's rating is: %.3f;", recipe1.Rating);
}