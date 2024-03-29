//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 148.0.0.0.0
//
#ifndef PTDrillDownRow_h
#define PTDrillDownRow_h
@import Foundation;

#include "PTSRow.h"
#include "PTSettings.h"

@class NSString;

@interface PTDrillDownRow : PTSRow {
  /* instance variables */
  PTSettings *_childSettings;
}

@property (readonly, nonatomic) NSString *childKeyPath;

/* class methods */
+ (id)rowWithTitle:(id)title childSettingsKeyPath:(id)path;
+ (id)rowWithTitleKeyPath:(id)path childSettingsKeyPath:(id)path;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithChildKeyPath:(id)path;
- (void)dealloc;
- (void)setSettings:(id)settings;
- (void)settings:(id)settings changedValueForKeyPath:(id)path;
- (id)value;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* PTDrillDownRow_h */
