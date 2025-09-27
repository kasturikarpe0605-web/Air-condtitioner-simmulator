  #include <stdio.h>

void main() {
    int humidity;
    printf("Enter humidity (between 0-100):");
    scanf("%d",&humidity);
    printf("entered value of humidity is %d\n",humidity);
    if (humidity>50){
        printf("temp is 23 degrees ");
    }
    else{
        printf("temp is 25 degrees ");
    }
}

