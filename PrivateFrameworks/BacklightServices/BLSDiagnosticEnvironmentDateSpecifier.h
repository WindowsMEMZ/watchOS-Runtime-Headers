//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3.2.4.0.0
//
#ifndef BLSDiagnosticEnvironmentDateSpecifier_h
#define BLSDiagnosticEnvironmentDateSpecifier_h
@import Foundation;

#include "BLSAlwaysOnDateSpecifier.h"
#include "BLSEnvironmentDateSpecifying-Protocol.h"
#include "BSXPCCoding-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface BLSDiagnosticEnvironmentDateSpecifier : NSObject<BLSEnvironmentDateSpecifying, NSSecureCoding, BSXPCCoding>

@property (readonly, nonatomic) BLSAlwaysOnDateSpecifier *dateSpecifier;
@property (readonly, copy, nonatomic) NSString *environmentIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)createWithSpecifier:(id)specifier;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithDateSpecifier:(id)specifier environmentIdentifier:(id)identifier;
- (id)bls_loggingString;
- (id)bls_shortLoggingString;
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithXPCDictionary:(id)xpcdictionary;
- (void)encodeWithXPCDictionary:(id)xpcdictionary;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* BLSDiagnosticEnvironmentDateSpecifier_h */
