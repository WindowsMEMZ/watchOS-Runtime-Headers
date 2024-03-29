//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFFocusConfigurationHostContextDelegate_Protocol_h
#define WFFocusConfigurationHostContextDelegate_Protocol_h
@import Foundation;

@protocol WFFocusConfigurationHostContextDelegate <NSObject>
/* instance methods */
- (void)focusConfigurationHostContext:(id)context configurationUIStateDidChange:(id)change;
- (void)focusConfigurationHostContext:(id)context didPressButtonWithIdentifier:(id)identifier cellFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
@end

#endif /* WFFocusConfigurationHostContextDelegate_Protocol_h */
