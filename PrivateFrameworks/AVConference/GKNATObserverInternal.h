//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2005.6.1.3.2
//
#ifndef GKNATObserverInternal_h
#define GKNATObserverInternal_h
@import Foundation;

#include "GKNATObserver.h"
#include "GKNATObserver_SCContext.h"

@class NSMutableDictionary, NSRecursiveLock;
@protocol OS_dispatch_group, OS_dispatch_queue, OS_dispatch_semaphore;

@interface GKNATObserverInternal : GKNATObserver {
  /* instance variables */
  id _delegate;
  struct __SCDynamicStore * _dynamicStore;
  NSRecursiveLock *_xNATCheck;
  int _lastReportedNATType;
  int _lastReportedCarrierNATType;
  int _lastReportedNonCarrierNATType;
  NSMutableDictionary *_interfaceInfoDictionary;
  BOOL _nonCarrierInterfacesOnly;
  BOOL _checkTCPAndSSL;
  BOOL _favorNonCarrier;
  BOOL _newCarrierType;
  BOOL _addInRangeFlag;
  BOOL _addCarrierFlag;
  BOOL _ignoreNatTypeCache;
  BOOL _ignoreCarrierBundle;
  int _NATCheckRetryCount;
  double _NATCheckRetryDelay;
  NSMutableDictionary *_currentNetworkNames;
  NSObject<OS_dispatch_queue> *_natCheckQueue;
  NSObject<OS_dispatch_queue> *_reportNATQueue;
  NSObject<OS_dispatch_group> *_natCheckGroup;
  NSObject<OS_dispatch_semaphore> *_natCheckNetNameSema;
  BOOL _fNATCheckQueued;
  BOOL _fNATCheckInProgress;
  GKNATObserver_SCContext *_sccontext;
  BOOL _hasNATCheckStarted;
  BOOL _hasNATCheckEnded;
}

/* instance methods */
- (id)init;
- (id)initWithOptions:(id)options;
- (void)release;
- (void)dealloc;
- (int)natTypeForCommNATFlags:(unsigned int)natflags isCarrier:(BOOL)carrier;
- (unsigned int)setFlags:(unsigned int)flags forInterface:(id)interface isCached:(BOOL)cached isCachedKey:(id)key mask:(unsigned int)mask;
- (unsigned int)setCommNATFlags:(unsigned int)natflags forInterface:(id)interface isCached:(BOOL)cached;
- (unsigned int)setTCPFlags:(unsigned int)tcpflags forInterface:(id)interface isCached:(BOOL)cached;
- (unsigned int)setSSLFlags:(unsigned int)sslflags forInterface:(id)interface isCached:(BOOL)cached;
- (void)calculateSummmaryNATType:(int *)nattype andCarrierNATType:(int *)nattype andNonCarrierNATType:(int *)nattype copyInterfaceInfoDictionary:(id *)dictionary;
- (int)currentNATType;
- (void)shouldTryNATCheck;
- (void)reportNATType;
- (void)setDelegate:(id)delegate;
- (id)delegate;
- (struct tagCommNATInfo { unsigned int x0; unsigned int x1; unsigned short x2[3] unsigned int x3; } *)callCommNATTestFromIPPort:(struct tagIPPORT { int x0; char x1[16] union { unsigned int x0; unsigned char x1[16] } x2; unsigned short x3; } *)ipport ipv6Prefix:(const struct { int x0; unsigned char x1[12] } *)prefix;
- (int)callHTTPTestFromIPPort:(struct tagIPPORT { int x0; char x1[16] union { unsigned int x0; unsigned char x1[16] } x2; unsigned short x3; } *)ipport ipv6Prefix:(const struct { int x0; unsigned char x1[12] } *)prefix ToServer:(id)server isSSL:(BOOL)ssl;
- (BOOL)ensureNatCachePathExists;
- (id)copyNatTypeCachePlistScheme;
- (void)updateNatTypeCache_CachePlistScheme:(id)scheme;
- (id)copyNatTypeCache_OSXGamedScheme;
- (void)updateNatTypeCache_OSXGamedScheme:(id)scheme;
- (id)copyNatTypeCache;
- (void)updateNatTypeCache:(id)cache;
- (id)lookupCachedNATFlagsForNetwork:(id)network;
- (void)cacheNATFlags:(id)natflags forNetwork:(id)network;
- (void)NATCheckWithIPPort:(struct tagIPPORT { int x0; char x1[16] union { unsigned int x0; unsigned char x1[16] } x2; unsigned short x3; } *)ipport ipv6Prefix:(const struct { int x0; unsigned char x1[12] } *)prefix useCache:(BOOL)cache;
- (void)HTTPCheckWithIPPort:(struct tagIPPORT { int x0; char x1[16] union { unsigned int x0; unsigned char x1[16] } x2; unsigned short x3; } *)ipport ipv6Prefix:(const struct { int x0; unsigned char x1[12] } *)prefix useCache:(BOOL)cache;
- (void)HTTPSCheckWithIPPort:(struct tagIPPORT { int x0; char x1[16] union { unsigned int x0; unsigned char x1[16] } x2; unsigned short x3; } *)ipport ipv6Prefix:(const struct { int x0; unsigned char x1[12] } *)prefix useCache:(BOOL)cache;
- (void)clearRetries;
- (void)tryNATCheckWithDelay:(double)delay;
- (id)nameForNetworkWithIPPort:(struct tagIPPORT { int x0; char x1[16] union { unsigned int x0; unsigned char x1[16] } x2; unsigned short x3; } *)ipport interfaceName:(id)name;
- (void)registerForNetworkChanges;
@end

#endif /* GKNATObserverInternal_h */
