#ifdef __linux__
#define CONTENT "cat "
#define LOCATION "pwd"
#define CLEAR "clear"
#define TASKS "ps -aux"
#define MEMORY "free -m"
#endif // __linux__

#ifdef __MINGW32__
#define CONTENT "type "
#define LOCATION "chdir"
#define CLEAR "cls"
#define TASKS "tasklist"
#define MEMORY "systeminfo"
#endif // __MINGW32__

#include "menu.h"

Menu::Menu(){
  this->flag = true;
  this->option = 0;
};

void Menu::show(){
  cout << "Menu" << endl;
  cout << "1. Mostrar contenido" << endl;
  cout << "2. Mostrar localizacion" << endl;
  cout << "3. Limpiar pantalla" << endl;
  cout << "4. Listar procesos" << endl;
  cout << "5. Memoria libre" << endl;
  cout << "6. Salir" << endl;
  cout << "\nIngresar opcion" << endl;
};

void Menu::start(){
  while (this->flag == true) {
    this->show();
    cin >> this->option;
    this->execute();
  }
};

void Menu::execute(){
  switch (this->option) {
    case 1:
    this->showContent();
    break;
    case 2:
    system(LOCATION);
    break;
    case 3:
    system(CLEAR);
    break;
    case 4:
    system(TASKS);
    break;
    case 5:
    system(MEMORY);
    break;
    case 6:
    cout<<"bye";
    exit(0);
    default:
    cout <<"Opcion no encontrada";
    exit(0);
  }
};

void Menu::showContent(){
  cout << "\nIngresar ruta:" << endl;
  cin>>this->route;
  string c = CONTENT + this->route;
  const char * command = c.c_str();
  system(command);
};
