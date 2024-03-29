//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UINavigationBarContentViewDelegate_Protocol_h
#define _UINavigationBarContentViewDelegate_Protocol_h
@import Foundation;

@protocol _UINavigationBarContentViewDelegate 
/* instance methods */
- (void)navigationBarContentViewDidTriggerBackAction:(id)action fromBackButtonItem:(id)item;
- (void)navigationBarContentViewDidChangeDesiredHeight:(id)height;
- (void)navigationBarContentViewDidTriggerCustomization:(id)customization;
- (void)navigationBarContentViewDidTriggerTitleRenameAction:(id)action;
- (void)navigationBarContentViewDidChangeTintColor:(id)color;
@end

#endif /* _UINavigationBarContentViewDelegate_Protocol_h */
