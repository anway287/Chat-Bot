#ifndef CHAT_H_
#define CHAT_H_

#include "errnum.h"
#include <stdio.h>

// Structure for individual chat messages
typedef struct ChatMsg {
    char *user;
    char *room;
    char **topics;
    size_t num_topics;
    char *message;
    struct ChatMsg *next;
} ChatMsg;

// Structure for the chat collection (using a linked list)
typedef struct ChatCollection {
    ChatMsg *head;         // Head of the linked list of messages
} ChatCollection;

extern ChatCollection chatCollection;

// Function prototypes
ErrNum add_chat_message(const char *user, const char *room, const char *topics[], size_t num_topics, const char *message);
ErrNum query_chat_messages(const char *room, size_t count, const char *topics[], size_t num_topics, FILE *out);
void free_chat_messages();
 
#endif // CHAT_H_
