//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 867.10.0.0.0
//
#ifndef FBSDisplayLayoutElement_h
#define FBSDisplayLayoutElement_h
@import Foundation;

#include "BSDescriptionProviding-Protocol.h"
#include "BSSettingDescriptionProvider-Protocol.h"
#include "BSXPCCoding-Protocol.h"
#include "FBSDisplayLayoutElement-Protocol.h"
#include "NSCopying-Protocol.h"

@class BSMutableSettings, NSString;

@interface FBSDisplayLayoutElement : NSObject<NSCopying, BSXPCCoding, BSSettingDescriptionProvider, BSDescriptionProviding, FBSDisplayLayoutElement> {
  /* instance variables */
  BOOL _application;
  BOOL _keyboardFocus;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } referenceFrame;
@property (nonatomic) long long level;
@property (nonatomic) BOOL fillsDisplayBounds;
@property (nonatomic) BOOL UIApplicationElement;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (nonatomic) BOOL hasKeyboardFocus;
@property (readonly, copy, nonatomic) BSMutableSettings *otherSettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithIdentifier:(id)identifier;
- (id)init;
- (BOOL)isEqual:(id)equal;
- (id)keyDescriptionForSetting:(unsigned long long)setting;
- (id)valueDescriptionForFlag:(long long)flag object:(id)object ofSetting:(unsigned long long)setting;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)descriptionWithMultilinePrefix:(id)prefix;
- (id)descriptionBuilderWithMultilinePrefix:(id)prefix;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithXPCDictionary:(id)xpcdictionary;
- (void)encodeWithXPCDictionary:(id)xpcdictionary;
- (Class)fallbackXPCEncodableClass;
- (BOOL)isUIApplicationElement;
@end

#endif /* FBSDisplayLayoutElement_h */
