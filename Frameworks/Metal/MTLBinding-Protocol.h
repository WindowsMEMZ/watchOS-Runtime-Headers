//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 341.35.0.0.0
//
#ifndef MTLBinding_Protocol_h
#define MTLBinding_Protocol_h
@import Foundation;

@protocol MTLBinding <NSObject>

@property (readonly) NSString *name;
@property (readonly) long long type;
@property (readonly) unsigned long long access;
@property (readonly) unsigned long long index;
@property (readonly) BOOL used;
@property (readonly) BOOL argument;

/* instance methods */
- (BOOL)isUsed;
- (BOOL)isArgument;
@end

#endif /* MTLBinding_Protocol_h */
