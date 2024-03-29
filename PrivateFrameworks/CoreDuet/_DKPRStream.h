//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1852.4.7.0.3
//
#ifndef _DKPRStream_h
#define _DKPRStream_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"
#include "_DKPRValueType.h"

@class NSString;

@interface _DKPRStream : PBCodable<NSCopying> {
  /* instance variables */
  NSString *_name;
  _DKPRValueType *_type;
}

/* instance methods */
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
@end

#endif /* _DKPRStream_h */
