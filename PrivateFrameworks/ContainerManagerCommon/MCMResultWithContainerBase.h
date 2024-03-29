//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 582.60.2.0.0
//
#ifndef MCMResultWithContainerBase_h
#define MCMResultWithContainerBase_h
@import Foundation;

#include "MCMResultBase.h"
#include "MCMError.h"
#include "MCMPOSIXUser.h"
#include "MCMResultWithContainer-Protocol.h"

@class NSDictionary, NSString, NSURL, NSUUID;

@interface MCMResultWithContainerBase : MCMResultBase<MCMResultWithContainer>

@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) NSString *containerPathIdentifier;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) unsigned long long containerClass;
@property (readonly, nonatomic) MCMPOSIXUser *posixUser;
@property (readonly, nonatomic) NSString *personaUniqueString;
@property (readonly, nonatomic) char * sandboxToken;
@property (readonly, nonatomic) BOOL existed;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSDictionary *info;
@property (readonly, nonatomic) BOOL transient;
@property (readonly, nonatomic) NSString *userManagedAssetsRelPath;
@property (readonly, @dynamic, nonatomic) MCMError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (BOOL)encodeResultOntoReply:(id)reply;
- (id)initWithUUID:(id)uuid containerPathIdentifier:(id)identifier identifier:(id)identifier containerClass:(unsigned long long)class POSIXUser:(id)posixuser personaUniqueString:(id)string sandboxToken:(const char *)token existed:(BOOL)existed url:(id)url info:(id)info transient:(BOOL)transient userManagedAssetsRelPath:(id)path;
- (id)initWithContainerPath:(id)path containerIdentity:(id)identity uuid:(id)uuid sandboxToken:(const char *)token includePath:(BOOL)path;
- (id)initWithMetadata:(id)metadata sandboxToken:(const char *)token includePath:(BOOL)path includeInfo:(BOOL)info includeUserManagedAssetsRelPath:(BOOL)path;
- (void)dealloc;
@end

#endif /* MCMResultWithContainerBase_h */
