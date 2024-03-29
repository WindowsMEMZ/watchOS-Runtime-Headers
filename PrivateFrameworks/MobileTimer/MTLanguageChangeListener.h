//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2200.4.3.7.0
//
#ifndef MTLanguageChangeListener_h
#define MTLanguageChangeListener_h
@import Foundation;

#include "MTAgentNotificationListener-Protocol.h"

@class NSString;

@interface MTLanguageChangeListener : NSObject<MTAgentNotificationListener>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)_languageChangeNotification;

/* instance methods */
- (BOOL)handlesNotification:(id)notification ofType:(long long)type;
- (void)_handleLanguageChanged;
- (void)handleNotification:(id)notification ofType:(long long)type completion:(id /* block */)completion;
- (id)liveDarwinNotifications;
@end

#endif /* MTLanguageChangeListener_h */
