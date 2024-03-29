//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.12.1.0.0
//
#ifndef DEIO_h
#define DEIO_h
@import Foundation;

@interface DEIO : NSObject
/* class methods */
+ (void)copyTo:(id)to from:(id)from;
+ (id)readDataOfLength:(unsigned long long)length offset:(unsigned long long)offset from:(id)from;
@end

#endif /* DEIO_h */
