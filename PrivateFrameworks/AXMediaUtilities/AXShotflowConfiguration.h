//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 127.1.3.0.0
//
#ifndef AXShotflowConfiguration_h
#define AXShotflowConfiguration_h
@import Foundation;

@class NSArray, NSNumber;

@interface AXShotflowConfiguration : NSObject

@property (readonly, nonatomic) NSArray *filterThresholds;
@property (readonly, nonatomic) NSNumber *networkThreshold;
@property (readonly, nonatomic) NSNumber *nmsThreshold;
@property (readonly, nonatomic) NSArray *defaultBoxesSidesNormalized;
@property (readonly, nonatomic) NSArray *ratios;

/* instance methods */
- (id)initWithURL:(id)url;
- (id)description;
@end

#endif /* AXShotflowConfiguration_h */
