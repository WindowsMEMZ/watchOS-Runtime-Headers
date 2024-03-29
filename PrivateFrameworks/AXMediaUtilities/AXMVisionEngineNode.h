//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 127.1.3.0.0
//
#ifndef AXMVisionEngineNode_h
#define AXMVisionEngineNode_h
@import Foundation;

#include "AXMDescribing-Protocol.h"
#include "AXMVisionEngineNodeConnectionDelegate-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSString;
@protocol OS_dispatch_queue;

@interface AXMVisionEngineNode : NSObject<NSSecureCoding, AXMDescribing>

@property (nonatomic) BOOL connected;
@property (weak, nonatomic) NSObject<AXMVisionEngineNodeConnectionDelegate> *delegate;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *nodeQueue;
@property (readonly, nonatomic) BOOL areDiagnosticsEnabled;
@property (readonly, nonatomic) BOOL requiresVisionFramework;
@property (nonatomic) BOOL enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)isSupported;
+ (id)title;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithIdentifier:(id)identifier;
- (void)nodeInitialize;
- (void)freeResources;
- (BOOL)validateVisionKitSoftLinkSymbols;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (void)connect:(id)connect;
- (void)disconnect;
- (id)axmDescription;
- (void)axmAppendRecursiveDescription:(id)description withIndentation:(long long)indentation;
- (BOOL)isConnected;
- (BOOL)isEnabled;
@end

#endif /* AXMVisionEngineNode_h */
