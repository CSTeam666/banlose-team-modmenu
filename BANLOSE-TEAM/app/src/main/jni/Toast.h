#ifndef LGL_IL2CPP_MENU_TOAST_H
#define LGL_IL2CPP_MENU_TOAST_H

extern "C" {
JNIEXPORT void JNICALL
Java_com_eban_MainActivity_Toast(JNIEnv *env, jclass obj, jobject context) {
     MakeToast(env, context, OBFUSCATE("Modded by Eban"), Toast::LENGTH_LONG);
}
}

#endif //LGL_IL2CPP_MENU_TOAST_H
