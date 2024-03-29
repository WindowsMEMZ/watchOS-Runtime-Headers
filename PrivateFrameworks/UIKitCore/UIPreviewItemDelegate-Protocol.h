//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIPreviewItemDelegate_Protocol_h
#define UIPreviewItemDelegate_Protocol_h
@import Foundation;

@protocol UIPreviewItemDelegate <NSObject>
/* instance methods */
- (id)_dataForPreviewItemController:(id)controller atPosition:(struct CGPoint { double x0; double x1; })position type:(long long *)type;
@optional
/* instance methods */
- (BOOL)_interactionShouldBeginFromPreviewItemController:(id)controller forPosition:(struct CGPoint { double x0; double x1; })position;
- (void)_interactionStartedFromPreviewItemController:(id)controller;
- (void)_interactionStoppedFromPreviewItemController:(id)controller;
- (id)_presentedViewControllerForPreviewItemController:(id)controller;
- (void)_previewItemController:(id)controller willPresentPreview:(id)preview forPosition:(struct CGPoint { double x0; double x1; })position inSourceView:(id)view;
- (void)_previewItemController:(id)controller didDismissPreview:(id)preview committing:(BOOL)committing;
- (void)_previewItemController:(id)controller commitPreview:(id)preview;
- (void)_previewItemControllerDidCancelPreview:(id)preview;
- (id)_presentationSnapshotForPreviewItemController:(id)controller;
- (id)_presentationRectsForPreviewItemController:(id)controller;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_presentationRectForPreviewItemController:(id)controller;
@end

#endif /* UIPreviewItemDelegate_Protocol_h */
