#include "Color_code_info_extract.h"

void To_print_WiringManualData(void){
    unsigned int MajorColor = 0, MinorColor = 0;
    unsigned int colorCode_order = 1;

    
    for(MajorColor = 0; MajorColor < MaxPossibleColorsInMajorOrMinor; MajorColor++)
    {
        for(MinorColor = 0; MinorColor < MaxPossibleColorsInMajorOrMinor; MinorColor++)
        {
             print_data(colorCode_order,MajorColorNames[MajorColor],MinorColorNames[MinorColor_index]);
             colorCode_order++;
        }
    }
}

void print_data(int codenum, char *Majorcolor , char *Minorcolor)
{
             printf("\n*********************");
             printf("\n Major Color : %s  ", Majorcolor);
             printf("\n Minor Color : %s  ", Minorcolor);
             printf("\n Color Code  : %d  ", codenum);
             printf("\n*********************");
}



