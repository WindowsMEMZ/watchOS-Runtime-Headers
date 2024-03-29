//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 811.0.0.0.0
//
#ifndef NNMKMessageContentTextViewDelegate_Protocol_h
#define NNMKMessageContentTextViewDelegate_Protocol_h
@import Foundation;

@protocol NNMKMessageContentTextViewDelegate <NNMKTextAttachmentViewDelegate>
@optional
/* instance methods */
- (void)messageContentViewWillRenderContent:(id)content;
- (void)messageContentViewDidRenderContent:(id)content;
- (void)messageContentView:(id)view adjustedAttributedString:(id)string;
- (void)messageContentView:(id)view didScrollToYPosition:(double)yposition;
- (void)messageContentView:(id)view didEndScrollingAtYPosition:(double)yposition;
- (void)messageContentViewWillBeginDragging:(id)dragging;
- (void)messageContentView:(id)view willEndDraggingWithVelocity:(struct CGPoint { double x0; double x1; })velocity targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)offset;
- (void)messageContentView:(id)view userTappedUnhandledURL:(id)url;
- (void)messageContentView:(id)view userTappedAttachment:(id)attachment;
- (void)messageContentViewContentSizeDidChange:(id)change;
@end

#endif /* NNMKMessageContentTextViewDelegate_Protocol_h */
