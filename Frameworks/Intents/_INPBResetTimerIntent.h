//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2201.0.2.0.0
//
#ifndef _INPBResetTimerIntent_h
#define _INPBResetTimerIntent_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "_INPBIntentMetadata.h"
#include "_INPBResetTimerIntent-Protocol.h"
#include "_INPBTimer.h"

@class NSString;

@interface _INPBResetTimerIntent : PBCodable<_INPBResetTimerIntent, NSSecureCoding, NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 resetMultiple; } _has;
}

@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (nonatomic) BOOL resetMultiple;
@property (nonatomic) BOOL hasResetMultiple;
@property (retain, nonatomic) _INPBTimer *targetTimer;
@property (readonly, nonatomic) BOOL hasTargetTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (id)dictionaryRepresentation;
@end

#endif /* _INPBResetTimerIntent_h */
