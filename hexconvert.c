#include <stdio.h>
#include <string.h>
char getHex(int remain);
void ReverseString(char buff[]);

int main(int argc, char *argv[]){
char *hex = argv[1];
if(argc< 2){
printf("Please Give a Hex\n");
return 1;
}
char hex2[30];
int nums = 0;
int remain;
int index;

  while(1){
   nums++;
   remain = nums;
   index =0;
   while(remain != 0){
        hex2[index++] = getHex(remain % 16);
            remain /= 16;
    }

    hex2[index] = '\0';

    ReverseString(hex2);

    if(strcmp(hex2, hex + 2) == 0){
        printf("%d\n", nums);
        break;
    }
    }
}

char getHex(int remain){
    return "0123456789ABCDEF"[remain];
}

void ReverseString(char buff[]) {
     int i = 0;
    int j = strlen(buff) - 1;

    while (i < j) {
        char tmp = buff[i];
        buff[i] = buff[j];
        buff[j] = tmp;
        i++;
        j--;
    }
    
}	




