//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UISMutableDeviceContext_h
#define UISMutableDeviceContext_h
@import Foundation;

#include "UISDeviceContext.h"

@interface UISMutableDeviceContext : UISDeviceContext
/* instance methods */
- (void)setDeviceInfoValue:(id)value forKey:(id)key;
- (id)_dictionaryWithOnlyValidKeysFromDictionary:(id)dictionary;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* UISMutableDeviceContext_h */
