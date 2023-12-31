#include <stdio.h>

struct Box
{
   double length;
   double width;
   double height;
};

double volume(struct Box *box)
{
   return box->length * box->width * box->height;
}

double surfaceArea(struct Box *box)
{
   double length = box->length;
   double width = box->width;
   double height = box->height;

   return 2 * (length * width + length * height + width * height);
}

int main()
{
   struct Box myBox;

   printf("Enter the dimensions of the box:\n");
   printf("Length: ");
   scanf("%lf", &myBox.length);
   printf("Width: ");
   scanf("%lf", &myBox.width);
   printf("Height: ");
   scanf("%lf", &myBox.height);

   struct Box *boxPtr = &myBox;

   printf("\nUsing (*) and (.) operators:\n");
   printf("Length: %.2f\n", (*boxPtr).length);
   printf("Width: %.2f\n", (*boxPtr).width);
   printf("Height: %.2f\n", (*boxPtr).height);
   printf("Volume: %.2f\n", volume(boxPtr));
   printf("Surface Area: %.2f\n", surfaceArea(boxPtr));

   printf("\nUsing (->) operator:\n");
   printf("Length: %.2f\n", boxPtr->length);
   printf("Width: %.2f\n", boxPtr->width);
   printf("Height: %.2f\n", boxPtr->height);
   printf("Volume: %.2f\n", volume(boxPtr));
   printf("Surface Area: %.2f\n", surfaceArea(boxPtr));

   return 0;
}