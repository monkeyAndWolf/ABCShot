#ifdef __cplusplus
extern "C" {
#endif

#include "abcshots.h"
#include <locale.h>

#include "abc2ps.h"

int runAbcToSvg(char *abcFile, char *svgFile)
{
    setlocale(LC_ALL, "C");

    char *first = "abcm2ps";
    char *second = "-g";
    char *third = "-O";
    char **argc= malloc(sizeof(char*)*5);
    argc[0] = first;
    argc[1] = second;
    argc[2] = third;
    argc[3] = svgFile;
    argc[4] = abcFile;

    int answer = createAbc(5, argc);
    free(argc);
    return answer;
}

#ifdef __cplusplus
}
#endif
