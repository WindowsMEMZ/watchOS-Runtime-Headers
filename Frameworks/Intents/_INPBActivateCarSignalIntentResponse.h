//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2201.0.2.0.0
//
#ifndef _INPBActivateCarSignalIntentResponse_h
#define _INPBActivateCarSignalIntentResponse_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "_INPBActivateCarSignalIntentResponse-Protocol.h"

@class NSString;

@interface _INPBActivateCarSignalIntentResponse : PBCodable<_INPBActivateCarSignalIntentResponse, NSSecureCoding, NSCopying> {
  /* instance variables */
  struct  _has;
}

@property (readonly, nonatomic) int * signals;
@property (readonly, nonatomic) unsigned long long signalsCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (void)setSignals:(int *)signals count:(unsigned long long)count;
- (void)clearSignals;
- (void)addSignals:(int)signals;
- (int)signalsAtIndex:(unsigned long long)index;
- (id)signalsAsString:(int)string;
- (int)StringAsSignals:(id)signals;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (void)dealloc;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (id)dictionaryRepresentation;
@end

#endif /* _INPBActivateCarSignalIntentResponse_h */
