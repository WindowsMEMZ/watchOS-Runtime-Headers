//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 396.4.0.0.0
//
#ifndef TRISystemInfo_h
#define TRISystemInfo_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSArray, NSString;

@interface TRISystemInfo : NSObject<NSSecureCoding>

@property (nonatomic) BOOL isEnrolledInBetaProgram;
@property (retain, nonatomic) NSArray *enabledInputModeIdentifiers;
@property (nonatomic) BOOL logUserSettingsLanguageCode;
@property (nonatomic) BOOL logUserSettingsRegionCode;
@property (nonatomic) BOOL logUserKeyboardEnabledInputMode;
@property (retain, nonatomic) NSString *carrierBundleIdentifier;
@property (retain, nonatomic) NSString *carrierCountryIsoCode;
@property (nonatomic) BOOL isDiagnosticsAndUsageEnabled;
@property (nonatomic) BOOL hasAne;
@property (retain, nonatomic) NSString *aneVersion;
@property (nonatomic) BOOL isAutomatedTestDevice;

/* class methods */
+ (id)_persistentSystemInfoPath;
+ (id)info;
+ (id)loadSystemInfo;
+ (id)systemInfoFromFile:(id)file;
+ (id)createSystemInfoWithFactorProvider:(id)provider;
+ (BOOL)supportsSecureCoding;
+ (BOOL)_isSeedBuild;
+ (BOOL)_sysIsEnrolledInBetaProgram;
+ (id)_sysEnabledInputModeIdentifiers;
+ (id)_carrierBundleIdentifier;
+ (id)_carrierCountryIsoCode;
+ (BOOL)_isDiagnosticsAndUsageEnabled;
+ (BOOL)_hasAne;
+ (id)_aneVersion;
+ (BOOL)_isAutomatedTestDevice;
+ (BOOL)_isVirtualMachine;

/* instance methods */
- (id)initFromSystemWithFactorProvider:(id)provider;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (BOOL)save;
- (BOOL)saveToFile:(id)file;
@end

#endif /* TRISystemInfo_h */
