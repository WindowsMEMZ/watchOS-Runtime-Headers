//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 396.4.0.0.0
//
#ifndef TRIPBBoolInt64Dictionary_h
#define TRIPBBoolInt64Dictionary_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "TRIPBDictionaryInternalsProtocol-Protocol.h"
#include "TRIPBMessage.h"

@interface TRIPBBoolInt64Dictionary : NSObject<TRIPBDictionaryInternalsProtocol, NSCopying> {
  /* instance variables */
  TRIPBMessage *_autocreator;
  long long _values[2];
  BOOL _valueSet[2];
}

@property (readonly, nonatomic) unsigned long long count;

/* instance methods */
- (id)init;
- (id)initWithInt64s:(const long long *)int64s forKeys:(const BOOL *)keys count:(unsigned long long)count;
- (id)initWithDictionary:(id)dictionary;
- (id)initWithCapacity:(unsigned long long)capacity;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
- (BOOL)getInt64:(long long *)int64 forKey:(BOOL)key;
- (void)setTRIPBGenericValue:(union { BOOL x0; int x1; long long x2; unsigned int x3; unsigned long long x4; float x5; double x6; id x7; id x8; id x9; int x10; } *)value forTRIPBGenericValueKey:(union { BOOL x0; int x1; long long x2; unsigned int x3; unsigned long long x4; float x5; double x6; id x7; id x8; id x9; int x10; } *)key;
- (void)enumerateForTextFormat:(id /* block */)format;
- (void)enumerateKeysAndInt64sUsingBlock:(id /* block */)block;
- (unsigned long long)computeSerializedSizeAsField:(id)field;
- (void)writeToCodedOutputStream:(id)stream asField:(id)field;
- (void)addEntriesFromDictionary:(id)dictionary;
- (void)setInt64:(long long)int64 forKey:(BOOL)key;
- (void)removeInt64ForKey:(BOOL)key;
- (void)removeAll;
@end

#endif /* TRIPBBoolInt64Dictionary_h */
