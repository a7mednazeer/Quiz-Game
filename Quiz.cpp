#include "Quiz.h"

void Quiz::start() {
    
    cout << R"(
-----------------------------------------------------------------------------------------------
 _    _      _                              _            _   _              _____       _     
| |  | |    | |                            | |          | | | |            |  _  |     (_)    
| |  | | ___| | ___ ___  ____ ___   ___    | |_ ___     | |_| |__   ___    | | | |_   _ _ ____
| |/\| |/ _ \ |/ __/ _ \|  _   _ \ / _ \   | __/ _ \    | __|  _ \ / _ \   | | | | | | | |_  /
\  /\  /  __/ | (_| (_) | | | | | |  __/   | || (_) |   | |_| | | |  __/   \ \/' / |_| | |/ / 
 \/  \/ \___|_|\___\___/|_| |_| |_|\___|    \__\___/     \__|_| |_|\___|    \_/\_\\____|_/___|

-----------------------------------------------------------------------------------------------

    - If you are an admin please press num 1.
    - If you are a user please press num 2.

    )" << '\n';

        int choice;
        cout << "Please enter your choice: ";
        cin >> choice;
        system("cls");
        if (choice == 1) {
            password();
        }
        else if (choice == 2) {
            options_U();
        }
        else {
            cout << "Invalid choice... Try again.\n";
        }
    }

void Quiz::password() {
    int password;
    int count = 0;
    bool answer = true;
    do {
    cout << "Enter a password to make sure you are admin: ";
    cin >> password;
    count++;
        if (password == 2003) {
            system("cls");
            cout << "Welcome admin.\n";
            cout << "Press enter to continue...\n";
            cin.ignore();
            cin.get();
            system("cls");
            options_A();
        }
        else {
            if (count != 2) {
                system("cls");
                cout << "Password is uncorrect... Try another one.\n";
                answer = false;
                cout << "\nPress enter to continue...\n";
                cin.ignore();
                cin.get();
                system("cls");
            }
        }
    }while (answer == false && count != 2);
    system("cls");
    cin.get();
    cout << "You are lier.. Not admin :(\n";
    exit(0);
}

void Quiz::options_A() {
    do {
        
        char option;
        cout << "A. Return Home" << '\n';
        cout << "B. Delele User" << '\n';
        cout << "C. Display Users" << '\n';
        cout << "D. Add Question in level 1" << '\n';
        cout << "E. Display Question in level 1" << '\n';
        cout << "F. Add Question in level 2" << '\n';
        cout << "G. Display Question in level 2" << '\n';
        cout << "H. Restore Deleted User" << '\n';
        cout << "I. Display Deleted Users" << '\n';
        cout << "J. Exit" << '\n';
        
        cout << "\nEnter your option: ";
        cin >> option;
        
        if (option == 'a' || option == 'A') {
            system("cls");
            start();
            cout << "Press enter to return to options...\n";
            cin.get();
            system("cls");
        }
        if (option == 'b' || option == 'B') {
            system("cls");
            string name;
            cout << "Enter a name: ";
            cin >> name;
            deleteUser(name);
            cout << "Press enter to return to options...\n";
            cin.get();
            system("cls");
        }
        else if (option == 'c' || option == 'C') {
            system("cls");
            cin.get();
            displayAllUsers();
            cout << "Press enter to return to options...\n";
            cin.get();
            system("cls");
        }
        else if (option == 'd' || option == 'D') {
            system("cls");
            cin.get();
            string question, option_A, option_B, option_C, option_D, code;
            char correctAnswer;
            int score;
            cout << "Enter the question text: ";
            cin.ignore();
            getline(cin, question);
            
            cout << "Enter option A: ";
            getline(cin, option_A);
            
            cout << "Enter option B: ";
            getline(cin, option_B);
            
            cout << "Enter option C: ";
            getline(cin, option_C);
            
            cout << "Enter option D: ";
            getline(cin, option_D);
            
            cout << "Enter the correct answer (A, B, C, or D): ";
            cin >> correctAnswer;
            
            cout << "Enter the score for the question: ";
            cin >> score;
            
            addQuestionLevel1(question, option_A, option_B, option_C, option_D, correctAnswer, score);
            cout << "\nPress enter to return to options...\n";
            cin.ignore();
            cin.get();
            system("cls");
        }
        else if (option == 'e' || option == 'E') {
            system("cls");
            cin.get();
            displayQuestionsLevel1();
            cout << "Press enter to return to options...\n";
            cin.get();
            system("cls");
        }
        else if (option == 'f' || option == 'F') {
            system("cls");
            cin.get();
            string question, option_A, option_B, option_C, option_D, code;
            char correctAnswer;
            int score;
            cout << "Enter the question text: ";
            cin.ignore();
            getline(cin, question);
            
            cout << "Enter option A: ";
            getline(cin, option_A);
            
            cout << "Enter option B: ";
            getline(cin, option_B);
            
            cout << "Enter option C: ";
            getline(cin, option_C);
            
            cout << "Enter option D: ";
            getline(cin, option_D);
            
            cout << "Enter the correct answer (A, B, C, or D): ";
            cin >> correctAnswer;
            
            cout << "Enter the score for the question: ";
            cin >> score;
            
            addQuestionLevel2(question, option_A, option_B, option_C, option_D, correctAnswer, score);
            cout << "\nPress enter to return to options...\n";
            cin.ignore();
            cin.get();
            system("cls");
        }
        else if (option == 'g' || option == 'G') {
            system("cls");
            cin.get();
            displayQuestionsLevel2();
            cout << "Press enter to return to options...\n";
            cin.get();
            system("cls");
        }
        else if (option == 'h' || option == 'H') {
            system("cls");
            cin.get();
            restoreUser();
            cout << "Press enter to return to options...\n";
            cin.get();
            system("cls");
        }
        else if (option == 'i' || option == 'I') {
            system("cls");
            cin.get();
            displayDeletedUser();
            cout << "Press enter to return to options...\n";
            cin.get();
            system("cls");
        }
        else if (option == 'j' || option == 'J') {
            system("cls");
            sortUsers();
            saving(file);
            cout << "Exiting...." << '\n';
            exit(0);
        }
        else {
            system("cls");
            cin.get();
            cout << "Invalid option... Try again." << '\n';
            cout << "Press enter to return to options...\n";
            cin.get();
            system("cls");
        }
    } while(true);
}

