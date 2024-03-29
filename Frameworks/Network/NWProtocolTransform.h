//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3762.60.29.0.0
//
#ifndef NWProtocolTransform_h
#define NWProtocolTransform_h
@import Foundation;

#include "NWEndpoint.h"
#include "NWPrettyDescription-Protocol.h"
#include "OS_nw_protocol_transform-Protocol.h"

@interface NWProtocolTransform : NSObject<NWPrettyDescription>

@property (retain) NSObject<OS_nw_protocol_transform> *internalTransform;
@property (nonatomic) BOOL noProxy;
@property (nonatomic) int multipathService;
@property (copy, nonatomic) NWEndpoint *replacementEndpoint;
@property (nonatomic) BOOL tfo;
@property (nonatomic) BOOL tfoNoCookie;
@property (nonatomic) int dataMode;
@property (nonatomic) unsigned long long fallbackMode;
@property (nonatomic) BOOL prohibitDirect;
@property (nonatomic) BOOL disablePathFallback;

/* instance methods */
- (id)init;
- (id)initWithCTransform:(id)ctransform;
- (id)descriptionWithIndent:(int)indent showFullContent:(BOOL)content;
- (id)description;
- (id)privateDescription;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)disableProtocol:(struct nw_protocol_identifier { char x0[32] int x1; int x2; } *)protocol;
- (void)clearProtocolsAtLevel:(int)level;
- (void)appendProtocol:(id)protocol atLevel:(int)level;
- (BOOL)fastOpenForceEnable;
- (void)setFastOpenForceEnable:(BOOL)enable;
@end

#endif /* NWProtocolTransform_h */
