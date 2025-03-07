#include "Pattern.h"
#include "../../client/client/Macro.hpp"
#include "../state.h"

GET_SET(engine::Pattern,std::vector<state::Actor*>,Map)


engine::Pattern::Pattern(std::vector<std::string> args)
{
    _Name = args[0];
    _ResPath = args[1];
    _Size = sf::Vector2i(std::stoi(args[2]),std::stoi(args[3]));
    int _col = 0,_lines = 0;
    Patterns[_Name] = this;


    std::ifstream file(_ResPath);
    if (!file.is_open()){
        throw std::runtime_error("file '" +  _ResPath + "' not found");
    }

    for( std::string line; getline( file, line ); ) {
        if(line.find('#') == std::string::npos && line.find_first_not_of(' ') != std::string::npos) {
            std::string str = line;
            std::string separator(",");
            size_t pos_start = 0, pos_end, delim_len = separator.length();
            std::string token;
            std::vector<std::string> items;
            while ((pos_end = str.find (separator, pos_start)) != std::string::npos) {
                token = str.substr (pos_start, pos_end - pos_start);
                pos_start = pos_end + delim_len;
                items.push_back (token);
            }
            items.push_back (str.substr (pos_start));

            for(std::string str : items)
            {
                switch((char)str[0])
                {
                    case '1':
                    {
                        std::vector<std::string> args = std::vector<std::string>();
                        args.push_back("PIECE_"+std::to_string(_col)+"_"+std::to_string(_lines));
                        args.push_back("BG_TILE_SAND");
                        args.push_back("0");
                        args.push_back("0");
                        args.push_back("0");
                        args.push_back("0");
                        args.push_back("0");
                        args.push_back("STD_ATTACK;STD_MOVE");
                        state::Actor* _m = new state::Actor(args);
                        _m->ID(0xDE000000 + (Patterns.size() << 16) + (_col << 8) + _lines);
                        _m->AssignPosition(_col,_lines);
                        _Map.push_back(_m);
                    }
                    break;

                    case 'A':
                        _Origin = sf::Vector2i(_col,_lines);
                    break;
                }
                _col++;
            }
            _col = 0;
            _lines++;
        }
    }

    for(state::Manageable* m : _Map)
        m->AssignPosition(m->Position().x - _Origin.x,m->Position().y - _Origin.y);

}

engine::Pattern::Pattern(std::string args) 
{

}
