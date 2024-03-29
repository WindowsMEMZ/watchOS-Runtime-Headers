//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1221.1.1.2.0
//
#ifndef CoreDAVMatchResultsItem_h
#define CoreDAVMatchResultsItem_h
@import Foundation;

#include "CoreDAVItem.h"
#include "CoreDAVLeafItem.h"

@interface CoreDAVMatchResultsItem : CoreDAVItem

@property (retain, nonatomic) CoreDAVLeafItem *rank;
@property (retain, nonatomic) CoreDAVLeafItem *language;
@property (retain, nonatomic) CoreDAVLeafItem *region;
@property (retain, nonatomic) CoreDAVLeafItem *calendarDescription;

/* class methods */
+ (id)copyParseRules;

/* instance methods */
- (id)description;
@end

#endif /* CoreDAVMatchResultsItem_h */
