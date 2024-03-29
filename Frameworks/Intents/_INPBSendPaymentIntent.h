//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2201.0.2.0.0
//
#ifndef _INPBSendPaymentIntent_h
#define _INPBSendPaymentIntent_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "_INPBContact.h"
#include "_INPBCurrencyAmount.h"
#include "_INPBIntentMetadata.h"
#include "_INPBSendPaymentIntent-Protocol.h"
#include "_INPBString.h"

@class NSString;

@interface _INPBSendPaymentIntent : PBCodable<_INPBSendPaymentIntent, NSSecureCoding, NSCopying> {
  /* instance variables */
  struct  _has;
}

@property (retain, nonatomic) _INPBCurrencyAmount *currencyAmount;
@property (readonly, nonatomic) BOOL hasCurrencyAmount;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (retain, nonatomic) _INPBString *note;
@property (readonly, nonatomic) BOOL hasNote;
@property (retain, nonatomic) _INPBContact *payee;
@property (readonly, nonatomic) BOOL hasPayee;
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

#endif /* _INPBSendPaymentIntent_h */
