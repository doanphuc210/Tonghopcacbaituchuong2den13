#include <iostream>
#include <string>

using namespace std;

// Define the MovieData structure
struct MovieData
{
    string title;
    string director;
    int yearReleased;
    int runningTime; // in minutes
    double productionCosts;
    double firstYearRevenue;
};

// Function to display movie information with profit/loss
void displayMovieInfo(const MovieData &movie)
{
    cout << "Title: " << movie.title << endl;
    cout << "Director: " << movie.director << endl;
    cout << "Year Released: " << movie.yearReleased << endl;
    cout << "Running Time: " << movie.runningTime << " minutes" << endl;
    cout << "Production Costs: $" << movie.productionCosts << endl;
    cout << "First Year Revenue: $" << movie.firstYearRevenue << endl;

    double profitLoss = movie.firstYearRevenue - movie.productionCosts;
    cout << "First Year Profit/Loss: $" << profitLoss << endl;
}

int main()
{
    // Create and display MovieData variables
    MovieData movie1 = {"Inception", "Christopher Nolan", 2010, 148, 160000000, 829895144};
    MovieData movie2 = {"The Shawshank Redemption", "Frank Darabont", 1994, 142, 25000000, 58};

    cout << "Movie 1 Information:\n";
    displayMovieInfo(movie1);
    cout << endl;

    cout << "Movie 2 Information:\n";
    displayMovieInfo(movie2);
    cout << endl;

    return 0;
}
