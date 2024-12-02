#include<stdio.h>
int main(){
 int total_voters;
 printf("\n\t\t\twelcome to the electronic voting\n");
 printf("--------------------------------------------------------------------\n\n");
 printf("\n\nenter the number of total voters\n");
 scanf("%d",&total_voters);
 int cpp_voter=0,c_voter=0,python_voter=0,php_voter=0;
 
 int vote;
 for(int l=1;l<=total_voters;l++){
 printf(" \n options are \n  1.cpp \n 2.c \n 3.python \n 4.php \n select any one to vote:\n");
 scanf("%d",&vote);
 }
 switch(vote){
     
     case 1 :
    cpp_voter++;
     break;
     case 2:
    c_voter++;
     break;
     case 3:
    python_voter++;
     break;
     case 4:
     php_voter++;
     break;
     default:
     printf("invalid vote ");
}
float result1;
result1 =(float) cpp_voter/total_voters*100;
float result2=(float)c_voter /total_voters*100;
float result3= (float)python_voter/total_voters*100;
 float result4=(float)php_voter/total_voters *100;
 printf("results of elections are as follows : \n\n\t");
printf("cpp\t\t%.2f\n\n\t",result1);
printf("c\t\t %.2f\n\n\t",result2);
printf("python\t\t%.2f\n\n\t",result3);
printf("php\t\t%.2f\n\n\t",result4);
}

