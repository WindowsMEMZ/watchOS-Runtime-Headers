//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2000.2.18.0.0
//
#ifndef _UINavigationItemChangeObserver_Protocol_h
#define _UINavigationItemChangeObserver_Protocol_h
@import Foundation;

@protocol _UINavigationItemChangeObserver <NSObject>
/* instance methods */
- (BOOL)navigationItemIsTopItem:(id)item;
- (BOOL)navigationItemIsBackItem:(id)item;
- (void)navigationItemUpdatedTitleContent:(id)content animated:(BOOL)animated;
- (void)navigationItemUpdatedLeftBarButtonItems:(id)items animated:(BOOL)animated;
- (void)navigationItemUpdatedRightBarButtonItems:(id)items animated:(BOOL)animated;
- (void)navigationItemUpdatedContentLayout:(id)layout animated:(BOOL)animated;
- (void)navigationItemUpdatedBackButtonContent:(id)content animated:(BOOL)animated;
- (void)navigationItemUpdatedLargeTitleDisplayMode:(id)mode;
- (void)navigationItemUpdatedLargeTitleContent:(id)content;
- (void)navigationItem:(id)item appearance:(id)appearance categoriesChanged:(long long)changed;
- (void)navigationItemSearchControllerReadyForDeferredAutomaticShowsScopeBar:(id)bar;
- (void)navigationItemUpdatedBackgroundAppearance:(id)appearance;
- (void)navigationItemUpdatedScrollEdgeProgress:(id)progress;
- (void)navigationItemUpdatedCanvasView:(id)view;
- (void)navigationItemUpdatedPromptContent:(id)content;
- (void)navigationItemUpdatedSearchController:(id)controller oldSearchController:(id)controller;
- (void)navigationItemUpdatedBottomPalette:(id)palette oldPalette:(id)palette;
@optional
/* instance methods */
- (void)navigationItemUpdatedCenterBarButtonItems:(id)items animated:(BOOL)animated;
- (void)navigationItemUpdatedAdditionalOverflowItems:(id)items;
- (id)presentationSourceForContent:(long long)content navigationItem:(id)item;
- (BOOL)shouldSearchControllerDeferPresentationTransitionForNavigationItem:(id)item;
- (void)navigationItemUpdatedPalettes:(id)palettes;
@end

#endif /* _UINavigationItemChangeObserver_Protocol_h */
