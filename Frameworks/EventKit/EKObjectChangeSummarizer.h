//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1870.2.1.0.0
//
#ifndef EKObjectChangeSummarizer_h
#define EKObjectChangeSummarizer_h
@import Foundation;

@interface EKObjectChangeSummarizer : NSObject
/* class methods */
+ (id)changeSummaryForObject:(id)object;
+ (id)diffSummaryBetweenObject:(id)object andObject:(id)object;
@end

#endif /* EKObjectChangeSummarizer_h */
