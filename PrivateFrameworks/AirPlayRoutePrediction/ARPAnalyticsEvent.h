//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1852.4.7.0.3
//
#ifndef ARPAnalyticsEvent_h
#define ARPAnalyticsEvent_h
@import Foundation;

@class NSString;

@interface ARPAnalyticsEvent : NSObject

@property (copy, nonatomic) NSString *prediction;
@property (copy, nonatomic) NSString *predictionReason;
@property (copy, nonatomic) NSString *suppressionReason;
@property (nonatomic) BOOL predictionCorrect;
@property (copy, nonatomic) NSString *predictedDevice;
@property (copy, nonatomic) NSString *actualDevice;
@property (copy, nonatomic) NSString *correction;
@property (copy, nonatomic) NSString *correctionTiming;
@property (copy, nonatomic) NSString *failure;
@property (nonatomic) unsigned long long numberOfMicrolocations;

/* class methods */
+ (id)feedbackEventsFromAppUsageEvents:(id)events playingEvents:(id)events microLocationEvents:(id)events feedbackEvents:(id)events;

/* instance methods */
- (id)init;
- (id)description;
- (id)analyticsDictionary;
@end

#endif /* ARPAnalyticsEvent_h */
