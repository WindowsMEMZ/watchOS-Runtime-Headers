//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.16.1.0.0
//
#ifndef PLSandbox_h
#define PLSandbox_h
@import Foundation;

@interface PLSandbox : NSObject
/* class methods */
+ (BOOL)isCurrentProcessInSandbox;
+ (long long)checkOperation:(id)operation forPath:(id)path;
@end

#endif /* PLSandbox_h */
