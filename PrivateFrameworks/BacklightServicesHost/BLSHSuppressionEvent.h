//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3.2.4.0.0
//
#ifndef BLSHSuppressionEvent_h
#define BLSHSuppressionEvent_h
@import Foundation;

@interface BLSHSuppressionEvent : NSObject

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) unsigned long long reason;
@property (readonly, nonatomic) unsigned long long machContinuousTimestamp;
@property (readonly, nonatomic) BOOL suppression;

/* instance methods */
- (id)initWithCoreMotionEvent:(id)event timestamp:(unsigned long long)timestamp;
- (id)initWithType:(unsigned long long)type reason:(unsigned long long)reason timestamp:(unsigned long long)timestamp;
- (BOOL)wantsSuppression;
- (id)description;
@end

#endif /* BLSHSuppressionEvent_h */
