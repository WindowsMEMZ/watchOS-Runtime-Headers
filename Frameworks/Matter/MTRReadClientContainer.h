//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 125.3.4.0.0
//
#ifndef MTRReadClientContainer_h
#define MTRReadClientContainer_h
@import Foundation;

@interface MTRReadClientContainer : NSObject

@property (nonatomic) void * readClientPtr;
@property (nonatomic) struct AttributePathParams { unsigned int x0; unsigned int x1; unsigned short x2; unsigned short x3; } * pathParams;
@property (nonatomic) struct EventPathParams { unsigned int x0; unsigned int x1; unsigned short x2; BOOL x3; } * eventPathParams;
@property (nonatomic) unsigned long long deviceID;

/* instance methods */
- (void)onDone;
- (void)dealloc;
@end

#endif /* MTRReadClientContainer_h */
