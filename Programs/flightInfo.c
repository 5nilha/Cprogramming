#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

struct flightInformation {
	char flightNum[7];
	char origCode[5];
	char destCode[5];
	int Human_ReadDate;
	struct flightInformation *next;
}flightInfo;

int main() {
	FILE *binFile;
	time_t curtime;
	struct tm *loctime;
	int i = 0, count = 0;

	binFile = fopen("acars.bin", "rb");

	if (binFile == NULL) {
		printf("Error opening\n");
		return -1;
	}
	else {

		struct flightInformation *head, *tail, *temp;
		temp = malloc(sizeof(struct flightInformation));
		fread(temp, sizeof(flightInfo) - sizeof(&flightInfo), 1, binFile);
		temp->next = NULL;
		head = temp;
		tail = temp;


		while (!feof(binFile)) {

			temp = malloc(sizeof(struct flightInformation));
			
			fread(temp, sizeof(flightInfo) - sizeof(&flightInfo), 1, binFile);
			tail->next = temp;
			tail = temp;
			temp->next = NULL;

			++i;
			count += 1;

		}

		printf("%d Flight Information\n\n", count);

		temp = head;

		while (temp->next != NULL) {
			curtime = temp->Human_ReadDate;
			loctime = localtime(&curtime);

			printf("%s %s %s ", temp->flightNum, temp->origCode, temp->destCode);
			fputs(asctime(loctime), stdout);
			temp = temp->next;
		}

		fclose(binFile);

	}
}

