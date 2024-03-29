//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOTrafficAndETAResult_h
#define GEOTrafficAndETAResult_h
@import Foundation;

@class NSString;

@interface GEOTrafficAndETAResult : NSObject

@property (nonatomic) BOOL isSuccess;
@property (nonatomic) double seconds;
@property (nonatomic) double aggressiveTravelTime;
@property (nonatomic) double conservativeTravelTime;
@property (copy, nonatomic) NSString *shortTrafficString;
@property (copy, nonatomic) NSString *longTrafficString;
@property (copy, nonatomic) NSString *writtenRouteName;
@property (copy, nonatomic) NSString *spokenRouteName;

/* instance methods */
@end

#endif /* GEOTrafficAndETAResult_h */
