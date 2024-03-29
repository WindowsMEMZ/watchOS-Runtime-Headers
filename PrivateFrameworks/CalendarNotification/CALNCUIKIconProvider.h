//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1502.1.1.3.0
//
#ifndef CALNCUIKIconProvider_h
#define CALNCUIKIconProvider_h
@import Foundation;

#include "CALNCalendarIconIdentifierProvider-Protocol.h"
#include "CALNNotificationIconProvider-Protocol.h"
#include "CalIconProvider-Protocol.h"

@class NSString;

@interface CALNCUIKIconProvider : NSObject<CALNNotificationIconProvider, CALNCalendarIconIdentifierProvider, CalIconProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)_identifierEncodingAllowedCharacters;
+ (id)sharedInstance;
+ (BOOL)_parseIconIdentifier:(id)identifier intoDateComponents:(id *)components calendar:(id *)calendar type:(long long *)type;

/* instance methods */
- (id)pngDataForIconWithIdentifier:(id)identifier;
- (id)identifierForIconWithDate:(id)date inCalendar:(id)calendar;
@end

#endif /* CALNCUIKIconProvider_h */
