#include <iostream>

int main() {

  // La magia empieza aquí

  int gryffindor = 0; 
  int hufflepuff = 0; 
  int ravenclaw = 0; 
  int slytherin = 0;

  int respuesta1;
  int respuesta2;
  int respuesta3;
  int respuesta4;
  
  std::cout << "¡La prueba del sombrero seleccionador!\n";
  
  std::cout << "Q1) Cuando muera, quiero que la gente me recuerde como:\n";"\n";

  std::cout << "1) El bueno\n";
  std::cout << "2) El grande\n";
  std::cout << "3) El sabio\n";
  std::cout << "4) El valiente\n";
  std::cin >> respuesta1;
  
  if (respuesta1 ==1) {
    hufflepuff++;
  } else if (respuesta1==2){
    slytherin++;
  } else if (respuesta1==3){
    ravenclaw++;
    } else if (respuesta1==4){
    gryffindor++;
    }else
    std::cout << "Respuesta no válida\n";
 
  std::cout << "Q2) ¿Amanecer o Atardecer?\n";"\n";

  std::cout << "1) Amanecer\n";
  std::cout << "2) Atardecer\n";
  std::cin >> respuesta2;
 
   if (respuesta2 ==1) {
     gryffindor++;
     ravenclaw++;
  } else if (respuesta2==2){
    slytherin++;
     hufflepuff++;
  } else 
    std::cout << "Respuesta no válida\n";
  
    std::cout << "Q3) ¿Qué tipo de instrumento satisface más a tu oído?\n";"\n";

  std::cout << "1) El violín\n";
  std::cout << "2) La trompeta\n";
  std::cout << "3) El piano\n";
  std::cout << "4) El tambor\n";
  std::cin >> respuesta3;
  
  if (respuesta3 ==1) {
    slytherin++;
  } else if (respuesta3==2){
   hufflepuff++; 
  } else if (respuesta3==3){
    ravenclaw++;
    } else if (respuesta3==4){
    gryffindor++;
    }else
    std::cout << "Respuesta no válida\n";
 
      std::cout << "Q4) ¿Qué camino te tienta más?\n";"\n";

  std::cout << "1) La calle soleada y ancha cubierta de hierba\n";
  std::cout << "2) El callejón estrecho, oscuro, iluminado por linternas\n";
  std::cout << "3) El camino sinuoso del bosque cubierto de hojas\n";
  std::cout << "4) La calle adoquinada (edificios antiguos)\n";
  std::cin >> respuesta4;
  
  if (respuesta4 ==1) {
   hufflepuff++; 
  } else if (respuesta4==2){
    slytherin++;
  } else if (respuesta4==3){
    gryffindor++;
    } else if (respuesta4==4){
    ravenclaw++;
    }else
    std::cout << "Respuesta no válida\n";

 // The code is fine until now, here it starts getting messy
  
   std::cout << "\nFelicitaciones por haber sido seleccionado en... ";

  int max = 0;
  std::string house;

  if (gryffindor > max)
  {

    max = gryffindor;
    house = "Gryffindor";

  }

  if (hufflepuff > max)
  {

    max = hufflepuff;
    house = "Hufflepuff";

  }

  if (ravenclaw > max)
  {

    max = ravenclaw;
    house = "Ravenclaw";

  }

  if (slytherin > max)
  {

    max = slytherin;
    house = "Slytherin";

  }

  std::cout << house << "!\n";

  return 0;

}
