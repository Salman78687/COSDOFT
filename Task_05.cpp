#include <iostream>
#include <vector>
using namespace std;

const int rows = 5;
const int columns = 8;

vector<vector<char>> seats(rows, vector<char>(columns, 'A'));

void welcome(){
	
cout << "\n\n\n\n\n\n\n\t\t\t";
	for(int i=0;i<62;i++){
	 	cout << "\xB2";
	}
	cout << "\n\n"	
<< "\t\t\tMM       MM  MMMMMMMM   MM            MM          MMMMMMMMMM                \n"
<< "\t\t\tMM       MM  MMMMMMMM   MM            MM          MMMMMMMMMM                \n" 
<< "\t\t\tMM       MM  MM         MM            MM          MM      MM      /MMMMMMM\\ \n"
<< "\t\t\tMM       MM  MM         MM            MM          MM      MM     M         M\n"
<< "\t\t\tMM       MM  MM         MM            MM          MM      MM     M  M   M  M\n"
<< "\t\t\tMMMMMMMMMMM  MMMMMMMM   MM            MM          MM      MM     M         M\n"
<< "\t\t\tMMMMMMMMMMM  MMMMMMMM   MM            MM          MM      MM     M    M    M\n"
<< "\t\t\tMM       MM  MM         MM            MM          MM      MM     M         M\n"
<< "\t\t\tMM       MM  MM         MM            MM          MM      MM     M  MMMMM  M\n"
<< "\t\t\tMM       MM  MM         MM            MM          MM      MM     M         M\n" 
<< "\t\t\tMM       MM  MMMMMMMM   MMMMMMMMMM    MMMMMMMM    MMMMMMMMMM      \\MMMMMMM/ \n"
<< "\t\t\tMM       MM  MMMMMMMM   MMMMMMMMMM    MMMMMMMM    MMMMMMMMMM                \n"
<< endl <<endl << "\t\t\t";

	for(int i=0;i<62;i++){
	 	cout << "\xB2";
	}
	cout << "\n\n";	
sleep(3);
system("cls");
}

void Display_Seats() {
	cout << "\n\nSEATS AVAILABILITY:\n\n";
    cout << "  ";
    for (int col = 0; col < columns; col++) {
        cout << col + 1 << " ";
    }
    cout << endl;

    for (int row = 0; row < rows; row++) {
        cout << static_cast<char>('A' + row) << " ";
        for (int col = 0; col < columns; col++) {
            cout << seats[row][col] << " ";
        }
        cout << endl;
    }
}

bool Book_Seat(int row, int col) {
    if (row < 0 || row >= rows || col < 0 || col >= columns) {
        cout << "Invalid seat selection. Please try again." << endl;
        return false;
    }

    if (seats[row][col] == 'X') {
        cout << "Sorry, the seat is already booked. Please choose another seat." << endl;
        return false;
    }

    seats[row][col] = 'X';
    return true;
}

int main() {
	
	welcome();
	
	int movie;
    cout << "==== WELCOME to the Movie Ticket Booking System ====\n\n";
    cout << "MOVIES SHOWING:\n\n1. Mission Impossible\n2. Oppenheimer\n3. Barbie\n4. John Wick 4\n5. Insidious\n\nEnter the number of movie to book tickets: ";
    cin >> movie;
    
    static int numTickets=0;
    while (true) {
        Display_Seats();

        char row;
        int col;
        cout << "\nEnter the row (A-E) and column (1-8) of the seat you want to book (e.g., B3): ";
        cin >> row >> col;

        int rowIndex = row - 'A';
        int colIndex = col - 1;

        if (Book_Seat(rowIndex, colIndex)) {
        	numTickets++;
            cout << "Seat booked successfully!\n";
        }

        char continueChoice;
        cout << "\nDo you want to book another seat? (y/n): ";
        cin >> continueChoice;

        if (continueChoice != 'y') {
        	int price = 10;
            cout << "\n\nTotal cost: $" << numTickets * price << endl;
            cout << "\nThank you for using the Movie Ticket Booking System. Enjoy the movie!" << endl;
            break;
        }
    }

return 1;
}
