//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef ISDisplayLink_h
#define ISDisplayLink_h
@import Foundation;

@class CADisplayLink;

@interface ISDisplayLink : NSObject

@property (copy, nonatomic) id /* block */ updateHandler;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (nonatomic) long long preferredFramesPerSecond;

/* instance methods */
- (id)initWithUpdateHandler:(id /* block */)handler completionHandler:(id /* block */)handler;
- (void)dealloc;
- (void)start;
- (void)stop;
- (void)_callUpdateHandler;
- (void)_update:(id)_update;
@end

#endif /* ISDisplayLink_h */
