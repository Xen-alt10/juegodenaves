// [!] PISTA PARA EL ESTUDIANTE: 
// 1. La variable global debe ir al inicio del main().
// 2. El HUD debe actualizarse dentro del bucle while(!gameOver).
// 3. Los puntos se suman justo cuando una bala choca con un asteroide.

int score = 0; 

// Mostrar en pantalla (Agregar cerca de donde se imprimen las vidas)
gotoxy(15, 2); 
cout << "SCORE: " << score << "  ";

// Sumar puntos (Ubicar dentro del condicional de colisión Bala -> Asteroide)
score += 10;