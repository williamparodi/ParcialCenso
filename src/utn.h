
#ifndef UTN_H_
#define UTN_H_

int utn_getString(char pStringIngresado[],char * mensaje,char * mensajeError,int limite,int reintentos);
int utn_getInt(int *pNumeroIngresado,
		char * mensaje,char * mensajeError,int minimo,int maximo,int reintentos);
int utn_getFloat(float *pNumeroIngresado,
		char * mensaje,char * mensajeError,int minimo,int maximo,int reintentos);
int myGets(char cadena[],int len);
int getInt(int * resultado);
int getFloat(float * resultado);
int esNumero(char cadena[],int limite);
int esFloat(char cadena[],int limite);
int pasarMayusculaPrimerCaracter(char string[]);
int esLetraConEspacio(char cadena[],int limite);
int utn_getNombreCompleto(char pStringIngresado[],char * mensaje,char * mensajeError,int limite,int reintentos);
int esLetra(char cadena[],int limite);
int esCodigoVuelo(char cadena[],int limite);
int utn_getFlyCode(char pFlyCodeIngresado[],char * mensaje,char * mensajeError,int limite,int reintentos);
int validarFecha(int dia,int mes,int anio,int edad);
int utn_getDiaMesAnio(int* pdia,int* pMes,int* pAnio,int edad,char * mensaje,
		char * mensajeError,int minino,int maximo,int reintentos);

#endif /* UTN_H_ */
