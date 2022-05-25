#ifndef BOARD_H
#define BOARD_H

#include <SFML/Graphics.hpp>
#include "user.h"
#include "data.h"
#include "cell.h"
#include "setting.h"
#include "helper.h"

class Board
{
public:
    Board(sf::RenderWindow* _window);
    sf::RenderWindow* window;
    Cells cells;
    User* user_w;
    User* user_b;
    User* curr_user;
    Piece* curr_piece;
    sf::Font font;
    bool end;
    bool checked;
    sf::Text status_text;
    vector <string> dPos;
    vector <string> aPos;
    static vector<Piece*> pieces;
    static vector<Piece*> deleted;
    void init();
    void draw();
    void run();
    void mouse_clicked(const sf::Vector2i& position);
    void cell_occupied_clicked(const int&row, const int&column);
    void cell_empty_clicked(int row, int column);
    void put_xo_in_cell(int row, int column);
    void check_end();
    void update_status_text();
    bool move(const int&x, const int&y, Piece* piece, bool movePiece);
    bool reach(const int&a, const int&b, const int& type, Piece* piece);
    bool check(Piece* piece);
    void initPiece();
    void green(Piece*);
    void red(Piece*);
    void blue(Piece*);
    Piece* find_king(const char&);
    bool mate(Piece* piece);
    bool inGame(Piece* piece);
    string num2str(int&i, int&j);
    bool exist(const int&x, const int&y);
    Piece* find(const int&x, const int&y);
    void sort(vector <string>& list);
    bool checkIn(int&i, int&j, Piece& piece);
    bool checkFull(Piece& piece);
    void dangerPos(const char& color);
    void attackPos(const char& color);
    void show(const char& type);
    void undo(int x1, int y1, int x2, int y2, Piece* p1, Piece* changed);
    bool check_win(const char&color);
    void check_checked(const char&color);
    void defence(const char& color);
    void attack(const char& color);
    bool AA(Piece* minor, Piece* king, int level, Piece* starter = 0);
    bool BB(Piece* minor, Piece* king, const int& level, Piece* starter = 0);
};

#endif