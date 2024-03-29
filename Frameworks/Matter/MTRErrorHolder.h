//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 125.3.4.0.0
//
#ifndef MTRErrorHolder_h
#define MTRErrorHolder_h
@import Foundation;

@interface MTRErrorHolder : NSObject

@property (readonly, nonatomic) struct ChipError { unsigned int x0; char * x1; unsigned int x2; } error;

/* instance methods */
- (id)initWithError:(struct ChipError { unsigned int x0; char * x1; unsigned int x2; })error;
@end

#endif /* MTRErrorHolder_h */
