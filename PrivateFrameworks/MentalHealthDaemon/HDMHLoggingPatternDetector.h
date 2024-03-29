//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDMHLoggingPatternDetector_h
#define HDMHLoggingPatternDetector_h
@import Foundation;

@class HDProfile;

@interface HDMHLoggingPatternDetector : NSObject

@property (readonly, weak, nonatomic) HDProfile *profile;

/* instance methods */
- (id)initWithProfile:(id)profile;
- (id)isUnpleasantLoggingPatternDetectedWithCurrentDate:(id)date gregorianCalendar:(id)calendar pendingStateOfMind:(id)mind error:(id *)error;
@end

#endif /* HDMHLoggingPatternDetector_h */
