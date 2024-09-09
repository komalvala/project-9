#include <stdio.h>

//Q-2 Structures and Percentage Calculation

struct Student {
    int roll_no;
    char name[50];
    int chem_marks;
    int maths_marks;
    int phy_marks;
};

main() 
{
    struct Student students[5];
    int total_marks,i;
    float percentage;
    
    for(i=0;i<5;i++)
    {
    	printf("Enter Student Roll No. = ");
    	scanf("%d",&students[i].roll_no);
    	printf("Enter Student Name = ");
    	scanf("%s",&students[i].name);
    	printf("Enter Student Chemistry Marks = ");
    	scanf("%d",&students[i].chem_marks);
    	printf("Enter Student Maths Marks = ");
    	scanf("%d",&students[i].maths_marks);
    	printf("Enter Student Physics Marks = ");
    	scanf("%d",&students[i].phy_marks);	
    	printf("\n");
	}
	
	for(i=0;i<5;i++)
	{
		printf("Student Roll No. = %d\n",students[i].roll_no);
		printf("Student Name = %s\n",students[i].name);
		printf("Student Chemistry Marks = %d\n",students[i].chem_marks);
		printf("Student Maths Marks = %d\n",students[i].maths_marks);
		printf("Student Physics Marks = %d\n",students[i].phy_marks);
	
		total_marks = students[i].chem_marks + students[i].maths_marks + students[i].phy_marks;
		printf("Obtain Marks for Total Marks = %d / 300 \n",total_marks); 
	
		percentage = ((float)total_marks * 100) / 300;
		printf("Total Percentage = %.2f \n",percentage);
	}
    
}
