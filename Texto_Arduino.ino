/*Universidad Tecnica del Norte
Nombre: Henry Lema
Asignatura:Sistemas Embebidos
*/
 #include <LiquidCrystal.h> // Librería LCD

LiquidCrystal lcd(13, 12, 11, 10, 9, 8);  // selección de pines para LCD

const char vector [7]={'O','N','I','U','D','R','A'}; // vector de impresión en LCD
const char vector2 [7]={'A','R','D','U','I','N','O'};// vector2 de impresión en LCD
int i;     // variable que recorre el vector
int j; // variable que recorre el vector
const int btn = 7; // boton para limpiar la pantalla
void setup() {
  lcd.begin(16, 2);   // inicializa la LCD
  pinMode(btn,INPUT);
}


void loop() {
 

  
for(j=0;j<7;j++){          //ciclo de recorrido en vector
    lcd.setCursor(j,0);      //selecciona posición en LCD
    lcd.print(vector2[j]);    //imprime posición del vector seleccionado
    delay(200);              // tiempo de visualización
     
    }
 
  for(i=0;i<7;i++){          //ciclo de recorrido en vector
    lcd.setCursor(i,1);      //selecciona posición en LCD
    lcd.print(vector[i]);    //imprime posición del vector seleccionado
    delay(200);              // tiempo de visualización
   
      }
    if(digitalRead(btn)==LOW)
    lcd.clear();  // limpia la pantalla
}
