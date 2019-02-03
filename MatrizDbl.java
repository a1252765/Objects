import java.util.Random;

public class MatrizDbl extends Matriz
{
	double array[][];

	public MatrizDbl(int renglones, int columnas)
	{
		super(renglones, columnas);
		array = new double[renglones][columnas];
	}

	public void iniciarMatDbl()
	{
		Random gen = new Random();
		for(int i=0; i < this.renglones; i++)
			for(int j=0;j<this.columnas;j++)
				this.array[i][j] = (double)(gen.nextDouble());
	}

	//imprimir en Consola
	public void imprimirMatDbl()
	{
		for (int i=0; i< this.renglones; i++)
		{
			for(int j=0; j< this.columnas; j++)
			{
				System.out.print(this.array[i][j] + "  \t");
			}
			System.out.println();
		}
	}

	//imprimir en Grafico, pero se tienen que cargar algunas librerias 
/*	public void imprimirMatDblG()
	{
		DecimalFormat df = new DecimalFormat("#00");
		String cadena = "";
		for(int i=0; i< this.renglones; i++)
		{
			for(int j=0; j< this.columnas; j++)
			{
				cadena = cadena + df.format(array[i][j]) + "\t\t";
			}
			cadena = cadena + "\n";
		}

		JOptionPane.showMessageDialog(null,cadena);
	}
*/
} //fin clase MatrizDbl