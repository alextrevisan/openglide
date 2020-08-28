#include <sdk2_glide.h>
#ifdef GLIDE3
FX_ENTRY FxBool FX_CALL
grGet( FxU32 pname, FxU32 plength, FxI32 *params )
{
    switch (pname)
    {
    case GR_NUM_BOARDS:
        *params = 1;
        return FXTRUE;
    default:
        *params = 1;
        return FXTRUE;
    }
}

FX_ENTRY const char * FX_CALL
grGetString( FxU32 pname )
{
    switch(pname)
    {
    case GR_HARDWARE:
        return "Voodoo5 (tm)";
    default:
        return nullptr;
    }
}
#endif //GLIDE3
