//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 396.4.0.0.0
//
#ifndef TRILevelChecked_h
#define TRILevelChecked_h
@import Foundation;

@class TRILevel;

@interface TRILevelChecked : NSObject {
  /* instance variables */
  TRILevel *_wrapped;
}

/* class methods */
+ (id)wrapLevel:(id)level;

/* instance methods */
- (id)init;
- (id)initWithLevel:(id)level;
- (id)forwardingTargetForSelector:(SEL)selector;
- (BOOL)booleanValue;
- (id)stringValue;
- (int)intValue;
- (long long)longValue;
- (float)floatValue;
- (double)doubleValue;
- (id)binaryValue;
- (id)fileValue;
- (id)directoryValue;
- (id)description;
@end

#endif /* TRILevelChecked_h */
