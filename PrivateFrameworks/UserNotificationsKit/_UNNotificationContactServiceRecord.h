//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 827.9.0.0.0
//
#ifndef _UNNotificationContactServiceRecord_h
#define _UNNotificationContactServiceRecord_h
@import Foundation;

@class NSString, _UNNotificationContact;

@interface _UNNotificationContactServiceRecord : NSObject

@property (retain, nonatomic) _UNNotificationContact *contact;
@property (retain, nonatomic) NSString *bundleIdentifier;

/* instance methods */
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
@end

#endif /* _UNNotificationContactServiceRecord_h */
