/*
PROJECT TITLE:Grading system
AUTHOR:RAPHAEL MBURU
DESCRIPTION:A system to grade a student doing
 ICT at a college  based on
 formative and summertiVe assessments.
 DATE:13/10/2026

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    int formative_marks,summative_marks,total_marks,student_no;
    char grade,student_name[50],comments[50];
    printf("CDACC GRADING SYSTEM\n");


    //INPUTS
    printf("Enter student name:");
    fgets(student_name,50,stdin);
    printf("Enter student no:");
    scanf("%d",&student_no);


    //FORMATIVE
     do {
    printf("Enter formative marks (0-50):");
     scanf("%d",&formative_marks);
     if (formative_marks < 0 || formative_marks > 50)
        printf("Invalid marks .Try again!!\n");
     }while(formative_marks < 0 || formative_marks > 50);

    do{
       printf("Enter summative marks (0-50):");
       scanf("%d",&summative_marks);
       if (summative_marks < 0 || summative_marks > 50)
        printf("Invalid marks.Try again!!\n");
    }while (summative_marks < 0 || summative_marks > 50);
       total_marks = formative_marks + summative_marks;


       // marks moderation
       if(total_marks == 49){
        total_marks = 50;
       }
       //check for technical fail
        if (formative_marks < 25 || summative_marks < 25) {
            total_marks = 49;
        }
        // find grade
        if(total_marks >= 70) grade = 'A';
        else if(total_marks >= 60) grade = 'B';
        else if(total_marks >= 50) grade = 'C';
        else grade = 'D';
        switch(grade){
        case 'A':
          strcpy(comments,"Mastery");
          break;
          case'B':
         strcpy(comments,"Proficient");
         break;
          case 'C':
        strcpy(comments,"Competent");
        break;
          case 'D':
            strcpy(comments,"Not Yet Competent");
            default:
            strcpy(comments,"M.M");
            break;
        }
            //OUTPUT
            printf("-------------------------------\n");
            printf("  SCHOOL GRADING SYSTEM \n  ");
            printf("-------------------------------\n");
            printf("student  no: %d\n",student_no);
            printf("Student name: %s\n",student_name);
            printf("Total marks: %d\n",total_marks);
            printf("Grade: %c\n",grade);
            printf("comments:  %s\n",comments);

               return 0;
    }




