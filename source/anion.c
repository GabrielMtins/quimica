#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <stdint.h>
#include <time.h>

const static char* tabel[] = {
	// element    // name
	"CH3COO-",    "acetato",
	"AlO2-",      "aluminato",
	"BiO3-",      "bismutato",
	"BrO3-",      "bromato",
	"Br-",        "brometo",
	"OCN-",       "cianato",
	"CN-",        "cianeto",
	"ClO3-",      "clorato",
	"Cl-",        "cloreto",
	"ClO2-",      "clorito",
	"F-",         "fluoreto",
	"BrO-",       "hipobromito",
	"ClO-",       "hipoclorito",
	"H2PO2-",     "hipofosfito",
	"IO-",        "hipoiodito",
	"IO3-",       "iodato",
	"I-",         "iodeto",
	"PO3-",       "fosfato",
	"NO3-",       "nitrato",
	"NO2-",       "nitrito",
	"ClO4-",      "perclorato",
	"IO4-",       "periodato",
	"MnO4-",      "permanganato",
	"SCN-",       "tiocianato",
	"CO3 2-",     "carbonato",
	"CrO4 2-",    "cromato",
	"Cr2O7 2-",   "dicromato",
	"SnO3 2-",    "estanato",
	"SnO2 2-",    "estanito",
	"HPO3 2-",    "fosfito",
	"MnO4 2-",    "manganato",
	"SiO3 2-",    "metassilicato",
	"C2O4 2-",    "oxalato",
	"S 2-",       "sulfeto",
	"SO4 2-",     "sulfato",
	"SO3 2-",     "sulfito",
	"S2O3 2-",    "tiossulfato",
	"ZnO2 2-",    "zincato",
	"SbO4 3-",    "antimoniato",
	"SbO3 3-",    "antimonito",
	"AsO4 3-",    "arseniato"
	"AsO3 3-",    "borato",
	"PO4 3-",     "ortofosfato",
	"SiO4 4-",    "ortossilicato"
	"Sb2O7 4-",   "piroantimoniato",
	"As2O7 4-",   "piroarseniato",
	"P2O7 4-",    "pirofosfato",
	"[Fe(CN)6] 3-", "Ferricianeto",
	"[Fe(CN)6] 4-", "Ferricianeto",
	NULL,
};

int main(int argc, char** argv){
	size_t max_range = 0;
	size_t old_index = 9999;
	char name[64] = "";

	srand(time(NULL)); /* set seed */
	
	while(tabel[max_range++]); /* calculate max range */
	max_range = max_range/2;

	while(strcmp(name, "q")){
		size_t index = (rand() % max_range)*2;
		if(index == old_index) continue; /* don't repeat the same element */
		old_index = index; /* update old index */
		printf("elemento: %s\n", tabel[index]);
		scanf("%s", name);
		if(!strcmp(name, tabel[index+1])){
			printf("Acertou\n");
		}
		else printf("Errou, nome correto: %s\n", tabel[index+1]);
		printf("\n");
	}
}
