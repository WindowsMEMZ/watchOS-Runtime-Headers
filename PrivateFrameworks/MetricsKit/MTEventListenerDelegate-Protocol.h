//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2.8.10.0.0
//
#ifndef MTEventListenerDelegate_Protocol_h
#define MTEventListenerDelegate_Protocol_h
@import Foundation;

@protocol MTEventListenerDelegate <MTEventRecorderDelegate>
@optional
/* instance methods */
- (id)whitelistedFields;
- (id)allowlistedFields;
- (BOOL)shouldRecordEvent:(id)event;
@end

#endif /* MTEventListenerDelegate_Protocol_h */
