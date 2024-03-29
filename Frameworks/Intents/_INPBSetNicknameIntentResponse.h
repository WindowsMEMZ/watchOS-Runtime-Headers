//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2201.0.2.0.0
//
#ifndef _INPBSetNicknameIntentResponse_h
#define _INPBSetNicknameIntentResponse_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "_INPBContactCard.h"
#include "_INPBSetNicknameIntentResponse-Protocol.h"

@class NSString;

@interface _INPBSetNicknameIntentResponse : PBCodable<_INPBSetNicknameIntentResponse, NSSecureCoding, NSCopying> {
  /* instance variables */
  struct  _has;
}

@property (retain, nonatomic) _INPBContactCard *meCard;
@property (readonly, nonatomic) BOOL hasMeCard;
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

#endif /* _INPBSetNicknameIntentResponse_h */
