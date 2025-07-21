
#include <iostream>
#include <vector>
using namespace std;

struct Question {
    string text;
    vector<string> options;
    char correctOption;
};

void startQuiz(vector<Question>& questions) {
    int score = 0;
    int total = questions.size();

    for (int i = 0; i < total; i++) {
        cout << "\nQ" << i + 1 << ": " << questions[i].text << endl;
        for (int j = 0; j < 4; j++) {
            cout << char('A' + j) << ". " << questions[i].options[j] << endl;
        }

        char userAnswer;
        cout << "Your answer (A/B/C/D): ";
        cin >> userAnswer;

        if (toupper(userAnswer) == questions[i].correctOption) {
            cout << "Correct!\n";
            score++;
        } else {
            cout << "Wrong! Correct answer: " << questions[i].correctOption << "\n";
        }
    }

    cout << "\nQuiz Completed!\n";
    cout << "Your score: " << score << " out of " << total << endl;
}

int main() {
    vector<Question> questions = {
        {"What is the capital of India?", {"Mumbai", "Delhi", "Kolkata", "Chennai"}, 'B'},
        {"Which language is used for web apps?", {"Python", "C++", "HTML", "Java"}, 'C'},
        {"What is 2 + 2?", {"3", "4", "5", "6"}, 'B'},
        {"Which planet is known as the Red Planet?", {"Earth", "Venus", "Mars", "Jupiter"}, 'C'},
        {"Who is the founder of Microsoft?", {"Steve Jobs", "Bill Gates", "Elon Musk", "Larry Page"}, 'B'}
    };

    cout << "----- Welcome to the Quiz Game -----\n";
    startQuiz(questions);

    return 0;
}
