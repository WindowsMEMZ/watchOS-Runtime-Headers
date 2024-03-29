//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 466.7.8.3.2
//
#ifndef AKWalrusContext_h
#define AKWalrusContext_h
@import Foundation;

#include "AKAuthenticationContext-Protocol.h"
#include "AKDevice.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSDictionary, NSString;

@interface AKWalrusContext : NSObject<AKAuthenticationContext, NSSecureCoding, NSCopying> {
  /* instance variables */
  NSString *_proxiedAppName;
}

@property (copy, nonatomic) NSString *altDSID;
@property (nonatomic) long long serviceType;
@property (nonatomic) unsigned long long authenticationType;
@property (nonatomic) unsigned long long authenticationMode;
@property (nonatomic) BOOL isMDMInformationRequired;
@property (copy, nonatomic) NSString *_proxiedAppName;
@property (copy, nonatomic) NSDictionary *appProvidedData;
@property (copy, nonatomic) NSString *appProvidedContext;
@property (copy, nonatomic) AKDevice *proxiedDevice;
@property (copy, nonatomic) AKDevice *companionDevice;
@property (nonatomic) BOOL cliMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)_setProxiedAppName:(id)name;
@end

#endif /* AKWalrusContext_h */
