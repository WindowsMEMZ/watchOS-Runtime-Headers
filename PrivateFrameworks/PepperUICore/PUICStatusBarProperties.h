//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2000.2.18.0.0
//
#ifndef PUICStatusBarProperties_h
#define PUICStatusBarProperties_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "PUICApplicationStatusBarProperties-Protocol.h"

@class NSArray, NSString, UIColor, UIFont, UIImage, UIView;

@interface PUICStatusBarProperties : NSObject<PUICApplicationStatusBarProperties, NSCopying>

@property (retain, nonatomic) UIImage *titleViewSnapshotImage;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIView *titleView;
@property (retain, nonatomic) UIColor *titleColor;
@property (retain, nonatomic) UIFont *titleFont;
@property (nonatomic) double titleBaseLine;
@property (nonatomic) double inset;
@property (nonatomic) BOOL titleInteractive;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) BOOL showNavigationUI;
@property (nonatomic) BOOL navUIBackButtonDisabled;
@property (retain, nonatomic) UIImage *navigationImage;
@property (copy, nonatomic) NSArray *rightSideAdditionalImages;
@property (copy, nonatomic) NSArray *rightSideAdditionalImagesInteractive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)_postStatusBarTappedNotification;
- (BOOL)isTitleInteractive;
@end

#endif /* PUICStatusBarProperties_h */
