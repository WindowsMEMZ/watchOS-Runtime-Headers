//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1161.4.0.0.0
//
#ifndef NPKListItem_h
#define NPKListItem_h
@import Foundation;

@class NSString;

@interface NPKListItem : NSObject

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *dataSourceIdentifier;
@property (readonly, nonatomic) id /* block */ action;

/* instance methods */
- (id)initWithIdentifier:(id)identifier action:(id /* block */)action;
- (id)initWithIdentifier:(id)identifier;
- (id)description;
- (id)leadingSwipeActionsConfigurationWithListViewController:(id)controller;
- (id)trailingSwipeActionsConfigurationWithListViewController:(id)controller;
@end

#endif /* NPKListItem_h */
