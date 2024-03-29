//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1228.300.81.0.0
//
#ifndef CXJoinCallActivitySession_h
#define CXJoinCallActivitySession_h
@import Foundation;

#include "CXJoinCallActivity.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSDate, NSUUID;

@interface CXJoinCallActivitySession : NSObject<NSCopying, NSSecureCoding>

@property (retain, nonatomic) NSDate *timestamp;
@property (retain, nonatomic) NSUUID *UUID;
@property (retain, nonatomic) CXJoinCallActivity *activity;
@property (nonatomic) unsigned long long state;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithActivity:(id)activity;
- (id)description;
- (BOOL)isEqual:(id)equal;
- (BOOL)isEqualToJoinCallActivitySession:(id)session;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* CXJoinCallActivitySession_h */
