//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 720.1.0.0.0
//
#ifndef TPSAnalyticsEventSession_h
#define TPSAnalyticsEventSession_h
@import Foundation;

#include "TPSAnalyticsEvent.h"

@interface TPSAnalyticsEventSession : TPSAnalyticsEvent

@property (readonly, nonatomic) long long collectionsViewed;
@property (readonly, nonatomic) long long tipsViewed;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (id)eventWithCollectionsViewed:(long long)viewed tipsViewed:(long long)viewed;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)_initWithCollectionsViewed:(long long)viewed tipsViewed:(long long)viewed;
- (void)encodeWithCoder:(id)coder;
- (id)eventName;
- (id)mutableAnalyticsEventRepresentation;
@end

#endif /* TPSAnalyticsEventSession_h */
