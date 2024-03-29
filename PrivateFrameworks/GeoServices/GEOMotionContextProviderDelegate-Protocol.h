//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOMotionContextProviderDelegate_Protocol_h
#define GEOMotionContextProviderDelegate_Protocol_h
@import Foundation;

@protocol GEOMotionContextProviderDelegate <NSObject>
/* instance methods */
- (void)motionContextProvider:(id)provider didUpdateMotion:(unsigned long long)motion exitType:(unsigned long long)type confidence:(unsigned long long)confidence;
@end

#endif /* GEOMotionContextProviderDelegate_Protocol_h */
