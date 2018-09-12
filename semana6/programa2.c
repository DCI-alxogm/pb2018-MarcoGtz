#include<stdio.h>

int main()
{
	FILE *fp;
	int i,h=0,m=0,s1=0,s2=0,s3=0,s4=0,s5=0,s6=0,s7=0,s8=0,s9=0;
	int edad[10],sexo[10],semestre[10];
	float promedio[10],p=0;

	fp=fopen("alumnos.txt","r");
	for(i=0;i<10;i++){
	fscanf(fp,"%i", &edad[i]);
	fscanf(fp,"%i", &sexo[i]);
	fscanf(fp,"%i", &semestre[i]);
	fscanf(fp,"%f", &promedio[i]);}
	fclose(fp);

	for(i=0;i<10;i++){

		if(sexo[i]==0){
		h++;}
		else{
		m++;}

		if(semestre[i]==1){
		s1++;}
		else{
		if(semestre[i]==2){
		s2++;}
		else{
		if(semestre[i]==3){
		s3++;}
		else{
		if(semestre[i]==4){
		s4++;}
		else{
		if(semestre[i]==5){
		s5++;}
		else{
		if(semestre[i]==6){
		s6++;}
		else{
		if(semestre[i]==7){
		s7++;}
		else{
		if(semestre[i]==8){
		s8++;}
		else{
		s9++;}
		}}}}}}}

		p=p+promedio[i];
	}
	p=p/10;
	
	fp=fopen("resumen.txt","w");
	fprintf(fp,"Se capturaron 10 alumnos de los cuales:\n");
	fprintf(fp,"%i son mujeres y %i son hombres\n",m,h);
	fprintf(fp,"%i son de primero\n",s1);
	fprintf(fp,"%i son de segundo\n",s2);
	fprintf(fp,"%i son de tercero\n",s3);
	fprintf(fp,"%i son de cuarto\n",s4);
	fprintf(fp,"%i son de quinto\n",s5);
	fprintf(fp,"%i son de sexto\n",s6);
	fprintf(fp,"%i son de septimo\n",s7);
	fprintf(fp,"%i son de octavo\n",s8);
	fprintf(fp,"%i son de noveno\n",s9);
	fprintf(fp,"y el promedio de calificaciones de todos los alumnos es:\n");
	fprintf(fp,"%f\n",p);

	return 0;
}
