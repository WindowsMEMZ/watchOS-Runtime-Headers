//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 402.23.0.0.0
//
#ifndef CHSMutableAvocadoDescriptor_h
#define CHSMutableAvocadoDescriptor_h
@import Foundation;

#include "CHSAvocadoDescriptor.h"

@class NSData, NSString;

@interface CHSMutableAvocadoDescriptor : CHSAvocadoDescriptor

@property (copy, @dynamic, nonatomic) NSString *extensionBundleIdentifier;
@property (copy, @dynamic, nonatomic) NSString *kind;
@property (@dynamic, nonatomic) unsigned long long supportedFamilies;
@property (@dynamic, nonatomic) long long widgetVisibility;
@property (copy, @dynamic, nonatomic) NSString *intentType;
@property (copy, @dynamic, nonatomic) NSString *displayName;
@property (copy, @dynamic, nonatomic) NSString *widgetDescription;
@property (copy, @dynamic, nonatomic) NSString *containerBundleIdentifier;
@property (copy, @dynamic, nonatomic) NSData *localeToken;
@property (copy, @dynamic, nonatomic) NSString *eventMachServiceName;
@property (@dynamic, nonatomic) BOOL transparent;

/* instance methods */
- (id)initWithExtensionBundleIdentifier:(id)identifier kind:(id)kind supportedFamilies:(unsigned long long)families intentType:(id)type;
- (id)initWithExtensionBundleIdentifier:(id)identifier containerBundleIdentifier:(id)identifier kind:(id)kind supportedFamilies:(unsigned long long)families intentType:(id)type;
- (id)initWithExtensionBundleIdentifier:(id)identifier containerBundleIdentifier:(id)identifier kind:(id)kind displayName:(id)name intentType:(id)type supportedSizeClasses:(unsigned long long)classes widgetDescription:(id)description widgetVisibility:(long long)visibility;
- (id)initWithCoder:(id)coder;
@end

#endif /* CHSMutableAvocadoDescriptor_h */
