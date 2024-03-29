//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 749.20.0.0.0
//
#ifndef WOPersistableObject_Protocol_h
#define WOPersistableObject_Protocol_h
@import Foundation;

@protocol WOPersistableObject 
/* class methods */
+ (id)deserializeFromPersistence:(id)persistence;
/* instance methods */
- (id)serialize;
@end

#endif /* WOPersistableObject_Protocol_h */
