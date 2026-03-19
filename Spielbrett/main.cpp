#include <iostream>
#include <vector>
std::vector<std::vector<char>> createBoard(int height, int lenght) {
    return std::vector<std::vector<char>> (height, std::vector<char>(lenght, '-'));
};

void printBoard(const std::vector<std::vector<char>> & feld)  {
    for (int y = 0; y < feld.size(); y++)   {
        for(int x = 0; x < feld[y].size(); x++) {
            std::cout << feld[y][x] << " ";
        }
        std::cout << std::endl;
    }
};

void setPlayer(std::vector<std::vector<char>> & feld, int playerX, int playerY)    {
    feld[playerY][playerX] = 'P';
};

int main()  {
    int height = 5;
    int lenght = 5;

    std::vector<std::vector<char>> feld = createBoard(height, lenght);
    
    setPlayer(feld, 2, 2);

    printBoard(feld);

    return 0;
}