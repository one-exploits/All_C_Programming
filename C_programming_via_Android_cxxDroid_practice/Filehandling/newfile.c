#include <stdlib.h>
int main(){
	char o[100];
	system("ifconfig -a > ip.txt");
    system("grep -o '[0-9]\{1,3\}\.[0-9]\{1,3\}\.[0-9]\{1,3\}\.[0-9]\{1,3\}' ip.txt >> ipp.txt");


}