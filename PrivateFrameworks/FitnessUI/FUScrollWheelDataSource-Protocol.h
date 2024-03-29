//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1880.5.0.0.0
//
#ifndef FUScrollWheelDataSource_Protocol_h
#define FUScrollWheelDataSource_Protocol_h
@import Foundation;

@protocol FUScrollWheelDataSource <NSObject>
/* instance methods */
- (unsigned long long)numberOfRowsInScrollWheel:(id)wheel;
- (id)scrollWheel:(id)wheel titleForItemAtIndex:(unsigned long long)index;
@end

#endif /* FUScrollWheelDataSource_Protocol_h */
