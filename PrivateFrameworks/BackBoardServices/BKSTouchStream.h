//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 598.10.0.0.0
//
#ifndef BKSTouchStream_h
#define BKSTouchStream_h
@import Foundation;

@interface BKSTouchStream : NSObject

@property unsigned int reference;

/* instance methods */
- (id)initWithContextID:(unsigned int)id displayUUID:(id)uuid identifier:(unsigned char)identifier policy:(id)policy;
- (void)setEventDispatchMode:(unsigned char)mode lastTouchTimestamp:(double)timestamp;
- (void)setEventDispatchMode:(unsigned char)mode ambiguityRecommendation:(unsigned char)recommendation lastTouchTimestamp:(double)timestamp;
- (void)invalidate;
@end

#endif /* BKSTouchStream_h */
