#pragma once


#ifdef EN_PLATFORM_WINDOWS
	#ifdef EN_BUILD_DLL
		#define ENIGMA_API __declspec(dllexport)
	#else	
		#define ENIGMA_API __declspec(dllimport)
	#endif		
#else 
	#error Enigma only supports Windows!
#endif