void Quiz::options_U() {
        cout << "Welcome User \n";
        cin.ignore();

    do {
        cout << "Press enter to return to options...\n";
        cin.get();
        system("cls");
        
        char option;
        cout << "A. Return Home" << '\n';
        cout << "B. Add User" << '\n';
        cout << "C. Display Top Users" << '\n';
        cout << "D. play Level 1" << '\n';
        cout << "E. play Level 2" << '\n';
        cout << "F. Exit" << '\n';
        
        cout << "\nEnter your option: ";
        cin >> option;
        if (option == 'a' || option == 'A') {
            system("cls");
            start();
        }
        if (option == 'b' || option == 'B') {
            system("cls");
            string name;
            cout << "Enter your name: ";
            cin >> name;
            addUser(name);
        }
        else if (option == 'c' || option == 'C') {
            system("cls");
            cin.get();
            displayTopUsers();
        }
        else if (option == 'd' || option == 'D') {
            system("cls");
            string name;
            cout << "Enter your name: ";
            cin >> name;
            int level = 1;
            findName(name, level);
        }
        else if (option == 'e' || option == 'E') {
            system("cls");
            string name;
            cout << "Enter your name: ";
            cin >> name;
            int level = 2;
            findName(name, level);
        }
        else if (option == 'f' || option == 'F') {
            system("cls");
            sortUsers();
            saving(file);
            cout << "Exiting...." << '\n';
            exit(0);
        }
        else {
            system("cls");
            cin.get();
            cout << "Invalid option.. Try again.." << '\n';
        }
    } while(true);
}

void Quiz::addUser(string name) {
    Node_U * newnode = new Node_U;
    newnode->name=name;
    newnode->score=0;
    if (head_U == NULL) {
        head_U = newnode;
    }
    else {
        Node_U * temp = head_U;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newnode;
    }
    Num_U++;
    // cin.get();
    // cout << "User '" << name << "' is added.\n" << '\n';
}

void Quiz::deleteUser(string name) {
    Node_U * currUser = head_U;
    Node_U * prevUser = NULL;
    while (currUser != NULL && currUser->name != name) {
        prevUser = currUser;
        currUser = currUser->next;
    }
    if (currUser == NULL) {
        cin.get();
        cout << "User not found :(\n" << '\n';
        return;
    }
    if (prevUser == NULL) {
        head_U = currUser->next;
    }
    else {
        prevUser->next = currUser->next;
    }
    pushDeletedUser(currUser);
    // delete currUser;
    Num_U--;
    cin.get();
    cout << "User '" << name << "' is deleted." << '\n';

}

