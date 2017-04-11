#ifndef QUESTION_H_
#define QUESTION_H_

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct Answers{
     char* answer;
    int id;
}Answers;

typedef struct Question{

    char *question;
    time_t date;
    Answers answers[4];
    int id;
    
}Question;

typedef struct QuestionArray{
    Question *questions;
    Question *current;
    int id;
    int size;

    QuestionArray* init_question_array ();

    int get_size();
    void step(int);
    void jump_to_beginning();
    void allocate_memory(int);
}QuestionArray;


#endif //QUESTION_H_
