/*
 * Course: COEN 2220 - Programming 2
 * Name: [Your Name]
 * Lab: Lab 7 - Abstract Data Types
 * Description: Guided example - ADT contract, implementation, and client code
 * Due date: [Date]
 */

#include <iostream>
#include <string>
using namespace std;

/*
 * BookHoldLog ADT
 *
 * Data:
 * A sequence of up to four book hold IDs.
 *
 * Operations:
 * addHold(id): Adds one book hold ID when space remains; returns whether it was added.
 * contains(id): Reports whether an equal book hold ID is stored.
 * size(): Returns the number of stored hold IDs.
 * isEmpty(): Reports whether no hold IDs are stored.
 */
 class BookHoldLog
{
private:
    static const int CAPACITY = 4;
    string holdIds[CAPACITY]; // The implementation stores IDs in a fixed array.
    int count;                // The implementation tracks used array positions.

public:
    BookHoldLog()
    {
        count = 0;            // A new log begins with no stored hold IDs.
    }

    int size() const
    {
        return count;         // Client code may ask for the count, but cannot change it.
    }

    bool isEmpty() const
    {
        return count == 0;    // The log is empty exactly when no IDs are stored.
    }

    // --- B3: Add one book hold ID ---
    // TODO (B3): Paste addHold here.
    bool addHold(const string& holdId)
{
    if (count == CAPACITY)
    {
        return false;     // Do not write outside the fixed array capacity.
    }

    holdIds[count] = holdId;
    count++;
    return true;
}

    // --- B4: Search stored book hold IDs ---
    // TODO (B4): Paste contains here.
    bool contains(const string& holdId) const
{
    for (int index = 0; index < count; index++)
    {
        if (holdIds[index] == holdId)
        {
            return true;  // Stop as soon as one matching ID is found.
        }
    }

    return false;         // No stored ID matched the requested value.
}

};

int main()
{
    cout << boolalpha;        // Print bool results as true or false.

    BookHoldLog holds;        // Client code creates one empty log object.

    cout << "Stored holds: " << holds.size() << endl;
    cout << "Log is empty: " << holds.isEmpty() << endl;

    // --- B3: Add book hold IDs through the public interface ---
    // TODO (B3): Paste addHold test calls here.
    holds.addHold("BK-104");
    holds.addHold("BK-215");

    cout << "Stored holds: " << holds.size() << endl;

    // --- B4: Search through the public interface ---
    // TODO (B4): Paste contains test calls here.
    cout << "Contains BK-215: " << holds.contains("BK-215") << endl;
    cout << "Contains BK-310: " << holds.contains("BK-310") << endl;

    return 0;
}