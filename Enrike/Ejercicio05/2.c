int Producto(int a , int b){
	if(b == 0)
		return 0;
	else
		return a + Producto(a, b - 1);
}