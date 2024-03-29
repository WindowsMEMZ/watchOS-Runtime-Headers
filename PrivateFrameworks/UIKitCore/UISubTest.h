//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UISubTest_h
#define UISubTest_h
@import Foundation;

@class NSMutableArray, NSMutableDictionary, NSNumber, NSString;

@interface UISubTest : NSObject {
  /* instance variables */
  NSNumber *_startFrame;
  NSMutableArray *_time;
  NSMutableArray *_fps;
  NSString *_testName;
  BOOL _showTime;
  BOOL _showFps;
  NSMutableDictionary *_data;
}

@property (readonly) NSNumber *startTime;

/* instance methods */
- (id)initWithName:(id)name metrics:(id)metrics;
- (void)startWithFrameCount:(id)count;
- (void)stopWithFrameCount:(id)count;
- (id)outputData;
- (void)setObject:(id)object forKey:(id)key;
- (id)getObjectForKey:(id)key;
@end

#endif /* UISubTest_h */
