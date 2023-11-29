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
};

// Function to display movie information
void displayMovieInfo(const MovieData &movie)
{
    cout << "Title: " << movie.title << endl;
    cout << "Director: " << movie.director << endl;
    cout << "Year Released: " << movie.yearReleased << endl;
    cout << "Running Time: " << movie.runningTime << " minutes" << endl;
    cout << endl;
}

int main()
{
    // Create MovieData variables and store values
    MovieData movie1 = {"Inception", "Christopher Nolan", 2010, 148};
    MovieData movie2 = {"The Shawshank Redemption", "Frank Darabont", 1994, 142};

    // Display information about each movie
    cout << "Movie 1 Information:\n";
    displayMovieInfo(movie1);

    cout << "Movie 2 Information:\n";
    displayMovieInfo(movie2);

    return 0;
}
