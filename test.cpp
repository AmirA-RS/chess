using namespace std;
#include <iostream>
#include <vector>
#include <string>
class Piece
{
    public:
        vector<vector<int>> danger;
        vector<vector<int>> attacking;
        char type;
        int x;
        int y;
        char color;
        int moveNum;
        Piece(const int &x,const int &y)
        {
            this->x = x;
            this->y = y;
        }
        void move(const int&x, const int&y)
        {
            this->x = x;
            this->y = y;
        }
        virtual void setMoveNum()
        {}
};
class Pawn: public Piece
{
    public:
        void setMoveNum() override
        {
            if((x == 6 && color == 'W') || (x==1 && color == 'B'))
            {
                moveNum = 2;
            }
            else
                moveNum = 1;
        }
    
        Pawn(const int &x,const int &y, const char& col): Piece(x, y)
        {
            type = 'P';
            color = col;
            setMoveNum();
        }      
};
class Rook: public Piece
{
    public:
        void setMoveNum() override
        {
            moveNum = 4;
        }
    
        Rook(const int &x,const int &y, const char& col): Piece(x, y)
        {
            type = 'R';
            color = col;
            setMoveNum();
        }               
};
class Knight: public Piece
{
    public:
        void setMoveNum() override
        {
            moveNum = 8;
        }
    
        Knight(const int &x,const int &y, char col): Piece(x, y)
        {
            type = 'N';
            color = col;
            setMoveNum();
        }       
};
class King: public Piece
{
    public:
        void setMoveNum() override
        {
            moveNum = 8;
        }
    
        King(const int &x,const int &y, char col): Piece(x, y)
        {
            type= 'K';
            color= col;
            setMoveNum();
        }      
};
class Bishop: public Piece
{
    public:
        void setMoveNum() override
        {
            moveNum = 4; 
        }
    
        Bishop(const int &x,const int &y, char col): Piece(x, y)
        {
            type = 'B';
            color= col;
            setMoveNum();
        }      
};
class Queen: public Piece
{
    public:
        void setMoveNum() override
        {
            moveNum = 8;
        }
    
