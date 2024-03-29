//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCCKPQueryFilter_h
#define FCCKPQueryFilter_h
@import Foundation;

#include "PBCodable.h"
#include "FCCKPRecordFieldIdentifier.h"
#include "FCCKPRecordFieldValue.h"
#include "NSCopying-Protocol.h"

@interface FCCKPQueryFilter : PBCodable<NSCopying> {
  /* instance variables */
  FCCKPRecordFieldIdentifier *_fieldName;
  FCCKPRecordFieldValue *_fieldValue;
  int _type;
  struct { unsigned int x :1 type; } _has;
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

#endif /* FCCKPQueryFilter_h */
