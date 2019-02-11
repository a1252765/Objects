public class Operaciones{

int a,b;
	

	public Operaciones(int a, int b){
		this.a = a;
		this.b = b;
	
	}


	public void Suma (){

		System.out.println(this.a +" + "+ this.b + " = "+(this.a+this.b));
	}
	
	public void Resta (){

		System.out.println(this.a +" - "+ this.b + " = "+(this.a-this.b));
	}
	
	public void Multiplicacion (){

		System.out.println(this.a +" * "+ this.b + " = "+(this.a*this.b));
	}

	public void Division() {
		if(this.b==0) System.out.println("ERROR");
		else System.out.println(this.a +" / "+ this.b + " = "+(this.a/this.b));
	}

	public void Ayuda(){

		System.out.println("java <Operacion> <Argumento 1> <Argumento 2>" + "\n\n" + "Opcion\t\tNumero\n" + "Ayuda\t\t0\n" + "Suma\t\t1\n" + "Resta\t\t2\n" + "Multiplicacion\t3\n" + "Division\t4");	
	}

}