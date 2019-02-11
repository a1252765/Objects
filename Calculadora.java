class Calculadora {
	
	public static void main (String[] args){

		
		int opcion = Integer.parseInt(args[0]);
		int a = Integer.parseInt(args[1]);
		int b = Integer.parseInt(args[2]);
		
		Operaciones operaciones= new Operaciones (a,b);		
		

		switch(opcion){
			
			case 0: operaciones.Ayuda();
				break;
			case 1: operaciones.Suma();
				break;
			case 2: operaciones.Resta();
				break;
			case 3: operaciones.Multiplicacion();
				break;
			case 4: operaciones.Division();
				break;
		}


	}
}