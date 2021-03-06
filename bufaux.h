/*
 * Author: Tatu Ylonen <ylo@cs.hut.fi>
 * Copyright (c) 1995 Tatu Ylonen <ylo@cs.hut.fi>, Espoo, Finland
 *                    All rights reserved
 *
 * As far as I am concerned, the code I have written for this software
 * can be used freely for any purpose.  Any derived versions of this
 * software must be clearly marked as such, and if the derived work is
 * incompatible with the protocol description in the RFC file, it must be
 * called by a name other than "ssh" or "Secure Shell".
 */

#ifndef BUFAUX_H
#define BUFAUX_H

#include "buffer.h"

void    buffer_put_bignum(Buffer *, BIGNUM *);
void    buffer_put_bignum2(Buffer *, BIGNUM *);
void	buffer_get_bignum(Buffer *, BIGNUM *);

u_int	buffer_get_int(Buffer *);
void    buffer_put_int(Buffer *, u_int);

int     buffer_get_char(Buffer *);
void    buffer_put_char(Buffer *, int);

void   *buffer_get_string(Buffer *, u_int *);
void    buffer_put_string(Buffer *, const void *, u_int);
void	buffer_put_cstring(Buffer *, const char *);

#endif				/* BUFAUX_H */
