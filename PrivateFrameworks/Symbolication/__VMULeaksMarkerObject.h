//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 64561.91.2.0.0
//
#ifndef __VMULeaksMarkerObject_h
#define __VMULeaksMarkerObject_h
@import Foundation;

@interface __VMULeaksMarkerObject : NSObject

@property (nonatomic) struct { unsigned long long x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned long long x7; } * region;
@property (nonatomic) unsigned int entryIndex;

/* instance methods */
- (void)dealloc;
@end

#endif /* __VMULeaksMarkerObject_h */
