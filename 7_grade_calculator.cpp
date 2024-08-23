#include <iostream>

using namespace std;

char grading(int score)
{
    if (score > 90)
    {
        return 'A';
    }
    else if (score > 80)
    {
        return 'B';
    }
    else if (score > 70)
    {
        return 'C';
    }
    else if (score > 60)
    {
        return 'D';
    }
    return 'E';
}

int main()
{
    int score1, score2, score3;
    float avg;
    char grade1, grade2, grade3, avgGrade;

    while (true)
    {
        cout << "Please enter the score of math class (0~100): ";
        cin >> score1;
        if (!cin.good() || score1 > 100 || score1 < 0)
        {
            cout << "Invalid score" << endl;
            cin.clear();
            cin.ignore();
        }
        else
        {
            grade1 = grading(score1);
            break;
        }
    }

    while (true)
    {
        cout << "Please enter the score of history class (0~100): ";
        cin >> score2;
        if (!cin.good() || score2 > 100 || score2 < 0)
        {
            cout << "Invalid score" << endl;
            cin.clear();
            cin.ignore();
        }
        else
        {
            grade2 = grading(score2);
            break;
        }
    }

    while (true)
    {
        cout << "Please enter the score of chinese class (0~100): ";
        cin >> score3;
        if (!cin.good() || score3 > 100 || score3 < 0)
        {
            cout << "Invalid score" << endl;
            cin.clear();
            cin.ignore();
        }
        else
        {
            grade3 = grading(score3);
            break;
        }
    }

    avg = roundf((float)(score1 + score2 + score3) / 3 * 100) / 100;
    avgGrade = grading(avg);
    cout << "===============================================" << endl;
    cout << "     Educational Performance Summarization     " << endl;
    cout << "===============================================" << endl;
    cout << "|   Math   |  History  |  Chinese  |   Avg.   |" << endl;
    cout << "-----------------------------------------------" << endl;
    cout << "|  " << score1 << "(" << grade1 << ")  |";
    cout << "  " << score2 << "(" << grade2 << ")   |";
    cout << "  " << score3 << "(" << grade3 << ")   |";
    cout << "  " << avg << "(" << avgGrade << ")  |" << endl;
    cout << "===============================================" << endl;

    return 0;
}
