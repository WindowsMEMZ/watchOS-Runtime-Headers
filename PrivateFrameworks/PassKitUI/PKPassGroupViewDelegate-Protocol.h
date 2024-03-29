//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPassGroupViewDelegate_Protocol_h
#define PKPassGroupViewDelegate_Protocol_h
@import Foundation;

@protocol PKPassGroupViewDelegate <NSObject>
@optional
/* instance methods */
- (void)groupViewTapped:(id)tapped;
- (void)groupViewPressed:(id)pressed;
- (void)groupViewPressedDidEnd:(id)end;
- (BOOL)groupViewShouldAllowPanning:(id)panning;
- (void)groupViewPanDidBegin:(id)begin;
- (void)groupViewPanDidEnd:(id)end;
- (void)groupView:(id)view panned:(struct CGPoint { double x0; double x1; })panned withVelocity:(struct CGPoint { double x0; double x1; })velocity;
- (void)groupViewDidUpdatePageControlVisibility:(id)visibility;
- (void)groupView:(id)view didUpdatePassView:(id)view;
- (void)groupView:(id)view deleteButtonPressedForPass:(id)pass;
- (BOOL)groupView:(id)view deleteButtonEnabledForPass:(id)pass;
- (void)groupView:(id)view frontmostPassViewDidChange:(id)change withContext:(id)context;
- (void)groupView:(id)view faceViewFrameDidChangeForFrontmostPassView:(id)view;
- (unsigned long long)groupViewPassesSuppressedContent:(id)content;
- (id)groupViewReusablePassViewQueue:(id)queue;
- (void)groupViewExpandButtonTapped:(id)tapped;
- (long long)groupViewContentModeForFrontmostPassWhenStacked:(id)stacked;
- (long long)groupViewContentModeForFrontmostPassWhenPiled:(id)piled withDefaultContentMode:(long long)mode;
@end

#endif /* PKPassGroupViewDelegate_Protocol_h */
