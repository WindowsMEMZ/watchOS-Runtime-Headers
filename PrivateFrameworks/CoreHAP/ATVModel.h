//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef ATVModel_h
#define ATVModel_h
@import Foundation;

@class NSDictionary;

@interface ATVModel : NSObject

@property (retain) NSDictionary *atvLUT;

/* class methods */
+ (void)addTuple:(id)tuple ToLUT:(id)lut;
+ (unsigned long long)atvStateFromState:(struct BTStatus { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; unsigned long long x15; BOOL x16; BOOL x17; BOOL x18; } *)state;

/* instance methods */
- (id)init;
- (id)findTupleForATVState:(unsigned long long)atvstate;
@end

#endif /* ATVModel_h */
