#if defined(_WIN32) || defined(_WIN64)
#define DLL_PUBLIC __declspec(dllexport)
// Windows prefixed the function with _ for some questionable reasons
#define snprintf _snprintf
#else
#define DLL_PUBLIC
#endif
