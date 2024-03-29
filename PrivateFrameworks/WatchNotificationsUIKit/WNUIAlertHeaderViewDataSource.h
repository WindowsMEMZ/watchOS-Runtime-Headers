//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 45.2.1.0.0
//
#ifndef WNUIAlertHeaderViewDataSource_h
#define WNUIAlertHeaderViewDataSource_h
@import Foundation;

#include "CUISAlertHeaderViewDataSource-Protocol.h"

@class CUISNotificationDateLabelDescription, NSDictionary, NSString, UIColor, UIImage;

@interface WNUIAlertHeaderViewDataSource : NSObject<CUISAlertHeaderViewDataSource>

@property (retain, nonatomic) NSDictionary *customInfo;
@property (copy, nonatomic) NSString *appIconBundleIdentifier;
@property (retain, nonatomic) CUISNotificationDateLabelDescription *dateDescription;
@property (retain, nonatomic) UIImage *icon;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) UIColor *titleColor;
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) UIColor *subtitleColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)dataSourceForNotification:(id)notification customInfo:(id)info;

/* instance methods */
- (id)appImageForHeaderView:(id)view;
- (void)getAppImageForHeaderView:(id)view completion:(id /* block */)completion;
- (id)iconForHeaderView:(id)view;
- (void)getIconForHeaderView:(id)view completion:(id /* block */)completion;
- (void)getlongLookIconForHeaderView:(id)view completion:(id /* block */)completion;
- (id)longLookIconForHeaderView:(id)view;
- (id)titleForHeaderView:(id)view;
- (id)titleColorForHeaderView:(id)view;
- (id)subtitleForHeaderView:(id)view;
- (id)subtitleColorForHeaderView:(id)view;
- (id)longLookTitleForHeaderView:(id)view;
- (id)longLookTitleColorForHeaderView:(id)view;
- (id)longLookPlatterColorForHeaderView:(id)view;
- (unsigned long long)iconTypeForHeaderView:(id)view;
- (unsigned long long)iconShapeForHeaderView:(id)view;
- (id)notificationDateLabelDescriptionForHeaderView:(id)view;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)descriptionBuilderWithMultilinePrefix:(id)prefix;
- (id)descriptionWithMultilinePrefix:(id)prefix;
@end

#endif /* WNUIAlertHeaderViewDataSource_h */