void Quiz::displayTopUsers() {
    Node_U * temp = head_U;
    int count = 1;
 
    if (Num_U == 0) {
        cout << "No Users :(\n";
        return;
    }
    else {
        cout << "Users: \n";
        while (temp != NULL && count <= 5) {
            cout << temp->name << " : " << temp->score << " Point\n";
            temp = temp->next;
            count++;
        }
        cout << '\n';
    }
}

void Quiz::displayAllUsers() {
    Node_U * temp = head_U;
    if (Num_U == 0) {
        cout << "No Users :(\n";
        return;
    }
    else {
        cout << "Users: \n";
        while (temp != NULL) {
            cout << temp->name << " : " << temp->score << " Point\n";
            temp = temp->next;
        }
        cout << '\n';
    }
}

void Quiz::addQuestionLevel1(string question, string option_A, string option_B, string option_C, string option_D, char correctAnswer, int score) {
    Node_Q * newnode = new Node_Q;
    newnode->question=question;
    newnode->option_A=option_A;
    newnode->option_B=option_B;
    newnode->option_C=option_C;
    newnode->option_D=option_D;
    newnode->correctAnswer=correctAnswer;
    newnode->score=score;
    
    if (head_Q1 == NULL) {
        head_Q1 = newnode;
    }
    else {
        Node_Q * temp = head_Q1;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newnode;
        newnode->prev = temp;
    }
    Num_Q1++;
}

void Quiz::displayQuestionsLevel1() {
    Node_Q * curr = head_Q1;
    if (Num_Q1 == 0) {
        cout << "No Questions :(\n";
        return;
    }
    else {
        cout << "=> Questions: " << '\n';
        while (curr != NULL) {
            cout << "Q: " << curr->question << '\n';
            cout << "A: " << curr->option_A << '\n';
            cout << "B: " << curr->option_B << '\n';
            cout << "C: " << curr->option_C << '\n';
            cout << "D: " << curr->option_D << '\n';
            cout << "Correct Answer: " << curr->correctAnswer << '\n';
            cout << "Score: " << curr->score << '\n';
            cout << '\n';
            curr = curr->next;
        }
    }
}

void Quiz::addQuestionLevel2(string question, string option_A, string option_B, string option_C, string option_D, char correctAnswer, int score) {
    Node_Q * newnode = new Node_Q;
    newnode->question=question;
    newnode->option_A=option_A;
    newnode->option_B=option_B;
    newnode->option_C=option_C;
    newnode->option_D=option_D;
    newnode->correctAnswer=correctAnswer;
    newnode->score=score;
    
    if (head_Q2 == NULL) {
        head_Q2 = newnode;
    }
    else {
        Node_Q * temp = head_Q2;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newnode;
        newnode->prev = temp;
    }
    Num_Q2++;
}

void Quiz::displayQuestionsLevel2() {
    Node_Q * curr = head_Q2;
    if (Num_Q2 == 0) {
        cout << "No Questions :(\n";
        return;
    }
    else {
        cout << "=> Questions: " << '\n';
        while (curr != NULL) {
            cout << "Q: " << curr->question << '\n';
            cout << "A: " << curr->option_A << '\n';
            cout << "B: " << curr->option_B << '\n';
            cout << "C: " << curr->option_C << '\n';
            cout << "D: " << curr->option_D << '\n';
            cout << "Correct Answer: " << curr->correctAnswer << '\n';
            cout << "Score: " << curr->score << '\n';
            cout << '\n';
            curr = curr->next;
        }
    }
}

