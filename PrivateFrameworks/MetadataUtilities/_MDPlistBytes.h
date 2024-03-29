//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2274.8.0.0.0
//
#ifndef _MDPlistBytes_h
#define _MDPlistBytes_h
@import Foundation;

@interface _MDPlistBytes : NSObject {
  /* instance variables */
  unsigned long long _byteVector;
  unsigned int _byteVectorCnt;
  unsigned int _byteVectorCapacity;
  id /* block */ _deallocator;
  unsigned int x :16 _isBad;
  unsigned int x :1 _isMutable;
  unsigned int x :1 _isMutating;
  unsigned int x :1 _didFinalize;
  unsigned int x :1 _useMalloc;
  struct __CFArray * _rleQueue;
  unsigned long long * _wrapperPtr;
  unsigned long long * _uidVector;
  int _uidCount;
  int _uidCapacity;
  struct _malloc_zone_t { void * x0; void * x1; undefined * x2; undefined * x3; undefined * x4; undefined * x5; undefined * x6; undefined * x7; undefined * x8; char * x9; undefined * x10; undefined * x11; struct malloc_introspection_t * x12; unsigned int x13; undefined * x14; undefined * x15; undefined * x16; undefined * x17; undefined * x18; } * _zone;
}

/* class methods */
+ (struct __MDPlistBytes *)createArrayPlistBytesUsingBlock:(id /* block */)block;
+ (struct __MDPlistBytes *)createDictionaryPlistBytesUsingBlock:(id /* block */)block;
+ (struct __MDPlistBytes *)createPlistBytes:(id)bytes;
+ (struct __MDPlistBytes *)emptyArrayPlistBytes;
+ (struct __MDPlistBytes *)emptyDictionaryPlistBytes;
+ (void)enumerateObjectsFromPlistBytes:(char *)bytes count:(unsigned int)count shouldDeallocate:(BOOL)deallocate usingBlock:(id /* block */)block;
+ (struct __MDPlistBytes *)nullObjectPlistBytes;

/* instance methods */
- (BOOL)enumerateQueryResults:(unsigned long long)results attributeSize:(unsigned long long)size stringCache:(struct { struct __CFDictionary * x0; struct __CFDictionary * x1; unsigned int x2; } *)cache usingBlock:(id /* block */)block;
- (void)enumerateQueryResults:(unsigned long long)results stringCache:(struct { struct __CFDictionary * x0; struct __CFDictionary * x1; unsigned int x2; } *)cache usingBlock:(id /* block */)block;
- (id)initWithByteVector:(char *)vector count:(unsigned int)count trusted:(unsigned char)trusted deallocator:(id /* block */)deallocator;
- (id)initWithByteVector:(char *)vector count:(unsigned int)count shouldDeallocate:(BOOL)deallocate;
- (id)initWithByteVector:(char *)vector count:(unsigned int)count deallocator:(id /* block */)deallocator;
- (void)dealloc;
- (unsigned long long)_cfTypeID;
- (id)description;
- (BOOL)isEqual:(id)equal;
- (struct __CFData *)copyData;
- (struct __CFData *)copyDataWithBytesNoCopy;
- (void)dumpUIDs;
- (void)enumerateObjectsUsingBlock:(id /* block */)block;
@end

#endif /* _MDPlistBytes_h */
