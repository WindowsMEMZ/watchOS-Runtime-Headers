//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDHeadphoneExposureSampleBatch_h
#define HDHeadphoneExposureSampleBatch_h
@import Foundation;

@class NSArray, NSNumber;

@interface HDHeadphoneExposureSampleBatch : NSObject

@property (retain, nonatomic) NSArray *samples;
@property (nonatomic) BOOL journaled;
@property (retain, nonatomic) NSNumber *anchor;
@property (nonatomic) BOOL canTriggerUserNotification;

/* class methods */
+ (id)batchWithJournaledSamples:(id)samples;
+ (id)batchWithAddedSamples:(id)samples anchor:(id)anchor;

/* instance methods */
- (id)_initWithSamples:(id)samples journaled:(BOOL)journaled anchor:(id)anchor;
- (BOOL)isJournaled;
@end

#endif /* HDHeadphoneExposureSampleBatch_h */