void Quiz::playLevel1(string name){
    Node_U * user=head_U;
    Node_Q * temp=head_Q1;
    while (user != NULL) {
        if (user->name == name) {
            int ques = 1;
            char answer;
            cout << "Welcome '" << name << "' in Level 1\n" << '\n';
            cout << "Press enter to continue...\n";
            cin.get();
            system("cls");
            while(temp != NULL){
                cout<<ques++<<"Q) "<<temp->question<<"\n";
                cout<<"A) "<<temp->option_A<<"\n";
                cout<<"B) "<<temp->option_B<<"\n";
                cout<<"C) "<<temp->option_C<<"\n";
                cout<<"D) "<<temp->option_D<<"\n";
                cout<<"\n Enter your answer: ";
                cin>>answer;
                if(answer == temp->correctAnswer) {
                    cin.get();
                    cout<<"\nCorrect :) \n";
                    user->score += temp->score;
                    cout<< "You become " << user->score << " point\n\n";
                    cout << "Press enter to continue..." << "\n";
                    cin.get();
                    system("cls");
                }
                else {
                    cin.get();
                    cout<<"Wrong :( \n";
                    user->score += 0;
                    cout<< "You still " << user->score << " point\n\n";
                    cout << "Press enter to continue..." << "\n";
                    cin.get();
                    system("cls");
                }
                temp=temp->next;
            }
        }
        user = user->next;
    }
}

void Quiz::playLevel2(string name){
    Node_U * user=head_U;
    Node_Q * temp=head_Q2;
    while (user != NULL) {
        if (user->name == name) {
            if (user->score >= 60) {
                int ques=1;
                char answer;
                cout << "Welcome '" << name << "' in Level 2\n" << '\n';
                cout << "Press enter to continue...\n";
                cin.get();
                system("cls");
            
                while(temp!=NULL){
                    cout<<ques++<<"Q) "<<temp->question<<"\n";
                    cout<<"A) "<<temp->option_A<<"\n";
                    cout<<"B) "<<temp->option_B<<"\n";
                    cout<<"C) "<<temp->option_C<<"\n";
                    cout<<"D) "<<temp->option_D<<"\n";
                    cout<<"\nEnter your answer: ";
                    cin>>answer;
                    if(answer==temp->correctAnswer){
                        cin.get();
                        cout<<"\nCorrect :) \n";
                        user->score+=temp->score;
                        cout<< "You become " << user->score << " point\n\n";
                        cout << "Press enter to continue..." << "\n";
                        cin.get();
                        system("cls");
                    }
                    else{
                        cin.get();
                        cout<<"Wrong :( \n";
                        user->score+=0;
                        cout<< "You still " << user->score << " point\n\n";
                        cout << "Press enter to continue..." << "\n";
                        cin.get();
                        system("cls");
                    }
                    temp=temp->next;
                }
            }
            else {
                cout<<"You are not qualified to play level 2 \n\n";
                return;
            }
        }
        user = user->next;
    }
}

void Quiz::findName(string name, int level) {
    Node_U * temp = head_U;
    while (temp != NULL) {
        if (temp->name == name) {
            cin.get();
            if (level == 1) {
                playLevel1(name);
                return;
            }
            else {
                playLevel2(name);
                return;
            }
        }
        temp = temp->next;
    }
    cin.get();
    cout << "User Not Found :(" << '\n';
    cout << "=> You must login first... Enter your name here: ";
    string newName;
    cin >> newName;
    addUser(newName);
}

void Quiz::pushDeletedUser(Node_U * deletedName) {
        StackDeletedNode * newNode = new StackDeletedNode;
        newNode->deletedNode = deletedName;
        newNode->next = top;
        top = newNode;
        Num_SU++;
}

Quiz::Node_U * Quiz::popDeletedUser() {
    if (top == NULL) {
        cout << "Stack underflow" << '\n';
        return NULL;
    } else {
        StackDeletedNode * temp = top;
        top = top->next;
        Node_U * node = temp->deletedNode;
        Num_SU--;
        delete temp;
        return node;
    }
}

void Quiz::displayDeletedUser() {
    StackDeletedNode * temp = top;
    if (top != NULL)
    {
        cout << "Deleted users: " << '\n' ;
        while (temp != NULL) {
            cout << temp->deletedNode->name << " : " << temp->deletedNode->score << " Point\n";
            temp = temp->next;
        }
        cout << '\n';
    }
    else {
        cout << "No deleted users found." << '\n';
    }
}

void Quiz::restoreUser() {
    Node_U * deletedNode = popDeletedUser();
    if(deletedNode == NULL){
        cout<<"No users to restore. \n";
        return;
    }
    
    Node_U * curr = head_U;
    if(head_U == NULL) {
        deletedNode->next = head_U;
        head_U = deletedNode;
        displayAllUsers();
    }
    else {
        while(curr->next != NULL) {
            curr = curr->next;
        }
        deletedNode->next = curr->next;
        curr->next = deletedNode;
        Num_U++;
        cout << "User '" << deletedNode->name << "' restored.\n\n";
        displayAllUsers();
    }
}

