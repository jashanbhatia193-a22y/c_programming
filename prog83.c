#include<stdio.h>
#include<stdlib.h>
struct Student
{
	int rno;
	char name[30];
	int marks;	
};
int main()
{
	int choice;
	FILE *fp;
	FILE *temp;
	
	struct Student stu;
	while(1)
	{
		system("cls");
		printf("1. Add Record\n");
		printf("2. Display All Record\n");
		printf("3. Search Record\n");
		printf("4. Delete Record\n");
		printf("5. Update Record\n");
		printf("6. Exit\n");
		
		printf("Enter your choice [1-6]");
		scanf("%d",&choice);

		switch(choice)	
		{
			case 1:
			{
				int flag = 0;
				printf("Add Record\n");
				fp = fopen("students.txt","ab");
				
				printf("Enter Roll No ");
				scanf("%d",&stu.rno);
				fflush(stdin);
				
				printf("Enter Student Name ");
				scanf("%s", stu.name);
				
				fflush(stdin);
				printf("Enter Marks ");
				scanf("%d",&stu.marks);
				
				
				
				flag = fwrite(&stu, sizeof(stu),1,fp);
				if(flag)
				{
					printf("Record Saved");
				}
				else
					printf("Record not Saved");
				system("pause");
				
				fclose(fp);
				break;		
			}
			case 2:
			{
				printf("Display All Record\n");
				fp = fopen("students.txt","rb");
				
				while(fread(&stu, sizeof(stu),1,fp))
				{
					printf("=====================================\n");
					printf("Roll No %d\n", stu.rno);
					printf("Student Name %s\n", stu.name);
					printf("Marks %d\n", stu.marks);
					printf("Percentage %d%%\n", stu.marks/5);
					printf("=====================================\n\n");
				}
				getchar();
				fclose(fp);
				break;		
			}
			case 3:
			{
				printf("Search Record\n");
				fp = fopen("students.txt","rb");
				int rno, flag = 0;
				printf("Enter Roll No : ");
				scanf("%d",&rno);
				while(fread(&stu, sizeof(stu),1,fp))
				{
					if(rno == stu.rno)
					{
						flag = 1;
						break;
					}
				}
				if(flag == 1)
				{
					printf("=====================================\n");
					printf("Roll No %d\n", stu.rno);
					printf("Student Name %s\n", stu.name);
					printf("Marks %d\n", stu.marks);
					printf("Percentage %d%%\n", stu.marks/5);
					printf("=====================================\n\n");
				}
				else
					printf("Roll no not found");
				
				getchar();
				fclose(fp);
				break;		
			}
			case 4:
			{
				printf("Delete Record\n");
				fp = fopen("students.txt","rb");
				temp = fopen("temp.txt","wb");
				int rno, flag = 0;
				printf("Enter Roll No : ");
				scanf("%d",&rno);
				
				while(fread(&stu, sizeof(stu),1,fp))
				{
					if(rno != stu.rno)
					{
						fwrite(&stu, sizeof(stu),1,temp);
						flag=1;	
					}
				}
				fclose(fp);
				fclose(temp);
				
				if(flag == 1)
				{
					remove("students.txt");
					rename("temp.txt","students.txt");
					printf("Record delete");
				}
				else
					printf("Record not delete");
				
				
				
				getchar();
				
				break;		
			}
			case 5:
			{
				printf("Update Record\n");
				fp = fopen("students.txt","rb+");
				int rno, flag = 0;
				char ans = 'n';
				int size = sizeof(stu);
				
				printf("Enter Roll No : ");
				scanf("%d",&rno);
				while(fread(&stu, sizeof(stu),1,fp))
				{
					if(rno == stu.rno)
					{
						flag = 1;
						break;
					}
				}
				if(flag == 1)
				{
					printf("=====================================\n");
					printf("Roll No %d\n", stu.rno);
					printf("Student Name %s\n", stu.name);
					printf("Marks %d\n", stu.marks);
					printf("Percentage %d%%\n", stu.marks/5);
					printf("=====================================\n\n");
					
					fseek(fp,-size,SEEK_CUR);
					stu.rno = rno;
					
					fflush(stdin);
					printf("Are you sure want to change student name ");
					scanf("%c",&ans);
					
					if ( ans == 'y')
					{
						printf("Enter Student Name ");
						scanf("%s", stu.name);
					}
					
					fflush(stdin);
					printf("Are you sure want to change marks ");
					scanf("%c",&ans);
					
					
					if ( ans == 'y')
					{
						printf("Enter Student marks ");
						scanf("%d",&stu.marks);
					}

					int res = fwrite(&stu, sizeof(stu),1,fp);
					if(res)
					{
						printf("Record updated");
					}
					else
						printf("Record not updated");
						
					
					
				}
				else
					printf("Roll no not found");
					
				fclose(fp);	
				getchar();			
				break;		
			}
			case 6:
			{
				printf("-- Exit--\n");
				exit(0);		
			}
		}
	}
	
	return 0;
	
	
	
}