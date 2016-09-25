#ifdef __cplusplus
extern "C" {
#endif

#include "abcshots.h"
#include <locale.h>
#include <stdlib.h>

#include "abc2ps.h"

int runAbcToSvg(char *abcFile, char *svgFile)
{
    setlocale(LC_ALL, "C");

    char *first = "abcm2ps";
    char *second = "-g";
    char *third = "-s";
    char *fourth = "2";
    char *fifth = "-w";
    char *sixth =  "15.28in";
    char *seventh = "-O";
    char **argc= malloc(sizeof(char*)*9);
    argc[0] = first;
    argc[1] = second;
    argc[2] = third;
    argc[3] = fourth;
    argc[4] = fifth;
    argc[5] = sixth;
    argc[6] = seventh;
    argc[7] = svgFile;
    argc[8] = abcFile;

    int answer = createAbc(9, argc);
    free(argc);
    return answer;
}

#ifdef __cplusplus
}
#endif