void Quiz::sortUsers() {
    int swapped;
    Node_U * ptr1;
    Node_U * ptr2 = NULL;
    
    if (head_U == NULL) {
        return;
    }

    do {
        swapped = 0;
        ptr1 = head_U;
        while (ptr1->next != ptr2) {
            if (ptr1->score < ptr1->next->score) {
                swap(ptr1->score, ptr1->next->score);
                swap(ptr1->name, ptr1->next->name);
                swapped = 1;
            }
            ptr1 = ptr1->next;
        }
        ptr2 = ptr1;
    } while (swapped);
}

void Quiz::saving(string file) {
    ofstream outFile(file);
    if (outFile.is_open()) {
        outFile << "USERS " << Num_U << "\n";
        Node_U * temp = head_U;
        while (temp != NULL) {
            outFile << temp->name << " " << temp->score << " point\n";
            temp = temp->next;
        }

        outFile << "LEVEL1 " << Num_Q1 << "\n";
        Node_Q * temp2 = head_Q1;
        while (temp2 != NULL) {
            outFile << temp2->question << '\n';
            outFile << temp2->option_A << '\n';
            outFile << temp2->option_B << '\n';
            outFile << temp2->option_C << '\n';
            outFile << temp2->option_D << '\n';
            outFile << temp2->correctAnswer << '\n';
            outFile << temp2->score << '\n';

            temp2 = temp2->next;
        }

        outFile << "LEVEL2 " << Num_Q2 << "\n";
        Node_Q * temp3 = head_Q2;
        while (temp3 != NULL) {
            outFile << temp3->question << '\n';
            outFile << temp3->option_A << '\n';
            outFile << temp3->option_B << '\n';
            outFile << temp3->option_C << '\n';
            outFile << temp3->option_D << '\n';
            outFile << temp3->correctAnswer << '\n';
            outFile << temp3->score << '\n';

            temp3 = temp3->next;
        }

        outFile.close();
        cout << "Data is Saved :)" << '\n';
    }
    else {
        cout << "No data to be saved :( \n";
    }
}

void Quiz::loading(string file) {
    ifstream inFile(file);
    string line;
    if (inFile.is_open()) {
        // Read the number of users and their names and scores
        getline(inFile, line);
        int numUsers = stoi(line.substr(line.find(" ") + 1));
        for (int i = 0; i < numUsers; i++) {
            getline(inFile, line);
            string name = line.substr(0, line.find(" "));
            int score = stoi(line.substr(line.find(" ") + 1));
            addUser(name);
            Node_U * user = head_U;
            while (user != NULL) {
                if (user->name == name) {
                    user->score = score;
                    break;
                }
                user = user->next;
            }
        }

        // Read the questions for level 1
        getline(inFile, line);
        int numQ1 = stoi(line.substr(line.find(" ") + 1));
        for (int i = 0; i < numQ1; i++) {
            string question, optionA, optionB, optionC, optionD;
            char correctAnswer;
            int score;
            getline(inFile, question);
            getline(inFile, optionA);
            getline(inFile, optionB);
            getline(inFile, optionC);
            getline(inFile, optionD);
            getline(inFile, line);
            correctAnswer = line[0];
            getline(inFile, line);
            score = stoi(line.substr(line.find(" ") + 1));
            addQuestionLevel1(question, optionA, optionB, optionC, optionD, correctAnswer, score);
        }

        // Read the questions for level 2
        getline(inFile, line);
        int numQ2 = stoi(line.substr(line.find(" ") + 1));
        for (int i = 0; i < numQ2; i++) {
            string question, optionA, optionB, optionC, optionD;
            char correctAnswer;
            int score;
            getline(inFile, question);
            getline(inFile, optionA);
            getline(inFile, optionB);
            getline(inFile, optionC);
            getline(inFile, optionD);
            getline(inFile, line);
            correctAnswer = line[0];
            getline(inFile, line);
            score = stoi(line.substr(line.find(" ") + 1));
            addQuestionLevel2(question, optionA, optionB, optionC, optionD, correctAnswer, score);
        }

        // Close the file
        inFile.close();
        cout << "\t\t\t\t\tData is loaded\n";
    }
    else {
        cout << "\t\t\t\t\tNo saved data found\n";
    }
}

