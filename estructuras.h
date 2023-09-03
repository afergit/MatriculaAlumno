#ifndef FUNCIONES3_H
#define FUNCIONES3_H


struct estudiante{
	int codigo;
	string nombre, dni, apellido, genero, fechaNacimiento, direccion, celular;
	
};

struct curso{
	int codigo;
	string nombre;
	double creditos;
	string periodo;
	double costoxcredito;
	double costoCurso;
	estudiante estudiante;
	int pv;
};

struct Detalle{
	curso curso;
	int cantidad;
};

struct matricula{
	int codigo;
	estudiante estudiante;
	curso curso;
	double total;
	Detalle d[100];
	string fecha;
	int p_venta, impuesto, items;

};
int numEstudiantes = 6 , numCursos = 6 , numMatriculas = 6;

estudiante estudiantes[100];
curso cursos[100];
matricula matriculas[100];

void inicializar(){
	
	estudiantes[0].codigo= 1111;
	estudiantes[0].nombre= "Zarai";
	estudiantes[0].apellido= "Llajas";
	estudiantes[0].dni= "77896542";
	estudiantes[0].celular= "996853215";
	estudiantes[0].genero= "Femenino";
	estudiantes[0].fechaNacimiento= "05/06/1998";
	estudiantes[0].direccion= "Jorge Muelle 137";
		
	estudiantes[1].codigo= 2222;
	estudiantes[1].nombre="Carlos";
	estudiantes[1].apellido="Lopez";
	estudiantes[1].dni="72397503";
	estudiantes[1].celular="963258741";
	estudiantes[1].genero="Masculino";
	estudiantes[1].fechaNacimiento= "12/09/1995";
	estudiantes[1].direccion="Monte abeto 674";
	
	estudiantes[2].codigo= 3333;
	estudiantes[2].nombre="Magdiel";
	estudiantes[2].apellido="Tello";
	estudiantes[2].dni="72356985";
	estudiantes[2].celular="936227105";
	estudiantes[2].genero="Femenino";
	estudiantes[2].fechaNacimiento="03/12/2003";
	estudiantes[2].direccion= "Paul Linder 249";
	
	estudiantes[3].codigo=4444;
	estudiantes[3].nombre="Marcos";
	estudiantes[3].apellido="Mendez";
	estudiantes[3].dni="78945612";
	estudiantes[3].celular="987456321";
	estudiantes[3].genero="Masculino";
	estudiantes[3].fechaNacimiento="01/10/2000";
	estudiantes[3].direccion= "Av. Revolucion Mz M Lt 27";
	
	estudiantes[4].codigo=5555;
	estudiantes[4].nombre="Mateo";
	estudiantes[4].apellido="Montes";
	estudiantes[4].dni="77889944";
	estudiantes[4].celular="995511448";
	estudiantes[4].genero="Masculino";
	estudiantes[4].fechaNacimiento="19/08/2000";
	estudiantes[4].direccion= "Califas 151";
	
	estudiantes[5].codigo=5555;
	estudiantes[5].nombre="Camila";
	estudiantes[5].apellido="Barrios";
	estudiantes[5].dni="77339911";
	estudiantes[5].celular="987123654";
	estudiantes[5].genero="Femenino";
	estudiantes[5].fechaNacimiento="21/04/1998";
	estudiantes[5].direccion= "Las tunas 247";



	cursos[0].codigo=101;
	cursos[0].nombre="Matematica";
	cursos[0].creditos= 4;
	cursos[0].periodo= "1";
	cursos[0].costoxcredito = 30;
	cursos[0].costoCurso  = cursos[0].creditos * cursos[0].costoxcredito;
	
	
	cursos[1].codigo=102;
	cursos[1].nombre="Lenguaje";
	cursos[1].creditos= 3;
	cursos[1].periodo= "2";
	cursos[1].costoxcredito = 30;
	cursos[1].costoCurso  = cursos[1].creditos * cursos[1].costoxcredito;
	
	cursos[2].codigo=103;
	cursos[2].nombre="Programacion";
	cursos[2].creditos= 4;
	cursos[2].periodo= "3";
	cursos[2].costoxcredito = 40;
	cursos[2].costoCurso  = cursos[2].creditos * cursos[2].costoxcredito;
	
	cursos[3].codigo=104;
	cursos[3].nombre="Ciberseguridad";
	cursos[3].creditos= 4;
	cursos[3].periodo= "2";
	cursos[3].costoxcredito = 40;
	cursos[3].costoCurso  = cursos[3].creditos * cursos[3].costoxcredito;
	
	cursos[4].codigo=105;
	cursos[4].nombre="Quimica II";
	cursos[4].creditos= 5;
	cursos[4].periodo= "3";
	cursos[4].costoxcredito = 30;
	cursos[4].costoCurso  = cursos[4].creditos * cursos[4].costoxcredito;
	
		
	cursos[5].codigo=106;
	cursos[5].nombre="FISICA II";
	cursos[5].creditos= 5;
	cursos[5].periodo= "1";
	cursos[5].costoxcredito = 30;
	cursos[5].costoCurso  = cursos[5].creditos * cursos[5].costoxcredito;
	
	
	
	
	
	matriculas[0].codigo = 9000;
	matriculas[0].estudiante = estudiantes[0];
	matriculas[0].fecha = "04/07/2023";
	matriculas[0].curso = cursos[0];
for (int i = 0; i < matriculas[0].items; i++) {
    matriculas[0].total += matriculas[0].d[i].curso.creditos;
}
	matriculas[1].codigo = 9100;
	matriculas[1].estudiante = estudiantes[1];
	matriculas[1].fecha = "04/07/2023";
	matriculas[1].curso = cursos[1];
for (int i = 0; i < matriculas[1].items; i++) {
    matriculas[1].total += matriculas[1].d[i].curso.creditos;
}
	matriculas[2].codigo = 9200;
	matriculas[2].estudiante = estudiantes[2];
	matriculas[2].fecha = "04/07/2023";
	matriculas[2].curso = cursos[2];
for (int i = 0; i < matriculas[2].items; i++) {
    matriculas[2].total += matriculas[2].d[i].curso.creditos;
}
	
	matriculas[3].codigo = 9300;
	matriculas[3].estudiante = estudiantes[3];
	matriculas[3].fecha = "04/07/2023";
	matriculas[3].curso = cursos[3];
for (int i = 0; i < matriculas[3].items; i++) {
    matriculas[3].total += matriculas[3].d[i].curso.creditos;
}
	
	matriculas[4].codigo = 9400;
	matriculas[4].estudiante = estudiantes[4];
	matriculas[4].fecha = "04/07/2023";
	matriculas[4].curso = cursos[4];
for (int i = 0; i < matriculas[4].items; i++) {
    matriculas[4].total += matriculas[4].d[i].curso.creditos;
}
	
	matriculas[5].codigo = 9500;
	matriculas[5].estudiante = estudiantes[5];
	matriculas[5].fecha = "04/07/2023";
	matriculas[5].curso = cursos[5];
for (int i = 0; i < matriculas[5].items; i++) {
    matriculas[5].total += matriculas[5].d[i].curso.creditos;
}
	
	
	
}



#endif // FUNCIONES3_H
