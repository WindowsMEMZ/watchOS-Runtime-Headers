//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFDeleteShortcutEvent_h
#define WFDeleteShortcutEvent_h
@import Foundation;

#include "WFEvent.h"

@class NSString;

@interface WFDeleteShortcutEvent : WFEvent

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *shortcutSource;
@property (copy, nonatomic) NSString *addToSiriBundleIdentifier;
@property (copy, nonatomic) NSString *galleryIdentifier;

/* class methods */
+ (Class)codableEventClass;

/* instance methods */
@end

#endif /* WFDeleteShortcutEvent_h */
