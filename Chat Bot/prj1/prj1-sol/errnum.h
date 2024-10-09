#ifndef ERRNUM_H_
#define ERRNUM_H_

// Enum for error codes
typedef enum {
    NO_ERR = 0,        // No error (alias for success)
    MEM_ERR,           // Memory allocation error
    IO_ERR,            // I/O error
    NO_MSG_FOUND,      // No matching message found
    SUCCESS = NO_ERR   // Alias for NO_ERR to indicate success
} ErrNum;

/** Function to convert an ErrNum to a static string explanation */
const char *errnum_to_string(ErrNum err);

#endif // #ifndef ERRNUM_H_
