 #include<stdio.h>

 int main()
 {
     int num, i=0, flag=0;

     printf("Enter a number: ");
     scanf("%d",&num);

     for(i=2; i < num-1; i++){
        if(num % i == 0){
            flag = 1;
            break;
        }
     }

     if (num == 0 || num == 1){
            flag = 1;
     }

     if (flag == 0){
        printf("%d is a prime number.", num);
     }
     else{
        printf("%d is not a prime number.", num);
     }

     return 0;
 }
