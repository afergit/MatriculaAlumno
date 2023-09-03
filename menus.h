#ifndef FUNCIONES1_H
#define FUNCIONES1_H

void menuPrincipal(){
	cout << "Menu de Opciones\n\n";
	cout << "1. Mantenimiento de Estudiantes\n";
	cout << "2. Mantenimiento de Cursos\n";
	cout << "3. Mantenimiento de Matriculas\n";
	cout << "4. Reportes\n";
	cout << "5. Resetear\n";
	cout << "6. Inicializar\n";
	cout << "7. Salir\n\n";
	cout << "Elija la opcion: ";
}

void menuOperaciones(string titulo){
	cout << "Menu de " << titulo << "\n\n";
	cout << "1. Ingresar " << titulo << "\n";
	cout << "2. Editar " << titulo << "\n";
	cout << "3. Eliminar " << titulo << "\n";
	cout << "4. Listar " << titulo << "\n";
	cout << "5. Salir\n\n";
	cout << "Elija la opcion: ";
}

void menuReportes(){
	cout << "Menu de Reportes\n\n";
	cout << "1. Lista de Estudiantes x Curso\n";
	cout << "2. Lista de Estudiantes x Genero\n";
	cout << "3. Lista de Cursos x Periodo\n";
	cout << "4. Lista de Cursos x Credito\n";
	cout << "5. Salir\n\n";
	cout << "Elija la opcion: ";
}

#endif // FUNCIONES1_H
