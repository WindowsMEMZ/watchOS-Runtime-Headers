//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.18.2.0.0
//
#ifndef SFFlightTopic_h
#define SFFlightTopic_h
@import Foundation;

#include "SFQueryTopic.h"
#include "SFFlightTopic-Protocol.h"

@class NSDate, NSString;

@interface SFFlightTopic : SFQueryTopic<SFFlightTopic>

@property (copy, nonatomic) NSDate *date;
@property (readonly, copy, nonatomic) NSString *query;
@property (readonly, nonatomic) int queryType;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithQuery:(id)query date:(id)date identifier:(id)identifier;
- (id)initWithQuery:(id)query date:(id)date;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (BOOL)isEqual:(id)equal;
@end

#endif /* SFFlightTopic_h */
