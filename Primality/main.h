#pragma once


// This piece of code is added to avoid multiple inclusion of the header file
#ifndef MAIN_H
#define MAIN_H

	// This code ensures proper compiling of the code written in C as opposed to C++
	#ifdef __cplusplus
		extern "C" {
	#endif

		const char * isPrime(int Number);
	
	#ifdef __cplusplus
		}
	#endif

#endif