//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 331.0.0.0.0
//
#ifndef ACUIDataclassActionPicker_h
#define ACUIDataclassActionPicker_h
@import Foundation;

@class ACAccount, ACDataclassAction, NSArray, NSMutableArray;

@interface ACUIDataclassActionPicker : NSObject

@property (readonly, nonatomic) NSArray *actions;
@property (copy, nonatomic) NSArray *affectedDataclasses;
@property (readonly, nonatomic) ACAccount *affectedAccount;
@property (readonly, nonatomic) BOOL hasDestructiveActions;
@property (readonly, nonatomic) ACDataclassAction *firstDestructiveAction;
@property (readonly, nonatomic) long long priorityIndex;

/* instance methods */
- (id)initWithActions:(id)actions affectingAccount:(id)account;
- (void)addAffectedDataclass:(id)dataclass;
- (id)actionOfType:(long long)type;
- (BOOL)hasActionOfType:(long long)type;
- (id)showInViewController:(id)controller;
- (id)title;
- (id)message;
- (id)_stringForMessage:(id)message withAccountType:(id)type dataclassDescription:(id)description;
- (id)descriptionForDataclassAction:(id)action;
@end

#endif /* ACUIDataclassActionPicker_h */
