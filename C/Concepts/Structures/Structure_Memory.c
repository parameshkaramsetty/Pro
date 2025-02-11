// Structure Memory

#include<stdio.h>
struct Rectangle{
	int length;//4
	int breadth;//4
	char b[10]; // 4 + 4 + 2 + 2
};
typedef struct Rectangle r;
int main(){
	r r1;
	printf("%d",sizeof(r1));
}
