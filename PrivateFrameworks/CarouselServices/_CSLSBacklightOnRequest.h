//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef _CSLSBacklightOnRequest_h
#define _CSLSBacklightOnRequest_h
@import Foundation;

@interface _CSLSBacklightOnRequest : NSObject

@property (nonatomic) unsigned int reason;
@property (nonatomic) BOOL userInitiated;

/* class methods */
+ (id)requestWithReason:(unsigned int)reason userInitiated:(BOOL)initiated;

/* instance methods */
- (BOOL)isUserInitiated;
@end

#endif /* _CSLSBacklightOnRequest_h */
