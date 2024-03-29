//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef CLKLocalizableCompoundTextProvider_h
#define CLKLocalizableCompoundTextProvider_h
@import Foundation;

#include "CLKTextProvider.h"

@class NSArray, NSString;

@interface CLKLocalizableCompoundTextProvider : CLKTextProvider {
  /* instance variables */
  NSArray *_textProviders;
  NSString *_formatKey;
}

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithFormatKey:(id)key textProviders:(id)providers;
- (id)_localizedStringForKey:(id)key withBundle:(id)bundle forLocalization:(id)localization;
- (id)_localizedTextProviderWithBundle:(id)bundle forLocalization:(id)localization;
- (id)_sessionAttributedTextForIndex:(unsigned long long)index withStyle:(id)style;
- (BOOL)_validate;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)_initWithJSONObjectRepresentation:(id)representation;
- (id)JSONObjectRepresentation;
- (id)_arrayOfTextProviderJSONObjectRepresentations;
@end

#endif /* CLKLocalizableCompoundTextProvider_h */
