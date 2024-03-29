//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.6.0.0
//
#ifndef ML3MusicLibraryResourcesManagerContext_h
#define ML3MusicLibraryResourcesManagerContext_h
@import Foundation;

#include "MLMediaLibraryAccountChangeObserver-Protocol.h"
#include "MLMediaLibraryResourcesServiceProtocol-Protocol.h"
#include "_MSVAccountInformationProviding-Protocol.h"

@class NSString;

@interface ML3MusicLibraryResourcesManagerContext : NSObject

@property (readonly, nonatomic) BOOL runningInDaemon;
@property (readonly, nonatomic) BOOL multiUserSupported;
@property (readonly, nonatomic) NSObject<MLMediaLibraryResourcesServiceProtocol> *resourcesService;
@property (readonly, nonatomic) NSObject<_MSVAccountInformationProviding> *accountInfo;
@property (readonly, nonatomic) NSObject<MLMediaLibraryAccountChangeObserver> *accountChangeObserver;
@property (readonly, nonatomic) NSString *libraryContainerIdentifier;

/* class methods */
+ (id)contextForAutoupdatingSharedLibrary;
+ (id)contextForSingleUserLibraryWithAccountInfo:(id)info;
+ (id)contextForSingleUserLibraryWithLibraryContainerIdentifier:(id)identifier;
+ (id)contextForMultiUserFrameworkLibraryWithService:(id)service;
+ (id)contextForMultiUserDaemonLibraryWithAccountInfo:(id)info accountChangeObserver:(id)observer;

/* instance methods */
- (id)_initWithResourcesService:(id)service accountInfo:(id)info libraryContainerIdentifier:(id)identifier accountChangeObserver:(id)observer supportsMultiUsers:(BOOL)users runningInDaemon:(BOOL)daemon;
- (BOOL)isRunningInDaemon;
- (BOOL)isMultiUserSupported;
@end

#endif /* ML3MusicLibraryResourcesManagerContext_h */
