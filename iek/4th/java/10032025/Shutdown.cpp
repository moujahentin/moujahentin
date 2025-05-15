#include <iostream>
#include "Shutdown.h"

JNIEXPORT void JNICALL Java_Shutdown_termatismos(JNIEnv *env, jobject obj){
	system("shutdown -P now");
	}
