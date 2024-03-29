//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UITraitUserInterfaceIdiom_h
#define UITraitUserInterfaceIdiom_h
@import Foundation;

#include "UINSIntegerTraitDefinition-Protocol.h"
#include "UITraitDefinitionPrivate-Protocol.h"

@interface UITraitUserInterfaceIdiom : NSObject<UITraitDefinitionPrivate, UINSIntegerTraitDefinition>
/* class methods */
+ (long long)defaultValue;
+ (BOOL)defaultValueRepresentsUnspecified;
+ (id)name;
+ (id)identifier;
+ (BOOL)affectsColorAppearance;
+ (BOOL)_isPrivate;
@end

#endif /* UITraitUserInterfaceIdiom_h */
