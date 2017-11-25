//regresa Area del Cuadrado
float areaCuadrado(float lado){
	//Area = 1*1
	return lado * lado;	
}
float perimetroCuadrado(float lado){
	//Perimetro = lado * lado * lado * lado
	return lado * 4;
}
float areaTriangulo(float base, float altura){
	return (base * altura) /2;
}
float perimetroTriangulo(float lado1, float lado2,float lado3){
	return lado1 + lado2+ lado3;
}
float areaRectangulo(float lado1, float lado2){
	return lado1 * lado2;
}
float perimetroRectangulo(float lado1, float lado2){
	float temp = (lado1 * 2);
	float temp2 = (lado2 * 2);
	return temp + temp2;
}
float areaTrapecio(float altura, float lado1, float lado2){
	float temp = (altura + lado1);
	float temp2 = (lado1 + lado2);
	return temp + temp2;
}
float perimetroTrapecio(float lado1, float lado2,float lado3, float lado4){
	float temp = (lado1 + lado2);
	float temp2 = (lado3 + lado4);
	return temp + temp2;  
}
