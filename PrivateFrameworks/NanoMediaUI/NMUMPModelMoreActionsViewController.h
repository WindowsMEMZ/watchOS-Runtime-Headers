//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2021.300.9.2.0
//
#ifndef NMUMPModelMoreActionsViewController_h
#define NMUMPModelMoreActionsViewController_h
@import Foundation;

#include "PUICActionSheetController.h"
#include "NMUNowPlayingTitlesView.h"
#include "NMUTitlesActionSheetHeaderView.h"

@class MPAVRoute, MPModelObject, NSArray, UIViewController;

@interface NMUMPModelMoreActionsViewController : PUICActionSheetController {
  /* instance variables */
  NMUTitlesActionSheetHeaderView *_headerView;
}

@property (retain, nonatomic) NSArray *items;
@property (readonly, nonatomic) MPModelObject *modelObject;
@property (readonly, nonatomic) MPAVRoute *endpointRoute;
@property (weak, nonatomic) UIViewController *presentingContainerViewController;
@property (readonly, nonatomic) NMUNowPlayingTitlesView *titlesView;

/* class methods */
+ (id)requiredPropertiesForModelKind:(id)kind;
+ (BOOL)hasContextualActionsForPlayerResponse:(id)response;
+ (id)_defaultItemsWithModelObject:(id)object endpointRoute:(id)route invalidationBlock:(id /* block */)block;
+ (id)requiredPlayingItemPropertiesWithPlayerPath:(id)path;
+ (id)requiredQueueSectionPropertiesWithPlayerPath:(id)path;
+ (id)defaultItemsWithPlayerResponse:(id)response invalidationBlock:(id /* block */)block;

/* instance methods */
- (id)initWithModelObject:(id)object endpointRoute:(id)route;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)appear;
- (void)viewDidDisappear:(BOOL)disappear;
- (id)groups;
- (id)_headerView;
@end

#endif /* NMUMPModelMoreActionsViewController_h */
