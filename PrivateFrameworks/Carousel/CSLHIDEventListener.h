//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLHIDEventListener_h
#define CSLHIDEventListener_h
@import Foundation;

@protocol OS_os_log;

@interface CSLHIDEventListener : NSObject {
  /* instance variables */
  NSObject<OS_os_log> *_log;
}

@property (readonly, nonatomic) BOOL hasService;
@property (readonly, nonatomic) BOOL listening;

/* instance methods */
- (id)initWithServiceUsagePage:(long long)page usage:(long long)usage additionalMatchingCriteria:(id)criteria log:(id)log eventQueue:(id)queue eventBlock:(id /* block */)block;
- (void)dealloc;
- (void)waitForMatchedHIDService:(id /* block */)hidservice;
- (struct __IOHIDEvent *)copyEventType:(unsigned int)type matchingEvent:(struct __IOHIDEvent *)event options:(unsigned int)options;
- (BOOL)isListening;
- (void)startListening;
- (void)stopListening;
@end

#endif /* CSLHIDEventListener_h */
