#ifndef SSHUTTLED_FIFO_H
#define SSHUTTLED_FIFO_H

#include <stdbool.h>

typedef struct {
  const char* filepath;
  bool        open;
} fifo_t;

void fifo_create(fifo_t* fifo, const char* filepath);
void fifo_create_existing(fifo_t* fifo, const char* filepath);
void fifo_delete(fifo_t* fifo);

bool fifo_read_line(fifo_t* fifo, char* buffer, int bytes);
void fifo_write_line(fifo_t* fifo, const char* text);

#endif
