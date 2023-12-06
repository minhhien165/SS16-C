#include <stdio.h>
int main(){
	FILE *file = fopen("bt3.txt", "w");
	int numLines;
char content[100];

printf("Nhap so dong: ");
scanf("%d", &numLines);

for (int i = 0; i < numLines; i++) {
    printf("Nhap noi dung dong thu %d: ", i + 1);
    scanf(" %[^\n]", content);

    fprintf(file, "%s\n", content);
}
	fclose(file);

file = fopen("bt3.txt", "r");
while (fgets(content, sizeof(content), file)) {
    printf("%s", content);
}
fclose(file);

		return 0;
}
