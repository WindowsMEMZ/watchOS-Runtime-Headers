//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1161.4.0.0.0
//
#ifndef NPKTriStateItem_h
#define NPKTriStateItem_h
@import Foundation;

#include "NPKListItem.h"

@class NSString;

@interface NPKTriStateItem : NPKListItem {
  /* instance variables */
  long long _style;
}

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) id /* block */ getter;
@property (readonly, nonatomic) id /* block */ setter;

/* instance methods */
- (id)initWithIdentifier:(id)identifier style:(long long)style title:(id)title subtitle:(id)subtitle getter:(id /* block */)getter setter:(id /* block */)setter;
@end

#endif /* NPKTriStateItem_h */
