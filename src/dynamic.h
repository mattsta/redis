#ifndef __DYNAMIC_H
#define __DYNAMIC_H

/* From redis.c */
unsigned int dictSdsCaseHash(const void *key);
int dictSdsKeyCompare(void *privdata, const void *key1, const void *key2);
void dictSdsDestructor(void *privdata, void *val);

/* From scripting.c */
void evalGenericCommand(redisClient *c, int evalsha);

/* From t_zset.c */
unsigned char *zzlFirstInRange(unsigned char *zl, zrangespec *range);
unsigned char *zzlFind(unsigned char *zl, robj *ele, double *score);
int zzlLexValueGteMin(unsigned char *p, zlexrangespec *spec);
int zzlLexValueLteMax(unsigned char *p, zlexrangespec *spec);
int zslValueGteMin(double value, zrangespec *spec);
int zslValueLteMax(double value, zrangespec *spec);

#endif
