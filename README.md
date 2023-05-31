Team Members:
- Ahmed Nazeer
- Jana Sakr


Project topic:
   - Singly Linked List
   - Doubly Linked List
   - Stack




PROJECT INTRODUCTION:

This is a complete Quiz Game designed with Data structure as a simple console application. In 
this project, a few questions are asked. and the user is awarded points for each correct answer, 
(Each of questions and users were talked about linked list and stack). and it is divided into two 
categories they are admin and user.
Each admin and user have their unique options, but admin has high access like (delete user).
In this quiz game, you must add username “before playing”, create questions (this priority for 
admin only) and admin can restore deleted users. Additionally, to make the game look a little 
more interesting, it is divided into two levels, user must pass the first level with 60 points at 
least to reach the second level.
The game ends when the user passes level two. For each question asked, there are 4 options, 
namely A, B, C and D. There are no negative markings, so the user’s points are constant for 
wrong answers to the questions.





PROJECT MAIN IDEA:

I created a class called Quiz with his constructor Quiz() and it contains three classes (Node_U, Node_Q
and stackDeletedNode) and main function(start window)called start().
I have divided this project into two main functionsthey are options for admin and options for user (and
some functions below user options and admin options) and listed below are some of those which may
help you understand the project better.


1- options_A();
- password();
- void displayAllUsers();
- void deleteUser(string name);
- addQuestionLevel1(string questions, string optionA, string optionB, string optionC, string
optionD, char correctAnswer, int score);
- void displayQuestionsLevel1();
- addQuestionLevel2(string questions, string optionA, string optionB, string optionC, string
optionD, char correctAnswer, int score);
- void displayQuestionsLevel2();
- void displayDeletedUser();
- void restoreUser();


2- option_U();
- void addUser(string name);
- void displayTopUsers();
- void findName(string name, int level);
- void playLevel1(string name);
- void playLevel2(string name);
3- Another functions
- void pushDeletedUser(Node_U * name);
- Node_U * popDeletedUser();
- Void sortUsers():
- Void saving();
- Void loading();



Class Quiz: (class Quiz has one default constructor, the constructor will work wherever the object is created). The definition of constructor makes all variables are equal NULL.

Class Node_U: (it is used to create the user node that contain “score, name and pointer to the next node”)

Class Node_Q: (it is used to create the question node that contain “question, option A, B, C and D, correct answer, score and pointer to the next node”).

Class stackDeletedNode: (it is used to save the deleted node in the stack that contains “node of userdeleted from Node_U* and pointer to the next node”).

Function start(): (start window that have 2 statements one for admin and the another for user with if statement).

Function password(): ( make sure that who is entered in phase of admin is admin).



Admin:

Function options_A(): (options “functions” for admin and they are listed below with if else statement).

Function deleteUser(string name): (it works to delete user with the name was passed to the parameter which search in single linked list).

Function displayAllUsers(): (it works to show the users with their name and their score who was registered or (added) even they not played ).

Function addQuestionLevel1(string questions, string optionA, string optionB, string optionC, string optionD, char correctAnswer, int score): (it works to add question with his options and score of question, and all was passed to the parameter which search in doubly linked list).

Function displayQuestionsLevel1(): (it works to show the questions with their options and their correct answer which was added).

Function addQuestionLevel2(string questions, string optionA, string optionB, string optionC, string optionD, char correctAnswer, int score): (it works to add question with his options and score of question, and all was passed to the parameter which search in doubly linked list).

Function displayQuestionsLevel1(): (it works to show the questions with their options and their correct answer which was added).

Function displayDeletedUser(): (it works to show the users with their name and their score who was deleted).

Function restoreUser(): (it works to restore the users with their name and their score who was deleted).



User:

Function addUser(): (it works to add user with the name was passed to the parameter which search invsingle linked list).

Function findName(): (it works to find user with the name before he play any level in game, and it was passed to the parameter which search in single linked list).

Function playLevel1(): (it works to turn on the game by displaying a question to user and user answer it, if answer is correct, user will take the points of question in his score or if answer is wrong, user score does not change).

Function playLevel2(): (it works to turn on the game by displaying a question to user and user answer it, if answer is correct, user will take the points of question in his score or if answer is wrong, user score does not change).



Another functions:

Function pushDeletedUser(Node_U * name): (it works to add deleted user in a stack ).

Function popDeletedUser():(it works to pop a deleted user and it send to a restore function).

Function sortUsers(): (sort user descending order).

Function load(): (read from file).

Function saving(): (write in file).



CONCLUSION:

The main idea for this quiz is to be knowledgeable about data structure.
In this quiz game there are two parts (admin and user) and every one of
them has their unique options and accessibility. You can play two levels
and you must pass level 1 with 60 points at least to play level 2, the
game ends when the user passes in two levels.

