/*
 * Course: COEN 2220 - Programming 2
 * Name: [Your Name]
 * Lab: Lab 7 - Abstract Data Types
 * Description: ADT contract, implementation, and client code practice
 * Due date: [Date]
 */

#include <iostream>
#include <stdexcept>
using namespace std;

/*
 * StudySessionLog ADT
 *
 * Data:
 * TODO (Part C): Describe the study session durations managed by this ADT.
 * A sequence of up to four study session durations, each measured in minutes.
 *
 * Operations:
 * TODO (Part C): Describe addSession(minutes), including its result when the log cannot accept another session.
 * addSession(minutes): Adds one study session duration when space remains; returns whether it was added.

 * TODO (Part C): Describe totalMinutes().
 *totalMinutes(): Returns the sum of all stored session durations.

 * TODO (Part C): Describe longestSession() and its precondition.
 *longestSession(): Returns the longest stored session duration; precondition: the log is not empty.

 * TODO (Part C): Describe size() and isEmpty().
 *size(): Returns the number of stored session durations.
 *isEmpty(): Returns whether the log contains no sessions.

 */
class StudySessionLog
{
private:
    // ===== Resolve these TODOs later (Part D) =====

    // TODO (Part D): Add a fixed capacity constant of four study sessions.
    static const int CAPACITY = 4;
    // TODO (Part D): Add an int array named sessionMinutes for the stored session durations.
    int sessionMinutes[CAPACITY];
    // TODO (Part D): Add an int that tracks how many study sessions are stored.
    int count;

public:
    // TODO (Part D): Write a constructor that creates an empty log.
    StudySessionLog()
    {
        count = 0; // A new log begins with no stored session durations.
    }
    // TODO (Part D): Write addSession. It receives minutes and reports whether the session was stored.
    bool addSession(int minutes)
    {
        if (count == CAPACITY)
        {
            return false; // Do not write outside the fixed array capacity.
        }

        sessionMinutes[count] = minutes;
        count++;
        return true;
    }

    // TODO (Part D): Write totalMinutes as a const member function.
    int totalMinutes() const
    {
        int total = 0;
        for (int index = 0; index < count; index++)
        {
            total += sessionMinutes[index];
        }
        return total;
    }
    // TODO (Part D): Write longestSession as a const member function.
    int longestSession() const
    {
        if (count == 0)
        {
            throw runtime_error("Log is empty. Cannot determine longest session.");
        }

        int longest = sessionMinutes[0];
        for (int index = 1; index < count; index++)
        {
            if (sessionMinutes[index] > longest)
            {
                longest = sessionMinutes[index];
            }
        }
        return longest;
    }
    // TODO (Part D): Write size as a const member function.
    int size() const
    {
        return count;
    }
    // TODO (Part D): Write isEmpty as a const member function.
    bool isEmpty() const
    {
        return count == 0;
    }   
};

int main()
{
    // ===== Resolve these TODOs later (Part E) =====

    // TODO (Part E): Create a StudySessionLog object and print whether it starts empty.
    StudySessionLog log;
    cout << "Is the log empty? " << (log.isEmpty() ? "Yes" : "No") << endl;
    // TODO (Part E): Add four dummy session durations and attempt to add a fifth.
    log.addSession(65);
    log.addSession(45);
    log.addSession(30);
    log.addSession(90);
    bool fifthAdded = log.addSession(120);
    // TODO (Part E): Print the number of stored sessions and whether the fifth session was accepted.
    // cout << "Number of stored sessions: " << log.size() << endl; -------
    cout << "Was the fifth session accepted? " << (fifthAdded ? "Yes" : "No") << endl;
    // TODO (Part E): Print the total minutes and the longest stored session.
    // cout << "Total minutes: " << log.totalMinutes() << endl; ----------
    // cout << "Longest session: " << log.longestSession() << endl; ----------
    // TODO (Part E): Print descriptive English labels for all results.
    // cout << "Descriptive labels for all results:" << endl; **
    // cout << "Is the log empty? " << (log.isEmpty() ? "Yes" : "No") << endl; --------
    cout << "Number of stored sessions: " << log.size() << endl;
    //cout << "Was the fifth session accepted? " << (fifthAdded ? "Yes" : "No") << endl; ------------
    cout << "Total minutes: " << log.totalMinutes() << endl;
    cout << "Longest session: " << log.longestSession() << endl;

    return 0;
}