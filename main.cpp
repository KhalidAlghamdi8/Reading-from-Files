#include "Functions.h"


int main(void)
{

	FILE *fp;
	FILE *fw;
	char line[MAX_LINE_LEN + 1];
	if ((fp = fopen("testlines.txt", "r")) != NULL) {
		my_fgets(line, 31, fp);
		fclose(fp);
	}
	printf("%s", line);
	char* myline = "Lorem ipsum dolor sit amet, consectetur adipiscing elit";
	if ((fw = fopen("test.txt", "w")) != NULL) {
		int i = my_fputs(myline, fw);
		fclose(fp);
		printf("\n%d\n", i);
	}
	


	FILE* fc = fopen("file.txt", "r");
	if (fc == NULL) {
		perror("Error in opening file");
	}
	else {
		int x ;
		do{
			x = my_fgets(fc);
		   printf("%d\n",x );
		} while (x !=-1);
	}

	

	FILE* fg = fopen("tofile.txt", "w");
	if (fg == NULL) {
		perror("Error in opening file");
	}
	else {
		printf("%d\n",my_fputc(98, fg));
		fclose(fg);
	}
	

	char* ms;
	char strLine[MAX_LINE_LEN + 1];
	ms = my_gets(strLine);
	printf("%s", ms);
	
	char* ssp = "hello world";
	printf("\n%d\n", my_puts(ssp));

	
	printf("%d", my_getchar());
	
	my_putchar(98);
	printf("\n");

	char ch_arr2[20] ;
	my_strcpy(ch_arr2, "copying source string");
	printf("%s\n", ch_arr2);
	

	char ch_arr3[20];
	my_strncpy(ch_arr3, "lorem ipsum tutorial string copying", 5);
	printf("%s\n", ch_arr3);
	

	char ch_arr5[20]= "first string";
	my_strcat(ch_arr5, "appended string");
	printf("%s\n", ch_arr5);
	

	char ch_arr7[20] = "first string";
	my_strncat(ch_arr7, "appended string", 3);
	printf("%s\n", ch_arr7);
	

	printf("%d\n",my_strcmp("car", "car"));
	printf("%d\n", my_strcmp("bike", "phone"));
	

	printf("%d\n", my_strncmp("laptop", "laptops",6));
	printf("%d\n", my_strncmp("apple", "application", 4));
	printf("%d\n", my_strncmp("appstore", "apple", 4));
	
	getchar();
	getchar();
	
}

