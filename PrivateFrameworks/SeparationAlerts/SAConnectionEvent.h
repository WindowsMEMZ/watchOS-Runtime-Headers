//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 104.0.1.0.0
//
#ifndef SAConnectionEvent_h
#define SAConnectionEvent_h
@import Foundation;

#include "OSLogCoding-Protocol.h"
#include "TAEventProtocol-Protocol.h"

@class NSDate, NSString, NSUUID;

@interface SAConnectionEvent : NSObject<OSLogCoding, TAEventProtocol>

@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) long long state;
@property (readonly, copy, nonatomic) NSDate *date;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (void)encodeWithOSLogCoder:(id)coder options:(unsigned long long)options maxLength:(unsigned long long)length;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithDeviceUUID:(id)uuid state:(long long)state date:(id)date;
- (BOOL)isEqual:(id)equal;
- (id)descriptionDictionary;
- (id)getDate;
@end

#endif /* SAConnectionEvent_h */
