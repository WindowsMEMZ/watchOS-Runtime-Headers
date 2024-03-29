//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1814.300.81.4.2
//
#ifndef PDSConfiguration_h
#define PDSConfiguration_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSString, NSURL;
@protocol OS_dispatch_queue, OS_dispatch_workloop;

@interface PDSConfiguration : NSObject<NSCopying>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_workloop> *workloop;
@property (retain, nonatomic) NSURL *daemonRootDirectory;
@property (retain, nonatomic) NSString *pushHandlerPort;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)description;
@end

#endif /* PDSConfiguration_h */
