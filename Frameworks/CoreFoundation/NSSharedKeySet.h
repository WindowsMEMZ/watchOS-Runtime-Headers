//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2202.0.0.0.0
//
#ifndef NSSharedKeySet_h
#define NSSharedKeySet_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSFastEnumeration-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "NSSharedKeySet.h"

@interface NSSharedKeySet : NSObject<NSFastEnumeration, NSCopying, NSSecureCoding> {
  /* instance variables */
  unsigned char _algorithmType;
}

@property char * g;
@property unsigned char select;
@property void * rankTable;
@property unsigned int M;
@property unsigned int factor;
@property unsigned int numKey;
@property unsigned int * seeds;
@property id * keys;
@property (retain) NSSharedKeySet *subSharedKeySet;

/* class methods */
+ (id)keySetWithKeys:(id)keys;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithKeys:(id *)keys count:(unsigned long long)count;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (unsigned long long)count;
- (BOOL)isEmpty;
- (unsigned long long)maximumIndex;
- (id)allKeys;
- (unsigned long long)indexForKey:(id)key;
- (id)keyAtIndex:(unsigned long long)index;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id * x1; unsigned long long * x2; unsigned long long x3[5] } *)state objects:(id *)objects count:(unsigned long long)count;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (void)dealloc;
- (unsigned long long)keySetCount;
- (id)debugDescription;
@end

#endif /* NSSharedKeySet_h */
