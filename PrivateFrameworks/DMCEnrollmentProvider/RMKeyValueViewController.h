//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3.26.3.6.0
//
#ifndef RMKeyValueViewController_h
#define RMKeyValueViewController_h
@import Foundation;

#include "PSListController.h"

@class RMUIKeyValueViewModel;

@interface RMKeyValueViewController : PSListController

@property (retain, nonatomic) RMUIKeyValueViewModel *viewModel;

/* instance methods */
- (void)viewDidLoad;
- (void)_processUserInfoDictionary;
- (void)viewWillAppear:(BOOL)appear;
- (id)specifiers;
- (id)_specifiersForKeyValues;
- (id)_keyValueDetailValue:(id)value;
@end

#endif /* RMKeyValueViewController_h */
