//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3762.60.29.0.0
//
#ifndef NWParameters_h
#define NWParameters_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "NWAddressEndpoint.h"
#include "NWInterface.h"
#include "NWPrettyDescription-Protocol.h"
#include "OS_nw_parameters-Protocol.h"

@class NSArray, NSData, NSDictionary, NSSet, NSString, NSURL, NSUUID;

@interface NWParameters : NSObject<NWPrettyDescription, NSSecureCoding, NSCopying>

@property (retain) NSObject<OS_nw_parameters> *internalParameters;
@property (nonatomic) BOOL indefinite;
@property (nonatomic) BOOL noProxy;
@property (readonly, nonatomic) BOOL valid;
@property (readonly, nonatomic) BOOL dryRun;
@property (readonly, nonatomic) BOOL prohibitCellular;
@property (nonatomic) BOOL prohibitFallback;
@property (nonatomic) BOOL discretionary;
@property (nonatomic) BOOL allowSocketAccess;
@property (retain, nonatomic) NSUUID *parentID;
@property (readonly, nonatomic) NSArray *parentIDs;
@property (retain, nonatomic) NSSet *SSLCipherSuitesInternal;
@property (nonatomic) unsigned long long minimumSSLProtocolVersionInternal;
@property (nonatomic) unsigned long long maximumSSLProtocolVersionInternal;
@property (readonly, nonatomic) unsigned char transportProtocol;
@property (nonatomic) BOOL keepAlive;
@property (nonatomic) unsigned long long keepAliveIdleTime;
@property (nonatomic) unsigned long long keepAliveInterval;
@property (nonatomic) BOOL keepAliveOffload;
@property (nonatomic) BOOL httpsProxyIsOpaque;
@property (nonatomic) BOOL httpsProxyOverTLS;
@property (nonatomic) BOOL attachProtocolListener;
@property (nonatomic) BOOL prohibitJoiningProtocols;
@property (nonatomic) BOOL allowJoiningConnectedFd;
@property (nonatomic) BOOL allowDuplicateStateUpdates;
@property (nonatomic) BOOL trustInvalidCertificates;
@property (readonly, copy, nonatomic) NSString *privateDescription;
@property (readonly, nonatomic) unsigned char ipProtocol;
@property (nonatomic) int pid;
@property (nonatomic) unsigned int uid;
@property (copy, nonatomic) NSUUID *processUUID;
@property (copy, nonatomic) NSUUID *effectiveProcessUUID;
@property (copy, nonatomic) NSString *effectiveBundleID;
@property (nonatomic) BOOL useLongOutstandingQueries;
@property (nonatomic) BOOL ignoreResolverStats;
@property (nonatomic) BOOL useAWDL;
@property (nonatomic) BOOL useP2P;
@property (nonatomic) BOOL resolvePTR;
@property (nonatomic) BOOL multipath;
@property (nonatomic) int multipathService;
@property (nonatomic) BOOL multipathForceEnable;
@property (nonatomic) unsigned char requiredAddressFamily;
@property (copy, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSURL *sanitizedURL;
@property (copy, nonatomic) NSDictionary *proxyConfiguration;
@property (retain, nonatomic) NWAddressEndpoint *localAddress;
@property (nonatomic) BOOL reuseLocalAddress;
@property (retain, nonatomic) NWInterface *requiredInterface;
@property (nonatomic) long long requiredInterfaceType;
@property (nonatomic) long long requiredInterfaceSubtype;
@property (nonatomic) long long requiredCompanionProxyInterfaceType;
@property (nonatomic) BOOL enableTFO;
@property (nonatomic) BOOL enableTFONoCookie;
@property (nonatomic) BOOL fastOpenForceEnable;
@property (retain, nonatomic) NSData *metadata;
@property (nonatomic) BOOL prohibitRoaming;
@property (copy, nonatomic) NSArray *protocolTransforms;
@property (nonatomic) BOOL allowUnusableAddresses;
@property (nonatomic) BOOL preferNoProxy;
@property (copy, nonatomic) NSString *account;
@property (nonatomic) unsigned long long dataMode;
@property (nonatomic) unsigned long long trafficClass;
@property (nonatomic) BOOL prohibitExpensivePaths;
@property (nonatomic) BOOL prohibitConstrainedPaths;
@property (nonatomic) BOOL reduceBuffering;
@property (nonatomic) BOOL disableNagleAlgorithm;
@property (nonatomic) BOOL enableTLS;
@property (copy, nonatomic) NSData *TLSSessionID;
@property (copy, nonatomic) NSSet *SSLCipherSuites;
@property (nonatomic) unsigned long long minimumSSLProtocolVersion;
@property (nonatomic) unsigned long long maximumSSLProtocolVersion;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (id)parametersWithCParameters:(id)cparameters;
+ (id)parametersWithProtocolBufferData:(id)data;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)init;
- (id)initWithParameters:(id)parameters;
- (id)copyCParameters;
- (id)descriptionWithIndent:(int)indent showFullContent:(BOOL)content;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)hasDelegatedPIDForOriginatingPID:(int)pid;
- (BOOL)hasDelegatedProcessUUID;
- (BOOL)copyEffectiveAuditToken:(struct { unsigned int x0[8] } *)token;
- (void)prohibitInterfaceType:(long long)type;
- (void)prohibitInterfaceSubtype:(long long)subtype;
- (void)prohibitInterface:(id)interface;
- (void)prohibitNetworkAgentWithUUID:(id)uuid;
- (void)prohibitNetworkAgentsWithDomain:(id)domain type:(id)type;
- (void)requireNetworkAgentWithUUID:(id)uuid;
- (void)requireNetworkAgentWithDomain:(id)domain type:(id)type;
- (void)preferNetworkAgentWithUUID:(id)uuid;
- (void)preferNetworkAgentWithDomain:(id)domain type:(id)type;
- (void)avoidNetworkAgentWithUUID:(id)uuid;
- (void)avoidNetworkAgentWithDomain:(id)domain type:(id)type;
- (unsigned short)tlsVersionWithSSLProtocol:(int)sslprotocol;
- (void)setSourceApplicationWithToken:(struct { unsigned int x0[8] })token;
- (void)setSourceApplicationWithBundleID:(id)id;
- (void)setInitialDataPayload:(id)payload;
- (BOOL)isValid;
- (BOOL)isDiscretionary;
- (BOOL)hasRequiredNetworkAgents;
- (BOOL)hasPreferredNetworkAgents;
- (BOOL)hasProhibitedNetworkAgents;
- (BOOL)hasNonEmptyProxyConfiguration;
- (BOOL)isDryRun;
- (id)copyRequiredAgentsDescription;
- (void)setProtocolAtLevel:(unsigned long long)level protocol:(struct nw_protocol_identifier { char x0[32] int x1; int x2; } *)protocol;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)createProtocolBufferObject;
@end

#endif /* NWParameters_h */