        Queen(const int &x,const int &y, char col): Piece(x, y)
        {
            type = 'Q';
            color = col;
            setMoveNum();
        } 
};
class Board
{
public:
    vector <string> dPos;
    vector <string> aPos;
    static vector<Piece*> pieces;
    static vector<Piece*> deleted;
    bool move(const int&x, const int&y, Piece* piece)
    {
        piece->setMoveNum();
        for(int i = 0; i<piece->moveNum; i++)
        {
            bool r = reach(x, y, i, piece);
            if(r)
            {
                if(exist(x, y))
                {
                    for(int i = 0; i<pieces.size(); i++)
                    {
                        if((*pieces[i]).x == x && (*pieces[i]).y == y&& inGame(pieces[i]) == 1)
                        {
                            deleted.insert(deleted.begin(), pieces[i]);
                            break;
                        }
                    }
                }
                piece->move(x, y);
                return true;
            }
        }
        return false;
    }
    bool reach(const int&a, const int&b, const int& type, Piece* piece)
    {
        const int& x = piece->x;
        const int& y = piece->y;
        const char& color = piece->color;
        const int& moveNum = piece->moveNum;
        if(piece->type == 'P')
        {
            if(moveNum == 2)
            {
                if(color == 'W')
                {
                    if(type == 0)
                    {
                        if(a==x-1 && b == y && !exist(a, b))
                            return true;
                        else if((a == x-1 && b == y-1) && exist(a, b))
                        {
                            if((*find(a, b)).color != (*find(x, y)).color)
                            {
                                return true;
                            }
                        }
                        else if((a == x-1 && b == y+1) && exist(a, b))
                        {
                            if((*find(a, b)).color != (*find(x, y)).color)
                            {
                                return true;
                            }
                        }
                    }
                    else if(type == 1)
                        if(a==x-2 && y == b && !exist(a, b))
                        {
                            for(int i = 1; i<2; i++)
                            {
                                if(exist(x-i, y))
                                    return false;
                            }
                            return true;
                        }
                }
                else
                {
                    if(type == 0)
                    {
                        if(a==x+1 && b == y && !exist(a, b))
                            return true;
                        else if((a == x+1 && b == y+1) && exist(a, b))
                        {
                            if((*find(a, b)).color != (*find(x, y)).color)
                            {
                                return true;
                            }
                        }
                        else if((a == x+1 && b == y-1)&& exist(a, b))
                        {
                            if((*find(a, b)).color != (*find(x, y)).color)
                            {
                                return true;
                            }
                        }
                    }
                    else if(type == 1)
                        if(a==x+2 && y == b && !exist(a, b))
                        {
                            for(int i = 1; i<2; i++)
                            {
                                if(exist(x+i, y))
                                    return false;
                            }
                            return true;
                        }
                }
            }
            else
            {
                if(color == 'W')
                {
                    if(a==x-1 && b == y && !exist(a, b))
                        return true;
                    else if((a == x-1 && b == y-1) &&  exist(a, b))
                    {
                        if((*find(a, b)).color != (*find(x, y)).color)
                        {
                            return true;
                        }
                    }
                    else if((a == x-1 && b == y+1) && exist(a, b))
                    {
                        if((*find(a, b)).color != (*find(x, y)).color)
                        {
                            return true;
                        }
                    }
                }
                else
                {
                    if(a==x+1 && b == y && !exist(a, b))
                        return true;
                    else if((a == x+1 && b == y+1) && exist(a, b))
                    {
                        if((*find(a, b)).color != (*find(x, y)).color)
                        {
                            return true;
                        }
                    }
                    else if((a == x+1 && b == y-1) && exist(a, b))
                    {
                        if((*find(a, b)).color != (*find(x, y)).color)
                        {
                            return true;
                        }
                    }
                }
            }
            return false;
        }
        else if(piece->type == 'R')
        {
            switch (type)
            {
            case 0:
                if(a==x && b>y)
                {
                    for(int i = 1; i<b-y; i++)
                    {
                        if(exist(x, y+i))
                            return false;
                    }
                    if(exist(a, b) && (*find(a, b)).color == color)
                        return false;
                    return true;
                }
                return false;
            
            case 1:
                if(a==x && b<y)
                {
                    for(int i = 1; i<y-b; i++)
                    {
                        if(exist(x, y-i))
                            return false;
                    }
                    if(exist(a, b) && (*find(a, b)).color == color)
                        return false;
                    return true;
                }
                return false;
            case 2:
                if(b==y && a>x)
                {
                    for(int i = 1; i<a-x; i++)
                    {
                        if(exist(x+i, y))
                            return false;
                    }
                    if(exist(a, b) && (*find(a, b)).color == color)
                        return false;
                    return true;
                }
                return false;
            case 3:
                if(b==y && a<x)
                {
                    for(int i = 1; i<x-a; i++)
                    {
                        if(exist(x-i, y))
                            return false;
                    }
                    if(exist(a, b) && (*find(a, b)).color == color)
                        return false;
                    return true;
                }
                return false;
            }
        }
        else if(piece->type == 'N')
        {
            switch (type)
            {
            case 0:
                if(x+2==a && y+1==b && (!exist(a, b) || (*find(a, b)).color != color))
                    return true;
                return false;   
            case 1:
                if(x+2==a && y-1==b && (!exist(a, b) || (*find(a, b)).color != color))
                    return true;
                return false; 
            case 2:
                if(x+1==a && y+2==b&& (!exist(a, b) || (*find(a, b)).color != color))
                    return true;
                return false; 
            case 3:
                if(x+1==a && y-2==b&& (!exist(a, b) || (*find(a, b)).color != color))
                    return true;
                return false; 
            case 4:
                if(x-1==a && y+2==b&& (!exist(a, b) || (*find(a, b)).color != color))
                    return true;
                return false;
            case 5:
                if(x-1==a && y-2==b&& (!exist(a, b) || (*find(a, b)).color != color))
                    return true;
                return false;
            case 6:
                if(x-2==a && y+1==b&& (!exist(a, b) || (*find(a, b)).color != color))
                    return true;
                return false;
            case 7:
                if(x-2==a && y-1==b&& (!exist(a, b) || (*find(a, b)).color != color))
                    return true;
                return false;
            
            }
        }
        else if(piece->type == 'K')
        {
            switch (type)
            {
            case 0:
                if(x+1==a && y+1==b&& (!exist(a, b) || (*find(a, b)).color != color))
                    return true;
                return false;   
            case 1:
                if(x+1==a && y==b&& (!exist(a, b) || (*find(a, b)).color != color))
                    return true;
                return false; 
            case 2:
                if(x+1==a && y-1==b&& (!exist(a, b) || (*find(a, b)).color != color))
                    return true;
                return false; 
            case 3:
                if(x==a && y-1==b&& (!exist(a, b) || (*find(a, b)).color != color))
                    return true;
                return false; 
            case 4:
                if(x-1==a && y-1==b&& (!exist(a, b) || (*find(a, b)).color != color))
                    return true;
                return false;
            case 5:
                if(x-1==a && y==b&& (!exist(a, b) || (*find(a, b)).color != color))
                    return true;
                return false;
            case 6:
                if(x-1==a && y+1==b&& (!exist(a, b) || (*find(a, b)).color != color))
                    return true;
                return false;
            case 7:
                if(x==a && y+1==b&& (!exist(a, b) || (*find(a, b)).color != color))
                    return true;
                return false;
            
            }
        }
        else if(piece->type == 'B')
        {
            switch (type)
            {
            case 0:
                if((a>x && b>y) && (a-x == b-y))
                {
                    for(int i = 1; i<a-x; i++)
                    {
                        if(exist(x+i, y+i))
                            return false;
                    }
                    if((!exist(a, b) || (*find(a, b)).color != color))
                        return true;
                }
                return false;
            
            case 1:
                if((a>x && b<y) && (a-x == y-b))
                {
                    for(int i = 1; i<a-x; i++)
                    {
                        if(exist(x+i, y-i))
                            return false;
                    }
                    if((!exist(a, b) || (*find(a, b)).color != color))
                        return true;
                }
                return false;
            case 2:
                if((a<x && b<y) && (a-x == b-y))
                {
                    for(int i = 1; i<x-a; i++)
                    {
                        if(exist(x-i, y-i))
                            return false;
                    }
                    if((!exist(a, b) || (*find(a, b)).color != color))
                        return true;
                }
                return false;
            case 3:
                if((a<x && b>y) && (x-a == b-y))
                {
                    for(int i = 1; i<x-a; i++)
                    {
                        if(exist(x-i, y+i))
                            return false;
                    }
                    if((!exist(a, b) || (*find(a, b)).color != color))
                        return true;
                }
                return false;
            }
        }
        else if(piece->type == 'Q')
        {
            switch (type)
            {
            case 0:
                if((a>x && b>y) && (a-x == b-y))
                {
                    for(int i = 1; i<a-x; i++)
                    {
                        if(exist(x+i, y+i))
                            return false;
                    }
                    if((!exist(a, b) || (*find(a, b)).color != color))
                        return true;
                }
                return false;
            
            case 1:
                if((a>x && b<y) && (a-x == y-b))
                {
                    for(int i = 1; i<a-x; i++)
                    {
                        if(exist(x+i, y-i))
                            return false;
                    }
                    if((!exist(a, b) || (*find(a, b)).color != color))
                        return true;
                }
                return false;
            case 2:
                if((a<x && b<y) && (a-x == b-y))
                {
                    for(int i = 1; i<x-a; i++)
                    {
                        if(exist(x-i, y-i))
                            return false;
                    }
                    if((!exist(a, b) || (*find(a, b)).color != color))
                        return true;
                }
                return false;
            case 3:
                if((a<x && b>y) && (x-a == b-y))
                {
                    for(int i = 1; i<x-a; i++)
                    {
                        if(exist(x-i, y+i))
                            return false;
                    }
                    if((!exist(a, b) || (*find(a, b)).color != color))
                        return true;
                }
                return false;
            case 4:
                if(a==x && b>y)
                {
                    for(int i = 1; i<b-y; i++)
                    {
                        if(exist(x, y+i))
                            return false;
                    }
                    if((!exist(a, b) || (*find(a, b)).color != color))
                        return true;
                }
                return false;
            
            case 5:
                if(a==x && b<y)
                {
                    for(int i = 1; i<y-b; i++)
                    {
                        if(exist(x, y-i))
                            return false;
                    }
                    if((!exist(a, b) || (*find(a, b)).color != color))
                        return true;
                }
                return false;
            case 6:
                if(b==y && a>x)
                {
                    for(int i = 1; i<a-x; i++)
                    {
                        if(exist(x+i, y))
                            return false;
                    }
                    if((!exist(a, b) || (*find(a, b)).color != color))
                        return true;
                }
                return false;
            case 7:
                if(b==y && a<x)
                {
                    for(int i = 1; i<x-a; i++)
                    {
                        if(exist(x-i, y))
                            return false;
                    }
                    if((!exist(a, b) || (*find(a, b)).color != color))
                        return true;
                }
                return false;
            }
        }
    }
    bool check(Piece* piece)
    {
        const int&x = piece->x;
        const int&y = piece->y;
        for(int i = 0; i<pieces.size(); i++)
            {
                if(inGame(pieces[i]) == 1)
                {
                    int x1 = (*pieces[i]).x;
                    int y1 = (*pieces[i]).y;
                    if((*pieces[i]).color != (*piece).color)
                    {
                        Piece* p1 = deleted.size()!=0?deleted[0]:0;
                        if(move(x, y, pieces[i]))
                        {
                            Piece* p2 = deleted.size()!=0?deleted[0]:0;
                            Piece* p3 = p2!=p1 ? p2:0;
                            undo(x1, y1, x, y, pieces[i], p3);
                            return true;
                        }
                    }
                }
            }
        return false;
    }
    bool mate(Piece* piece)
    {
        const int&x = piece->x;
        const int&y = piece->y;
        if(check(piece))
        {
            for(int i = 0; i<pieces.size(); i++)
            {
                if(inGame(pieces[i]) == 1)
                {
                    if((*pieces[i]).color == piece->color)
                    {
                        for(int j = 0; j<8; j++)
                        {
                            for(int k = 0; k<8; k++)
                            {
                                int x1 = (*pieces[i]).x;
                                int y1 = (*pieces[i]).y;
                                Piece* p1 = deleted.size()!=0?deleted[0]:0;
                                if(move(j, k, pieces[i]))
                                {
                                    Piece* p2 = deleted.size()!=0?deleted[0]:0;
                                    Piece* p3 = p2!=p1 ? p2:0;
                                    if(!check(piece))
                                    {
                                        undo(x1, y1, x, y, pieces[i], p3);
                                        return false;
                                    }
                                    else
                                    {
                                        undo(x1, y1, x, y, pieces[i], p3);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            return true; 
        }
        else
            return false;
    } 
    bool inGame(Piece* piece)
        {
            for(int i = 0; i<deleted.size(); i++)
            {
                if(piece == deleted[i])
                    return false;
            }
            return true;
        }
        string num2str(int&i, int&j)
        {
            string res;
            res += (char)(97+j);
            res += (char)(56-i);
            return res;
        }
        bool exist(const int&x, const int&y)
        {
            for(int i = 0; i<pieces.size(); i++)
            {
                if(((*pieces[i]).x == x && (*pieces[i]).y == y) && inGame(pieces[i]) == 1)
                    return true;
            }
            return false;
        }
        Piece* find(const int&x, const int&y)
        {
            if(exist(x, y))
            {
                for(int i = 0; i<pieces.size(); i++)
                {
                    if((*pieces[i]).x == x && (*pieces[i]).y == y && inGame(pieces[i]) == 1)
                        return (pieces[i]);
                }
            }
            else
                return 0;
        }
        void sort(vector <string>& list)
        {
            for(int i = 0; i<list.size()-1; i++)
            {
                for(int j = i+1; j<list.size(); j++)
                {
                    if(list[i]>list[j])
                    {
                        string y = list[i];
                        list[i] = list[j];
                        list[j] = y;
                    }
                }
            }
        }
        bool checkIn(int&i, int&j, Piece& piece)
        {
            for(int k = 0; k<piece.danger.size(); k++)
            {
                if(piece.danger[k][0] == i  && piece.danger[k][1] == j)
                    return true;
            }
            return false;
        }
        bool checkFull(Piece& piece)
        {
            int x1 = piece.x;
            int y1 = piece.y;
            for(int i = 0; i<8; i++)
            {
                for(int j = 0; j<8; j++)
                {
                    Piece* p1 = deleted.size()!=0?deleted[0]:0;
                    if(move(i, j, &piece))
                    {
                        Piece* p2 = deleted.size()!=0?deleted[0]:0;
                        Piece* p3 = p2!=p1 ? p2:0;
                        undo(x1, y1, i, j, &piece, p3);
                        if(!(checkIn(i, j, piece)))
                            return false;
                    }
                }
            }
            return true;
        }
        void dangerPos(const char& color)
        {
            for(int i = 0; i<pieces.size(); i++)
            {
                string res;
                if((*pieces[i]).color == color)
                {
                    if(!(*pieces[i]).danger.empty())
                    {
                        if(checkFull((*pieces[i])))
                        {
                            res += num2str((*pieces[i]).x, (*pieces[i]).y);
                            res += (*pieces[i]).type;
                            res += (*pieces[i]).color;
                            dPos.push_back(res);
                        }
                        else
                        {
                            for(int j = 0; j<(*pieces[i]).danger.size(); j++)
                            {
                                res = "";
                                res += num2str((*pieces[i]).x, (*pieces[i]).y);
                                res += (*pieces[i]).type;
                                res += (*pieces[i]).color;
                                res += num2str((*pieces[i]).danger[j][0], (*pieces[i]).danger[j][1]);
                                dPos.push_back(res); 
                            }
                        }
                    }
                }
            }
            if(dPos.size()!=0)
                sort(dPos);
        }
        void attackPos(const char& color)
        {
            for(int i = 0; i<pieces.size(); i++)
            {
                string res;
                if(!(*pieces[i]).attacking.empty())
                {
                    if((*pieces[i]).color == color)
                    {
                        for(int j = 0; j<(*pieces[i]).attacking.size(); j++)
                        {
                            res = "";
                            res += num2str((*pieces[i]).x, (*pieces[i]).y);
                            res += (*pieces[i]).type;
                            res += (*pieces[i]).color;
                            res += num2str((*pieces[i]).attacking[j][0], (*pieces[i]).attacking[j][1]);
                            aPos.push_back(res); 
                        }
                    }
                }
            }
            if(aPos.size()!=0)
                sort(aPos);
        }
        void show(const char& type)
        {
            if(type == 'D')
            {
                if(dPos.size() == 0)
                    cout<<"No Answer!";
                else
                {
                    for(int i = 0; i<dPos.size(); i++)
                    {
                        cout<<dPos[i]<<'\n';
                    }
                }
            }
            else if(type == 'A')
            {
                if(aPos.size() == 0)
                    cout<<"No Answer!";
                else
                {
                    for(int i = 0; i<aPos.size(); i++)
                    {
                        cout<<aPos[i]<<'\n';
                    }
                }
            }
        }
        void undo(int x1, int y1, int x2, int y2, Piece* p1, Piece* changed)
        {
            if(changed!=0)
            {
                for(int i = 0; i<deleted.size(); i++)
                {
                    if(changed == deleted[i])
                    {
                        deleted.erase(deleted.begin()+i);
                        break;
                    }
                }
            }
            (*p1).x = x1;
            (*p1).y = y1;
        }
        void defence(const char& color)
        {
            Piece* king;
            Piece* minor = 0;
            for(int i = 0; i<pieces.size(); i++)
            {
                if((*pieces[i]).color== color && (*pieces[i]).type == 'K')
                {
                    king = pieces[i];
                }
                else if((*pieces[i]).color!= color && (*pieces[i]).type == 'K')
                {
                    minor = pieces[i];
                }
            }
            for(int i = 0; i<pieces.size(); i++)
            {
                if((*pieces[i]).color== color)
                {
                    BB(minor, king, 0, pieces[i]);
                }
            }
        }
        void attack(const char& color)
        {
            Piece* king;
            Piece* minor = 0;
            for(int i = 0; i<pieces.size(); i++)
            {
                if((*pieces[i]).color!= color && (*pieces[i]).type == 'K')
                {
                    king = pieces[i];
                }
                else if((*pieces[i]).color== color && (*pieces[i]).type == 'K')
                {
                    minor = pieces[i];
                }
            }
            for(int i = 0; i<pieces.size(); i++)
            {
                if((*pieces[i]).color== color)
                {
                    AA(minor, king, 0, pieces[i]);
                }
            }  
        }
        bool AA(Piece* minor, Piece* king, int level, Piece* starter = 0)
        {
            if(level == 0)
            {
                int x1 = (*starter).x;
                int y1 = (*starter).y;
                for(int i = 0; i<8; i++)
                {
                    for(int j = 0; j<8; j++)
                    {
                        bool checked = false;
                        Piece* p1 = deleted.size()!=0?deleted[0]:0;
                        if(move(i, j, starter))
                        {
                            Piece* p2 = deleted.size()!=0?deleted[0]:0;
                            Piece* p3 = p2!=p1 ? p2:0;
                            if(mate(king) && (minor == 0 || !check(minor)))
                            {
                                (*starter).attacking.push_back({i, j});
                                checked = true;
                            }
                            if(checked == false&& (minor == 0 || !check(minor)))
                            {
                                bool next = AA(minor, king, level+1);
                                if(next == true)
                                {
                                  (*starter).attacking.push_back({i, j});  
                                }
                            }
                            undo(x1, y1, i, j, starter, p3);
                        }
                    }
                }
            }
            if(level == 1)
            {
                for(int i = 0; i<pieces.size(); i++)
                {
                    if((*pieces[i]).color == (*king).color && inGame(pieces[i]) == 1)
                    {
                        int x1 = (*pieces[i]).x;
                        int y1 = (*pieces[i]).y;
                        for(int j = 0; j<8; j++)
                        {
                            for(int k = 0; k<8; k++)
                            {
                                Piece* p1 = deleted.size()!=0?deleted[0]:0;
                                if(move(j, k, pieces[i]))
                                {
                                    // if(mamad == "BW")
                                    //     cout<<(*pieces[i]).type<<(*pieces[i]).color<<(*pieces[i]).x<<(*pieces[i]).y<<' ';
                                    Piece* p2 = deleted.size()!=0?deleted[0]:0;
                                    Piece* p3 = p2!=p1 ? p2:0;
                                   if(!check(king)) 
                                   {
                                       bool next = AA(minor, king, level+1);
                                       if(next == false)
                                        {
                                           undo(x1, y1, j, k, pieces[i], p3);
                                           return false; 
                                        }
                                   }
                                   undo(x1, y1, j, k, pieces[i], p3);
                                }

                            }
                        }
                    }
                }
                return true;
            }
            if(level == 2)
            {
                for(int i = 0; i<pieces.size(); i++)
                {
                    if((*pieces[i]).color != (*king).color && inGame(pieces[i]) == 1)
                    {
                        int x1 = (*pieces[i]).x;
                        int y1 = (*pieces[i]).y;
                        for(int j = 0; j<8; j++)
                        {
                            for(int k = 0; k<8; k++)
                            {
                                Piece* p1 = deleted.size()!=0?deleted[0]:0;
                                if(move(j, k, pieces[i]))
                                {
                                    // if(mamad == "BW")
                                    //     cout<<"LEV2:"<<(*pieces[i]).type<<(*pieces[i]).color<<(*pieces[i]).x<<(*pieces[i]).y<<' ';
                                    Piece* p2 = deleted.size()!=0?deleted[0]:0;
                                    Piece* p3 = p2!=p1 ? p2:0;
                                   if(mate(king) && (minor == 0 || !check(minor))) 
                                   {    
                                       //cout<<1;
                                       undo(x1, y1, j, k, pieces[i], p3);
                                       return true;
                                   }
                                   undo(x1, y1, j, k, pieces[i], p3);
                                }

                            }
                        }
                    }
                }
                return false;
            }
        }
        string mamad;
        bool BB(Piece* minor, Piece* king, const int& level, Piece* starter = 0)
        {
            if(level == 0)
            {
                int x1 = (*starter).x;
                int y1 = (*starter).y;
                for(int i = 0; i<8; i++)
                {
                    for(int j = 0; j<8; j++)
                    {
                        bool checked = false;
                        bool next = false;
                        Piece* p1 = deleted.size()!=0?deleted[0]:0;
                        if(move(i, j, starter))
                        {
                            Piece* p2 = deleted.size()!=0?deleted[0]:0;
                            Piece* p3 = p2!=p1 ? p2:0;
                            if(check(king))
                            {
                                (*starter).danger.push_back({i, j});
                                checked = true;
                            }
                            if(checked == false)
                            {
                                next = BB(minor, king, level+1);
                                if(next == true)
                                {
                                    (*starter).danger.push_back({i, j});  
                                }
                            }
                            undo(x1, y1, i, j, starter, p3);
                        }
                    }
                }
            }
            if(level == 1)
            {
                for(int i = 0; i<pieces.size(); i++)
                {
                    if((*pieces[i]).color!= (*king).color && inGame(pieces[i]) == 1)
                    {
                        int x1 = (*pieces[i]).x;
                        int y1 = (*pieces[i]).y;
                        for(int j = 0; j<8; j++)
                        {
                            for(int k = 0; k<8; k++)
                            {
                                Piece* p1 = deleted.size()!=0?deleted[0]:0;
                                if(move(j, k, pieces[i]))
                                {
                                    Piece* p2 = deleted.size()!=0?deleted[0]:0;
                                    Piece* p3 = p2!=p1 ? p2:0;
                                    if(mate(king)&& (minor == 0 || !check(minor))) 
                                    {
                                        undo(x1, y1, j, k, pieces[i], p3);
                                        return true;
                                    }
                                    else if((minor == 0 || !check(minor)))    
                                    {
                                        bool next = BB(minor, king, level+1);
                                        if(next == true)
                                        {
                                            undo(x1, y1, j, k, pieces[i], p3);
                                            return true; 
                                        }
                                    }
                                    undo(x1, y1, j, k, pieces[i], p3);
                                }

                            }
                        }
                    }
                }
                return false;
            }
            if(level == 2)
            {
                for(int i = 0; i<pieces.size(); i++)
                {
                    if((*pieces[i]).color == (*king).color && inGame(pieces[i]) == 1)
                    {
                        int x1 = (*pieces[i]).x;
                        int y1 = (*pieces[i]).y;
                        for(int j = 0; j<8; j++)
                        {
                            for(int k = 0; k<8; k++)
                            {
                                Piece* p1 = deleted.size()!=0?deleted[0]:0;
                                if(move(j, k, pieces[i]))
                                {
                                    Piece* p2 = deleted.size()!=0?deleted[0]:0;
                                    Piece* p3 = p2!=p1 ? p2:0;
                                   if(!check(king)) 
                                   {    
                                        bool next = BB(minor, king, level+1);
                                        if(next == false)
                                        {
                                            undo(x1, y1, j, k, pieces[i], p3); 
                                            return false; 
                                        } 
                                   }
                                   undo(x1, y1, j, k, pieces[i], p3);
                                }

                            }
                        }
                    }
                }
                return true;
            }
            if(level == 3)
            {
                for(int i = 0; i<pieces.size(); i++)
                {
                    if((*pieces[i]).color != (*king).color && inGame(pieces[i]) == 1)
                    {
                        int x1 = (*pieces[i]).x;
                        int y1 = (*pieces[i]).y;
                        for(int j = 0; j<8; j++)
                        {
                            for(int k = 0; k<8; k++)
                            {
                                Piece* p1 = deleted.size()!=0?deleted[0]:0;
                                if(move(j, k, pieces[i]))
                                {
                                    Piece* p2 = deleted.size()!=0?deleted[0]:0;
                                    Piece* p3 = p2!=p1 ? p2:0;
                                   if(mate(king)&& (minor == 0 || !check(minor))) 
                                   {    
                                       undo(x1, y1, j, k, pieces[i], p3);
                                       return true;
                                   }
                                   undo(x1, y1, j, k, pieces[i], p3);
                                }

                            }
                        }
                    }
                }
                return false;
            }
        }
};
vector<Piece*>Board::pieces = {};
vector<Piece*>Board::deleted = {};
int main()
{
    char inf[3];
    cin>>inf;
    char*** a;
    int n = 8;
    a = new char**[8];
    for(int i = 0; i<n; i++)
        a[i] = new char*[n];
    for(int i = 0 ; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            a[i][j] = new char[3];
        }
    }
    for(int i = 0 ; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            cin>>a[i][j];
            if(a[i][j][0] == 'P')
            {
                Board::pieces.push_back(new Pawn(i, j, a[i][j][1]));
            }
            else if(a[i][j][0] == 'Q')
            {
                Board::pieces.push_back(new Queen(i, j, a[i][j][1]));
            }
            else if(a[i][j][0] == 'N')
            {
                Board::pieces.push_back(new Knight(i, j, a[i][j][1]));
            }
            else if(a[i][j][0] == 'B')
            {
               Board::pieces.push_back(new Bishop(i, j, a[i][j][1]));
            }
            else if(a[i][j][0] == 'R')
            {
                Board::pieces.push_back(new Rook(i, j, a[i][j][1]));
            }
            else if(a[i][j][0] == 'K')
            {
                Board::pieces.push_back(new King(i, j, a[i][j][1]));
            }
        }
    }
    for(int i = 0 ; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            delete a[i][j];
        }
    }
    for(int i = 0; i<n; i++)
        delete a[i];
    Board board;
    if(inf[1] == 'D')
    {
        if(inf[0] == 'B')
        {
            board.defence('B');
            board.dangerPos('B');
            board.show('D');
        }
        else
        {
            board.defence('W');
            board.dangerPos('W');
            board.show('D');
        }
    }
    else
    {
        if(inf[0] == 'B')
        {
            board.attack('B');
            board.attackPos('B');
            board.show('A');
        }
        else
        {
            board.attack('W');
            board.attackPos('W');
            board.show('A');
        }
    }
}