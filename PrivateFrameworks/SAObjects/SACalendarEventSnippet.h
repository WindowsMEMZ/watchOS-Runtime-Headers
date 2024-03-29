//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3300.28.1.0.0
//
#ifndef SACalendarEventSnippet_h
#define SACalendarEventSnippet_h
@import Foundation;

#include "SAUISnippet.h"

@class NSArray, NSDate, NSString;

@interface SACalendarEventSnippet : SAUISnippet

@property (copy, nonatomic) NSArray *events;
@property (copy, nonatomic) NSDate *snippetEndDate;
@property (copy, nonatomic) NSDate *snippetStartDate;
@property (copy, nonatomic) NSString *timeZoneId;

/* class methods */
+ (id)eventSnippet;
+ (id)eventSnippetWithDictionary:(id)dictionary context:(id)context;

/* instance methods */
- (id)groupIdentifier;
- (id)encodedClassName;
@end

#endif /* SACalendarEventSnippet_h */
