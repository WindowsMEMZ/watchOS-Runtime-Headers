//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef _HKValidationErrorTracker_h
#define _HKValidationErrorTracker_h
@import Foundation;

@class NSMutableString;

@interface _HKValidationErrorTracker : NSObject

@property (nonatomic) long long errorCount;
@property (retain, nonatomic) NSMutableString *errorMessage;

/* instance methods */
- (id)init;
@end

#endif /* _HKValidationErrorTracker_h */
