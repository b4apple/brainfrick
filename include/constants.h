#pragma once
#define BF_EXIT_ON_SUCCESS 0
#define BF_EXIT_ON_MANUAL_ABORT 1
#define BF_EXIT_ON_AUTO_ABORT 2
#define BF_EXIT_ON_FILE_ERROR 3
#define BF_EXIT_ON_RUNTIME_ERROR 4
#define BF_EXIT_ON_LANG_ERROR 5 
#define BF_USAGE_TEXT "USAGE : bfcc.exe [FILENAME] [BACKEND-CHOICE]\n\tFILENAME: is a file with .bf extension.\n\tIf no extension is specified, then the compiler appends .bf to the filename and tries to open the file.\n\n\tBACKEND-CHOICE: (Optional) The choices include C, WASM, interp.\n\tIf nothing is specified it is set to interp by default."
