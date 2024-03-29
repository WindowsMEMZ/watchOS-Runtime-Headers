//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1161.4.0.0.0
//
#ifndef NPKActionItem_h
#define NPKActionItem_h
@import Foundation;

#include "NPKListItem.h"

@class NSString;

@interface NPKActionItem : NPKListItem

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) long long style;
@property (readonly, nonatomic) BOOL enabled;
@property (readonly, nonatomic) BOOL loading;

/* instance methods */
- (id)initWithIdentifier:(id)identifier title:(id)title style:(long long)style action:(id /* block */)action;
- (id)initWithIdentifier:(id)identifier title:(id)title style:(long long)style enabled:(BOOL)enabled action:(id /* block */)action;
- (id)initWithIdentifier:(id)identifier title:(id)title style:(long long)style enabled:(BOOL)enabled loading:(BOOL)loading action:(id /* block */)action;
- (id)description;
- (BOOL)isEnabled;
- (BOOL)isLoading;
@end

#endif /* NPKActionItem_h */
