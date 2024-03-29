//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKOverlayContextSection_h
#define HKOverlayContextSection_h
@import Foundation;

#include "HKDisplayTypeContextItemSection-Protocol.h"

@class NSArray, NSString, UIAction;

@interface HKOverlayContextSection : NSObject<HKDisplayTypeContextItemSection>

@property (readonly, nonatomic) NSString *localizedSectionTitle;
@property (readonly, nonatomic) NSArray *overlayContextItems;
@property (readonly, nonatomic) UIAction *accessoryButtonAction;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSArray *items;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithSectionTitle:(id)title overlayContextItems:(id)items accessoryButtonAction:(id)action;
- (id)initWithSectionTitle:(id)title overlayContextItems:(id)items;
@end

#endif /* HKOverlayContextSection_h */
