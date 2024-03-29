//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1936.30.51.4.2
//
#ifndef _UIHostActivityProxy_h
#define _UIHostActivityProxy_h
@import Foundation;

#include "SHSheetContentActivityProxy-Protocol.h"
#include "UIActivity.h"

@class NSAttributedString, NSString, NSUUID, SFProxyText;

@interface _UIHostActivityProxy : NSObject<SHSheetContentActivityProxy> {
  /* instance variables */
  atomic unsigned int _labelSlotID;
  atomic double _slotTextHeight;
}

@property (retain, nonatomic) NSUUID *activityIdentifierShare;
@property (retain, nonatomic) NSUUID *activityIdentifierOpen;
@property (retain, nonatomic) NSUUID *activityIdentifierCopy;
@property (nonatomic) BOOL isDisabled;
@property (nonatomic) BOOL isRestricted;
@property (nonatomic) BOOL isFavorite;
@property (nonatomic) BOOL isUserDefaultsActivity;
@property (copy, nonatomic) id /* block */ loadHandler;
@property (retain, nonatomic) SFProxyText *activityTitle;
@property (copy, nonatomic) NSAttributedString *activityFooter;
@property (copy, nonatomic) NSString *applicationBundleIdentifier;
@property (readonly, nonatomic) UIActivity *activity;
@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) unsigned int iconImageSlotID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithActivity:(id)activity;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (void)setLabelSlotID:(unsigned int)id;
- (unsigned int)labelSlotID;
- (void)setSlotTextHeight:(double)height;
- (double)slotTextHeight;
- (BOOL)isEqual:(id)equal;
- (BOOL)load;
- (unsigned int)imageSlotID;
@end

#endif /* _UIHostActivityProxy_h */
