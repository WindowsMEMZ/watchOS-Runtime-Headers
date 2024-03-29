//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2220.14.1.0.0
//
#ifndef AVContentKeyReportGroup_h
#define AVContentKeyReportGroup_h
@import Foundation;

#include "AVWeakReference.h"

@class NSData, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface AVContentKeyReportGroup : NSObject {
  /* instance variables */
  AVWeakReference *_contentKeySessionWeakReference;
  struct OpaqueFigContentKeySession * _figContentKeySession;
  NSData *_protectorSessionIdentifier;
  NSMutableArray *_cryptorsList;
  NSObject<OS_dispatch_queue> *_serialQueue;
  NSString *_keySystem;
  unsigned long long _groupID;
  BOOL _isExpired;
  struct OpaqueFigCFWeakReferenceHolder * _weakContentKeyBoss;
  BOOL _useContentKeyBoss;
}

@property (readonly) NSData *contentProtectionSessionIdentifier;

/* instance methods */
- (id)initWithKeySystem:(id)system keySession:(id)session contentKeyBoss:(struct CMBaseObject *)boss useContentKeyBoss:(BOOL)boss groupID:(unsigned long long)id storageDirectoryAtURL:(id)url;
- (void)createProtectorSessionIdentifierIfNecessary;
- (int)configureAppIdentifier:(id)identifier;
- (BOOL)_setAuthorizationToken:(id)token forIdentifier:(id)identifier error:(id *)error;
- (BOOL)hasProtector;
- (struct OpaqueFigCPECryptor *)copyCryptorForCryptKeyAttributes:(id)attributes;
- (int)externalProtectionStatusForCryptor:(struct OpaqueFigCPECryptor *)cryptor withDisplays:(id)displays;
- (struct OpaqueFigCPECryptor *)createCryptorIfNecessaryForIdentifier:(id)identifier initializationData:(id)data formatDescription:(struct opaqueCMFormatDescription *)description hlsMethod:(id)method error:(id *)error;
- (struct OpaqueFigCPECryptor *)copyCryptorForIdentifier:(id)identifier initializationData:(id)data;
- (struct OpaqueFigContentKeySession *)_figContentKeySession;
- (void)dealloc;
- (struct CMBaseObject *)_contentKeyBoss;
- (id)_contentKeySession;
- (id)cryptorOptionsForIdentifier:(id)identifier initializationData:(id)data formatDescription:(struct opaqueCMFormatDescription *)description hlsMethod:(id)method;
- (void)failProcessingContentKeyRequestWithIdentifier:(id)identifier initializationData:(id)data error:(id)error;
- (id)_processContentKeyRequestWithIdentifier:(id)identifier contentIdentifier:(id)identifier keyIDFromInitializationData:(id)data initializationData:(id)data options:(id)options;
- (id)_processContentKeyRequestWithKeyRequestFromPSSH:(id)pssh decryptFormatType:(id)type initializationData:(id)data options:(id)options;
- (void)processContentKeyRequestWithIdentifier:(id)identifier initializationData:(id)data options:(id)options;
- (BOOL)_associateRequestWithGroupWithRequestID:(unsigned long long)id error:(id *)error;
- (BOOL)associateContentKeyRequest:(id)request;
- (BOOL)_destroyContentKeyGroupWithError:(id *)error;
- (void)expire;
@end

#endif /* AVContentKeyReportGroup_h */
