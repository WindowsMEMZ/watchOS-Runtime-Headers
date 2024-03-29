//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 148.0.0.0.0
//
#ifndef PTProxySettings_h
#define PTProxySettings_h
@import Foundation;

#include "PTSettings.h"
#include "PTProxySettingsDefinition.h"

@class NSMutableDictionary;

@interface PTProxySettings : PTSettings {
  /* instance variables */
  NSMutableDictionary *_values;
}

@property (readonly, nonatomic) PTProxySettingsDefinition *definition;

/* class methods */
+ (id)proxyWithDefinition:(id)definition;
+ (id)settingsOrProxyWithDefinition:(id)definition;
+ (id)new;
+ (id)settingsFromArchiveDictionary:(id)dictionary;

/* instance methods */
- (id)_initWithDefinition:(id)definition;
- (id)module;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)restoreDefaultValues;
- (void)restoreFromArchiveDictionary:(id)dictionary;
- (id)_createChildForKey:(id)key;
- (id)valueForKey:(id)key;
- (void)setValue:(id)value forKey:(id)key;
- (id)init;
- (id)initWithDefaultValues;
@end

#endif /* PTProxySettings_h */
