/*
 * Course: COEN 2220 - Programming 2
 * Name: [Your Name]
 * Lab: Lab 7 - Abstract Data Types
 * Description: ADT contract, implementation, and client code practice
 * Due date: [Date]
 */

#include <iostream>
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
    // TODO (Part D): Add an int array named sessionMinutes for the stored session durations.
    // TODO (Part D): Add an int that tracks how many study sessions are stored.

public:
    // TODO (Part D): Write a constructor that creates an empty log.
    // TODO (Part D): Write addSession. It receives minutes and reports whether the session was stored.
    // TODO (Part D): Write totalMinutes as a const member function.
    // TODO (Part D): Write longestSession as a const member function.
    // TODO (Part D): Write size as a const member function.
    // TODO (Part D): Write isEmpty as a const member function.
};

int main()
{
    // ===== Resolve these TODOs later (Part E) =====

    // TODO (Part E): Create a StudySessionLog object and print whether it starts empty.
    // TODO (Part E): Add four dummy session durations and attempt to add a fifth.
    // TODO (Part E): Print the number of stored sessions and whether the fifth session was accepted.
    // TODO (Part E): Print the total minutes and the longest stored session.
    // TODO (Part E): Print descriptive English labels for all results.

    return 0;
}