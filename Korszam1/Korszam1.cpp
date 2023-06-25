// Korszam1.cpp : Defines the entry point for the application.
//
#include "Korszam1.h"
using namespace std;

// Function to read the initial grid from a file
std::vector<std::vector<char>> readGridFromFile(const std::string& filename) {
    std::ifstream inputFile(filename);
    std::vector<std::vector<char>> grid;

    if (inputFile.is_open()) {
        std::string line;
        while (std::getline(inputFile, line)) {
            std::vector<char> row;
            for (char c : line) {
                row.push_back(c);
            }
            grid.push_back(row);
        }
        inputFile.close();
    }

    return grid;
}

//Fájlba való kiírás
void writeGridToFile(const std::vector<std::vector<char>>& grid, const std::string& filename, int generation) {
    std::ofstream outputFile(filename, std::ios::app);

    if (outputFile.is_open()) {
        outputFile << "Generation " << generation << ":\n";
        for (const auto& row : grid) {
            for (char c : row) {
                if (c == ' ')
                    outputFile << 'X';
                else
                    outputFile << c;
            }
            outputFile << '\n';
        }
        outputFile << "============================\n";
        outputFile.close();
    }
}

// élő szomszédok számának kiszámítása
int countLiveNeighbors(const std::vector<std::vector<char>>& grid, int row, int col) {
    int liveCount = 0;
    int numRows = grid.size();
    int numCols = grid[0].size();

    for (int i = -1; i <= 1; ++i) {
        for (int j = -1; j <= 1; ++j) {
            int ni = row + i;
            int nj = col + j;

            // Ignore the current cell
            if (i == 0 && j == 0)
                continue;

            // Check if the neighbor is within the grid boundaries
            if (ni >= 0 && ni < numRows && nj >= 0 && nj < numCols) {
                if (grid[ni][nj] == 'O')
                    liveCount++;
            }
        }
    }

    return liveCount;
}

// Generáció fejlesztő fügvény
std::vector<std::vector<char>> evolveGrid(const std::vector<std::vector<char>>& grid) {
    int numRows = grid.size();
    int numCols = grid[0].size();
    std::vector<std::vector<char>> nextGenGrid(numRows, std::vector<char>(numCols));

    for (int i = 0; i < numRows; ++i) {
        for (int j = 0; j < numCols; ++j) {
            int liveNeighbors = countLiveNeighbors(grid, i, j);

            if (grid[i][j] == 'O') {
                if (liveNeighbors < 2 || liveNeighbors > 3)
                    nextGenGrid[i][j] = ' ';
                else
                    nextGenGrid[i][j] = 'O';
            } else {
                if (liveNeighbors == 3)
                    nextGenGrid[i][j] = 'O';
                else
                    nextGenGrid[i][j] = ' ';
            }
        }
    }

    return nextGenGrid;
}
int main()
{
	// A kisbeadando feladatok header fajl funkcióinak tesztelése, nincs minden függvény tesztelve, csak a mindenböl valami
	double res = integrate( sq<double>, lin<double> ,1000, 0.0, 1.0);
	
	Vector2d v = { 1, 2 };
	Vector2d u = { 3, 4 };
	double  w = v.dot( u);
	std::cout<<"The sum of the two vectors is:\n"<< w <<std::endl;

	Matrix<double> A(2, 2);
	A(0, 0) = 1;
	A(0, 1) = 2;
	A(1, 0) = 3;
	A(1, 1) = 4;

	Matrix<double> B(2, 2);
	B(0, 0) = 1;
	B(0, 1) = 2;
	B(1, 0) = 3;
	B(1, 1) = 4;

	Matrix<double> C = A * 6;
	std::cout << "The matrix is:\n" << C << std::endl;
	
	
	// A nagybeadandó feladatok megoldása
	std::string inputFile = "input.txt";
    std::string outputFile = "output.txt";
    int generations = 10;
    // beolvasás az inputból
    std::vector<std::vector<char>> grid = readGridFromFile(inputFile);
	// output fájl űritése
    std::ofstream clearFile(outputFile);
    clearFile.close();
    // kezdő, majd kivánt számú generáció kiírása
    writeGridToFile(grid, outputFile, 0);
    for (int i = 1; i <= generations; ++i) {
        grid = evolveGrid(grid);
        writeGridToFile(grid, outputFile, i);
    }
    return 0;
}
