//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 297.1.0.0.0
//
#ifndef XBLaunchInterface_h
#define XBLaunchInterface_h
@import Foundation;

#include "BSXPCCoding-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "XBLaunchInterfaceConfiguration.h"

@class NSArray, NSString;

@interface XBLaunchInterface : NSObject<BSXPCCoding, NSSecureCoding> {
  /* instance variables */
  BOOL _default;
}

@property (nonatomic) unsigned long long type;
@property (nonatomic) BOOL _default;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSArray *urlSchemes;
@property (readonly, nonatomic) XBLaunchInterfaceConfiguration *configuration;
@property (readonly, nonatomic) BOOL isXIB;
@property (readonly, nonatomic) BOOL isStoryboard;
@property (readonly, nonatomic) BOOL isConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithType:(unsigned long long)type name:(id)name identifier:(id)identifier urlSchemes:(id)schemes isDefault:(BOOL)default;
- (id)initWithConfiguration:(id)configuration identifier:(id)identifier urlSchemes:(id)schemes isDefault:(BOOL)default;
- (id)initWithXPCDictionary:(id)xpcdictionary;
- (void)encodeWithXPCDictionary:(id)xpcdictionary;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (BOOL)_isDefault;
@end

#endif /* XBLaunchInterface_h */
