//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 104.0.1.0.0
//
#ifndef TAPlaySoundSuccess_h
#define TAPlaySoundSuccess_h
@import Foundation;

#include "TAEventProtocol-Protocol.h"

@class NSData, NSDate, NSString, NSUUID;

@interface TAPlaySoundSuccess : NSObject<TAEventProtocol>

@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) NSData *address;
@property (readonly, nonatomic) unsigned long long successType;
@property (readonly, nonatomic) NSDate *date;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithUUID:(id)uuid address:(id)address successType:(unsigned long long)type date:(id)date;
- (BOOL)isEqual:(id)equal;
- (id)descriptionDictionary;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (void)encodeWithOSLogCoder:(id)coder options:(unsigned long long)options maxLength:(unsigned long long)length;
- (id)getDate;
@end

#endif /* TAPlaySoundSuccess_h */
