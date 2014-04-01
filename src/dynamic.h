#ifndef __DYNAMIC_H
#define __DYNAMIC_H

/* From redis.c */
unsigned int dictSdsCaseHash(const void *key);
int dictSdsKeyCompare(void *privdata, const void *key1, const void *key2);
void dictSdsDestructor(void *privdata, void *val);

/* From scripting.c */
void evalGenericCommand(redisClient *c, int evalsha);
#endif
