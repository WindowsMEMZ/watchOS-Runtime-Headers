//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKListTextFieldContentConfiguration_h
#define PKListTextFieldContentConfiguration_h
@import Foundation;

#include "UIContentConfiguration-Protocol.h"

@class NSError, NSString, UIColor, UIListContentConfiguration, UIListContentTextProperties;

@interface PKListTextFieldContentConfiguration : NSObject<UIContentConfiguration> {
  /* instance variables */
  UIListContentConfiguration *_backingConfig;
}

@property (nonatomic) unsigned long long mode;
@property (copy, nonatomic) NSString *text;
@property (readonly, nonatomic) UIListContentTextProperties *textProperties;
@property (copy, nonatomic) NSString *secondaryText;
@property (readonly, nonatomic) UIListContentTextProperties *secondaryTextProperties;
@property (copy, nonatomic) NSString *placeholderText;
@property (nonatomic) long long returnKeyType;
@property (nonatomic) long long keyboardType;
@property (nonatomic) long long autocorrectionType;
@property (nonatomic) BOOL clearsOnBeginEditing;
@property (nonatomic) BOOL clearsOnInsertion;
@property (nonatomic) BOOL focusTextField;
@property (copy, nonatomic) NSError *error;
@property (copy, nonatomic) UIColor *errorColor;
@property (copy, nonatomic) id /* block */ hasErrorHandler;
@property (nonatomic) struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } directionalLayoutMargins;
@property (nonatomic) double textToSecondaryTextVerticalPadding;
@property (nonatomic) double textToSecondaryTextHorizontalPadding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)cellConfiguration;
+ (id)valueCellConfiguration;

/* instance methods */
- (id)initWithBackingConfig:(id)config;
- (id)makeContentView;
- (id)updatedConfigurationForState:(id)state;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (BOOL)_isEqualToListTextFieldContentConfiguration:(id)configuration;
@end

#endif /* PKListTextFieldContentConfiguration_h */
