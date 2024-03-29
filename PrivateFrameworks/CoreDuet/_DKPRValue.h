//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1852.4.7.0.3
//
#ifndef _DKPRValue_h
#define _DKPRValue_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"
#include "_DKPRValueType.h"

@class NSData, NSString;

@interface _DKPRValue : PBCodable<NSCopying> {
  /* instance variables */
  double _dateValue;
  double _doubleValue;
  long long _integerValue;
  NSData *_blobValue;
  NSString *_stringValue;
  _DKPRValueType *_type;
  struct { unsigned int x :1 dateValue; unsigned int x :1 doubleValue; unsigned int x :1 integerValue; } _has;
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

#endif /* _DKPRValue_h */
