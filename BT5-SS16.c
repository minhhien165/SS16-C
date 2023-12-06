#include <stdio.h>
int main(){
	FILE *file1 = fopen("bt01.txt", "r");
	FILE *file2 = fopen("bt03.txt", "r");
	FILE *file5 = fopen("bt5.txt", "w");
char ch;
while ((ch = fgetc(file1)) != EOF) {
fputc(ch, file5);
}
while ((ch = fgetc(file2)) != EOF) {
fputc(ch, file5);
}	
fclose(file1);
fclose(file2);
fclose(file5);
		return 0;
}
