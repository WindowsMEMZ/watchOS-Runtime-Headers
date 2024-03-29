//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef _SFSettingsAlertOptionsGroupController_Protocol_h
#define _SFSettingsAlertOptionsGroupController_Protocol_h
@import Foundation;

@protocol _SFSettingsAlertOptionsGroupController <NSObject>

@property (readonly, nonatomic) NSArray *values;

/* instance methods */
- (void)prepareItem:(id)item forValue:(id)value;
- (void)setSelectedValue:(id)value;
- (id)attributedStringForValue:(id)value;
- (id)textStyleForValue:(id)value;
- (BOOL)isSelectedValue:(id)value;
@end

#endif /* _SFSettingsAlertOptionsGroupController_Protocol_h */
