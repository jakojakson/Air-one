#ifndef TIMERS_H
#define TIMERS_H

#include "bibliotecas.h"

	#ifdef __cplusplus
	extern "C"{
	#endif

	typedef struct Data{

    	float pressao = 0;
    	float fluxo   = 0;
    	float volume  = 0;
	} data;

		void interrupt4_OVF_Init();
		void serial();

	#ifdef __cplusplus
	} // extern "C"
	#endif

#endif