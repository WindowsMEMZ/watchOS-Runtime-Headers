//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef _SearchBarContent_h
#define _SearchBarContent_h
@import Foundation;

#include "UIView.h"
#include "HKBarButtonItemControl.h"
#include "HKIncrementalSearchBar.h"
#include "HKIncrementalSearchBarDelegate-Protocol.h"
#include "UISearchBarDelegate-Protocol.h"
#include "_SearchEntryWithMatchDisplay.h"

@class NSString, UIStackView;

@interface _SearchBarContent : UIView<UISearchBarDelegate>

@property (weak, nonatomic) NSObject<HKIncrementalSearchBarDelegate> *searchBarDelegate;
@property (readonly, weak, nonatomic) HKIncrementalSearchBar *searchBar;
@property (readonly, nonatomic) HKBarButtonItemControl *upBarButton;
@property (readonly, nonatomic) HKBarButtonItemControl *downBarButton;
@property (readonly, nonatomic) HKBarButtonItemControl *doneBarButton;
@property (readonly, nonatomic) _SearchEntryWithMatchDisplay *searchEntry;
@property (readonly, nonatomic) UIStackView *searchBarContainerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithSearchBar:(id)bar;
- (void)buildSearchBarContent;
- (void)layoutSubviews;
- (id)inputField;
- (void)upAction:(id)action;
- (void)downAction:(id)action;
- (void)searchBar:(id)bar textDidChange:(id)change;
- (void)searchBarSearchButtonClicked:(id)clicked;
@end

#endif /* _SearchBarContent_h */
