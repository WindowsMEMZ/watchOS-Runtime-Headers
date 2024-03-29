//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 629.3.4.0.0
//
#ifndef AVVCDuckOverride_h
#define AVVCDuckOverride_h
@import Foundation;

@class NSNumber;

@interface AVVCDuckOverride : NSObject

@property (retain, nonatomic) NSNumber *duckOthers;
@property (retain, nonatomic) NSNumber *duckToLevel;
@property (nonatomic) BOOL isBlur;
@property (retain, nonatomic) NSNumber *mixWithOthers;

/* instance methods */
- (id)initWithDuckOthers:(id)others duckToLevel:(id)level mixWithOthers:(id)others;
- (id)init;
- (id)description;
@end

#endif /* AVVCDuckOverride_h */
