#include<iostream>
#include<fstream>
#include<string>
using namespace std;

string file = "Quiz.txt";

class Quiz {
private:

    class Node_U {
    public:
        string name;
        int score;
        Node_U * next = NULL;
    };
    Node_U * head_U;
    int Num_U;
    


    class Node_Q {
    public:
        string question;
        string option_A;
        string option_B;
        string option_C;
        string option_D;
        char correctAnswer;
        int score;
        Node_Q * next = NULL;
        Node_Q * prev = NULL;
        
    };
    Node_Q * head_Q1;
    Node_Q * head_Q2;
    int Num_Q1;
    int Num_Q2;



    class StackDeletedNode {
    public:
        Node_U * deletedNode;
        StackDeletedNode * next;
    };
    StackDeletedNode * top;
    int Num_SU;


public:
    Quiz() {
        head_U = NULL;
        head_Q1 = NULL;
        head_Q2 = NULL;
        top = NULL;
        Num_U = 0;
        Num_SU = 0;
        Num_Q1 = 0;
        Num_Q2 = 0;
    }
    void start();
    void password();

// Admin    
    void options_A();
    void deleteUser(string name);
    void displayAllUsers();
    void addQuestionLevel1(string question, string optionA, string optionB, string optionC, string optionD, char correctAnswer, int score);
    void addQuestionLevel2(string question, string optionA, string optionB, string optionC, string optionD, char correctAnswer, int score);
    void displayQuestionsLevel1();
    void displayQuestionsLevel2();

// User
    void options_U();
    void addUser(string name);
    void displayTopUsers();
    void playLevel1(string name);
    void playLevel2(string name);

// Stack Fun..
    void pushDeletedUser(Node_U * deletedName);
    Node_U * popDeletedUser();
    void displayDeletedUser();
    void restoreUser();

// Another Fun..
    void findName(string name, int level);
    void saving(string file);
    void loading(string file);
    void sortUsers();
};
