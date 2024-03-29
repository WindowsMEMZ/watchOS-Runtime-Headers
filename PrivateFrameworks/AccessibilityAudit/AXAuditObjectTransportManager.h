//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 149.1.0.0.0
//
#ifndef AXAuditObjectTransportManager_h
#define AXAuditObjectTransportManager_h
@import Foundation;

@class NSMutableArray, NSMutableDictionary;

@interface AXAuditObjectTransportManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *_keyToTransportInfo;
@property (retain, nonatomic) NSMutableArray *_transportInfoEncodeOnly;
@property (nonatomic) BOOL enforceSecureTransport;

/* class methods */
+ (id)sharedManager;

/* instance methods */
- (id)init;
- (void)_registerKnownClasses;
- (void)registerTransportableClass:(Class)class;
- (id)transportDictionaryForObject:(id)object;
- (id)objectForTransportDictionary:(id)dictionary expectedClass:(Class)class;
- (id)transportArrayForArray:(id)array;
- (id)arrayForTransportArray:(id)array expectedClass:(Class)class;
- (id)_transportInfoEncodeOnlyForObject:(id)object;
- (id)_transportInfoForObject:(id)object;
- (void)registerTransportInfoMasquerade:(id)masquerade encodeOnly:(BOOL)only;
- (void)registerTransportInfoPropertyBased:(id)based;
- (void)_validateTransportObjectIfNeeded:(id)needed;
- (BOOL)validateSupportedConnectionSecureTransport:(id)transport;
@end

#endif /* AXAuditObjectTransportManager_h */
