#include <stdio.h>
#define LEN_MAX 3
#define LEN_MAX2 10

//postcondition: flush the input in the buffer.
void flush() {
  char c = getchar();
  while(c != '\n' && c != EOF) {
    c = getchar();
  }
}

// precondition: the array named `string` has a capacity of `max`.
// postcondition: asks the user for a message ended by `\n` and removes the `\n`.
void read_line(char* string, int max){
	//fgets allows you to read the input of the user. But it is not necessary when you define the input in the codes.
	fgets(string, max, stdin);
	//printf("You have typed %s\n", string);
	int i = 0;
	while(string[i] != '\n' && i <= max - 1)
// or while (string[i] != '\n' && string[i] == '\0')
	{
		i = i + 1;
	}
	if(string[i] != '\n'){
		flush();
	}
	string[i] = '\0';
}

// precondition: `string` is initialized and terminated with '\0'.
// return: the size of the string.
int size (char* string){
	int i = 0;
	while (string[i] != '\0'){
		i = i + 1;
	}
	return i;
}

// return: compares the two numbers and returns the larger one.
int max(int x, int y){
	if (x >= y)
	{
		return x;
	}
	else
	{
		return y;
	}
}
// precondition: two `string` are initialized and they are terminated by `\0`.
// return: compares the two `strings` and output `0` if they are the same and `1` if they are not.
int equal (char* string1, char* string2){
	int i = 0;
	while (string1[i] == string2[i] && i <= max(size(string1), size(string2))){
		i = i + 1;
	}
	if (string1[i] == string2[i]){
		return 1;
	}
	else {
		return 0;
	}
// `1` is for true and `0` is for false.
}
int main(int argc, char *argv[]){
	printf("Please type two lines:\n");
	char input1[LEN_MAX];
	char input2[LEN_MAX2];
	read_line(input1, LEN_MAX);
	read_line(input2, LEN_MAX2);
	int result = equal(input1, input2);
	if (result) {
		printf("They are equal.\n");
	}
	else {
		printf("They are not equal.\n");
	}
	return 0;
}

