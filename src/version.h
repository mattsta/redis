#define REDIS_VERSION "2.8.19-dynamic-0.5.1"
/* VER is: prefix of 1, then:
 * zero-padded two digit number for each version decimal */
/* Remove DYN_REDIS_VER for now because... it was only guarding
 * one feature change not relevant in this release. */
/* #define DYN_REDIS_VER 1000501 */

#define DYN_FEATURE_CLUSTER false
#define DYN_FEATURE_EMBSTR false
