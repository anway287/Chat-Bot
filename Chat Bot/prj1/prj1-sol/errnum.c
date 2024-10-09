#include "errnum.h"
#include <assert.h>

// Array of error messages corresponding to ErrNum enum
static const char *errMsgs[] = {
    "no error",                    // NO_ERR (or SUCCESS)
    "memory allocation error",      // MEM_ERR
    "I/O error",                    // IO_ERR
    "no matching message found"     // NO_MSG_FOUND
};

/** Return a static string explaining the error */
const char *
errnum_to_string(ErrNum err)
{
    const int nErrNums = sizeof(errMsgs) / sizeof(errMsgs[0]);
    assert(err < nErrNums);  // Ensure that the error number is valid
    return errMsgs[err];
}
