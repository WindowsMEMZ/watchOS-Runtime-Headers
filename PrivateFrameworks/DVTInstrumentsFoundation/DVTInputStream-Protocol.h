//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 64562.3.1.1.0
//
#ifndef DVTInputStream_Protocol_h
#define DVTInputStream_Protocol_h
@import Foundation;

@protocol DVTInputStream <NSObject>

@property (readonly, nonatomic) BOOL supportsPeek;

/* instance methods */
- (id)read:(unsigned long long)read error:(id *)error;
- (id)peek:(unsigned long long)peek error:(id *)error;
- (BOOL)hasData;
@end

#endif /* DVTInputStream_Protocol_h */
