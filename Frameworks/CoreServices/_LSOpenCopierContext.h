//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1299.2.3.1.0
//
#ifndef _LSOpenCopierContext_h
#define _LSOpenCopierContext_h
@import Foundation;

@class NSError, NSURL;

@interface _LSOpenCopierContext : NSObject

@property (nonatomic) int callbackType;
@property (retain, nonatomic) NSURL *destURL;
@property (retain, nonatomic) NSError *error;

/* instance methods */
@end

#endif /* _LSOpenCopierContext_h */
