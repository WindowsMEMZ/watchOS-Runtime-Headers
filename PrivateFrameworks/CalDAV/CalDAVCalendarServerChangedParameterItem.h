//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1141.2.1.0.0
//
#ifndef CalDAVCalendarServerChangedParameterItem_h
#define CalDAVCalendarServerChangedParameterItem_h
@import Foundation;

#include "CoreDAVItemWithNoChildren.h"

@class NSString;

@interface CalDAVCalendarServerChangedParameterItem : CoreDAVItemWithNoChildren

@property (retain, nonatomic) NSString *nameAttribute;
@property (retain, nonatomic) NSString *typeAttribute;

/* instance methods */
- (void)parserFoundAttributes:(id)attributes;
@end

#endif /* CalDAVCalendarServerChangedParameterItem_h */
