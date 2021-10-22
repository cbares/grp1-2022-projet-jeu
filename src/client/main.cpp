#include <iostream>
#include <client.h>

// Les lignes suivantes ne servent qu'à vérifier que la compilation avec SFML fonctionne
#include <SFML/Graphics.hpp>

void testSFML() {
    sf::Texture texture;
}

// Fin test SFML

#include <state.h>

using namespace std;
using namespace state;

int main(int argc,char* argv[])
{
    
    /*Manageable* bg_map = new Manageable("BG_MAP","/home/ensea/PLT/projet-jeu/rapport/map_simple2.png");
    Manageable* bg_tile = new Manageable("BG_TILE","/home/ensea/PLT/projet-jeu/res/texture/Ground/grass2.png");
    Manageable* actor0 = new Manageable("ACTOR0","/home/ensea/PLT/projet-jeu/res/texture/Characters/Champions/Arthax.png");
    cout << "Resource loaded" << endl;
    Manager* bg_mgr = new Manager("BG_MGR");
    Manager* actor_mgr = new Manager("ACTOR_MGR");
    cout << "MGR loaded" << Manager::Managers.size() << endl;
    //bg_mgr->Add(bg_map);
    bg_mgr->Add(bg_tile);
    bg_tile->Sprite()->setScale(0.1,0.1);
    //actor_mgr->Add(actor0);
    cout << "Resource added" << bg_mgr->Elements()->size() << endl;
    MainFrame* mf = new MainFrame("TEST",800,800);
    */
   if (argv[1]=="hello"){
       cout<<"Bonjour le monde"<<(argv[1])<<endl;
   }
    //cout << "Bonjour le monde!" << ((argv[1]) ? argv[1] : "hello") << endl;
    return 0;
}
