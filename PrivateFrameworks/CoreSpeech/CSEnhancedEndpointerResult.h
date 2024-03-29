//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.21.3.0.0
//
#ifndef CSEnhancedEndpointerResult_h
#define CSEnhancedEndpointerResult_h
@import Foundation;

@class NSArray;

@interface CSEnhancedEndpointerResult : NSObject

@property (readonly, nonatomic) BOOL didDefaultEndpointerFire;
@property (readonly, nonatomic) BOOL didRelaxedEndpointerFire;
@property (retain, nonatomic) NSArray *featuresToLog;
@property (readonly, nonatomic) float endpointPosterior;
@property (readonly, nonatomic) int extraDelayMs;

/* instance methods */
- (id)init;
- (BOOL)didEndpointerFire;
@end

#endif /* CSEnhancedEndpointerResult_h */
