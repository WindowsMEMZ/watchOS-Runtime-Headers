//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKSPAnalyticsWindDownEventDataWrapper_h
#define HKSPAnalyticsWindDownEventDataWrapper_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSArray;

@interface HKSPAnalyticsWindDownEventDataWrapper : NSObject<NSCoding, NSSecureCoding>

@property (retain, nonatomic) NSArray *eventDatums;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithEventDatums:(id)datums;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* HKSPAnalyticsWindDownEventDataWrapper_h */
