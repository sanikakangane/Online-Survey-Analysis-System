// Online Survey Analysis System

#include <iostream>
using namespace std;

int main()
{
    // Variables to store rating, total sum, and number of responses
    float rating, sum = 0;

    // Array to store up to 100 survey responses
    float r[100];

    int count = 0;   // Counts number of responses
    int choice;      // Stores menu choice

    do
    {
        // Display survey menu
        cout << "\n--- Online Survey Analysis System ---\n";
        cout << "1/ Submit Response\n";
        cout << "2/ View Analysis\n";
        cout << "3/ Exit\n";
        cout << "👉 Enter your choice: ";
        cin >> choice;

        // Option 1: Submit a new survey response
        if (choice == 1)
        {
            cout << "⭐ Enter rating (1 - 5): ";
            cin >> rating;

            // Check if rating is valid
            if (rating >= 1 && rating <= 5)
            {
                r[count] = rating;   // Store rating in array
                sum += rating;       // Add rating to total sum
                count++;             // Increase response count

                cout << "✅ Response submitted successfully!\n";
            }
            else
            {
                cout << "❌ Invalid rating! Please enter between 1 and 5.\n";
            }
        }

        // Option 2: View survey analysis
        else if (choice == 2)
        {
            // If no responses yet
            if (count == 0)
            {
                cout << "⚠️ No responses yet.\n";
            }
            else
            {
                // Calculate average rating
                float avg = sum / count;

                cout << "\n📈 --- Survey Analysis --- 📈\n";
                cout << "Average Rating: " << avg << endl;
                cout << "Total Responses: " << count << endl;
            }
        }

    } 
    while (choice != 3);   // Loop continues until user selects Exit

    // Exit message
    cout << "🙏 Thank you for using the Survey System!\n";

    return 0;
}