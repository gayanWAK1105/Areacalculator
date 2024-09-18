#include<stdio.h>

int rectasngle(int length1,int width1)
{	int area1;
	area1=length1*width1;
	return area1;
}

int circle(int radius1)
{	int area2;
	int pi=3.14;
	area2=pi*radius1;
	return area2;
}

int triangle(int base1,int height1)
{	int area3;
	area3=0.5*base1*height1;
	return area3;
}

int main()
{
	printf("\n\nWelcome to the Shape Area Calculator Programme\n");
	int length,base,height,radius,area,width;
	int choise,conchoise;

	do{
		printf("Chosse a shape to calculate the area\n\n");
		printf("1 - Rectangle\n");
		printf("2 - Circle\n");
		printf("3 - Traingle\n");
		printf("4 - Exit\n");
		scanf("%d",&choise);

	switch(choise)
	{	case 1:
			printf("Enter the height of the Rectangle =\n ");
			scanf("%d",&length);
			printf("Enter the weight of the Rectangle =\n");
			scanf("%d",&width);
			area=rectasngle(length,width);
			printf("The area of the rectangle is %d \n",area);
			break;

		case 2:
			printf("Enter the radius of the circle =\n ");
			scanf("%d",&radius);
			area=circle(radius);
			printf("The area of the circle is %d \n",area);
			break;

		case 3:
			printf("Enter the base of the traingle =\n ");
			scanf("%d",&base);
			printf("Enter the height of the traingle =\n ");
			scanf("%d",&height);
			area=triangle(base,height);
			printf("The area of the traingle is %d \n",area);
			break;

		case 4:
			printf("Good Bye! Exiting the programme \n ");
			break;

		default:
			printf("Invalid choise Please select a valid option\n ");
			break;
	}

	printf("\nDo you want to perform another calculation \n\n");
	printf("1 - YES\n");
	printf("2 - NO\n");
	scanf("%d",&conchoise);

	}while(conchoise==1);

	printf("Thank You for using the shape Area calculator programme");
	return 0;





}
