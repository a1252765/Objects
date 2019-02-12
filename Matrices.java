public class Matrices{
	
	public static void main(String args[]){
		MatrizInt m1 =new MatrizInt(CapturaEntrada.capturarEntero("Capture el numero renglones de la Matriz 1"), CapturaEntrada.capturarEntero("Capture el numero de columnas de la Matriz 1"));
		
		MatrizInt m2 =new MatrizInt(CapturaEntrada.capturarEntero("Capture el numero de renglones de la Matriz 2"), CapturaEntrada.capturarEntero("Capture el numero de columnas de la Matriz 2"));
		
		MatrizInt m3;
		MatrizInt m4;
		MatrizInt m5;

		MatrizDbl m01 =new MatrizDbl(CapturaEntrada.capturarEntero("Capture el numero renglones de la Matriz 01"), CapturaEntrada.capturarEntero("Capture el numero de columnas de la Matriz 01"));

		MatrizDbl m02 =new MatrizDbl(CapturaEntrada.capturarEntero("Capture el numero renglones de la Matriz 02"), CapturaEntrada.capturarEntero("Capture el numero de columnas de la Matriz 02"));

		MatrizDbl m03;
		MatrizDbl m04;
		MatrizDbl m05;

		m01.iniciarMatDbl();
		System.out.println();
		System.out.println("Matriz 01: ");
		m01.imprimirMatDbl();
		
		m02.iniciarMatDbl();
		System.out.println();
		System.out.println("Matriz 02: ");
		m02.imprimirMatDbl();	

		m04 = OperacionesMatricesDbl.transponerMatDbl(m01);
		System.out.println();
		System.out.println("Transpuesta Matriz 01: ");
		m04.imprimirMatDbl();	

		if (Validaciones.validarCuadraturaDbl(m01,m02)){
			m03 = new MatrizDbl(m01.getRenglones(), m01.getColumnas());
			m03 = OperacionesMatricesDbl.sumarMatDbl(m01,m02);
			System.out.println();
			System.out.println("Matriz 03 = Matriz 01 + Matriz 02");
			m03.imprimirMatDbl();

		}
		else System.out.println("No son cuadradas, no se puede realizar la suma");


		if (Validaciones.validarMultiplicabilidadDbl(m01,m02)){
			m03 = new MatrizDbl(m01.getRenglones(), m02.getColumnas());
			m03 = OperacionesMatricesDbl.multiplicarMatDbl(m01,m02);
			System.out.println();
			System.out.println("Matriz 03 = Matriz 01 * Matriz 02");
			m03.imprimirMatDbl();
		}

		else 
		{
			System.out.println();
			System.out.println("No son multiplicables");
		}

		m1.iniciarMatInt();
		System.out.println();
		System.out.println("Matriz 1: ");
		m1.imprimirMatInt();
		
		m2.iniciarMatInt();
		System.out.println();
		System.out.println("Matriz 2: ");
		m2.imprimirMatInt();	


		m4 = OperacionesMatrices.transponerMatInt(m1);
		System.out.println();
		System.out.println("Transpuesta Matriz 1: ");
		m4.imprimirMatInt();	
		

		if (Validaciones.validarCuadratura(m1,m2)){
			m3 = new MatrizInt(m1.getRenglones(), m1.getColumnas());
			m3 = OperacionesMatrices.sumarMatInt(m1,m2);
			System.out.println();
			System.out.println("Matriz 3 = Matriz 1 + Matriz 2");
			m3.imprimirMatInt();

		}
		else 
		{
			System.out.println();
			System.out.println("No son cuadradas, no se puede realizar la suma");
		}

		if (Validaciones.validarMultiplicabilidad(m1,m2)){
			m3 = new MatrizInt(m1.getRenglones(), m2.getColumnas());
			m3 = OperacionesMatrices.multiplicarMatInt(m1,m2);
			System.out.println();
			System.out.println("Matriz 3 = Matriz 1 * Matriz 2");
			m3.imprimirMatInt();

//			m3.imprimirMatIntG();
		}

		else 
		{
			System.out.println();
			System.out.println("No son multiplicables");
		}	
	}

}