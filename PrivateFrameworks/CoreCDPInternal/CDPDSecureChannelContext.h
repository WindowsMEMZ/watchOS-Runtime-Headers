//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 359.4.1.2.1
//
#ifndef CDPDSecureChannelContext_h
#define CDPDSecureChannelContext_h
@import Foundation;

#include "CDPKeychainCircleProxy-Protocol.h"
#include "CDPSecureChannelProxy-Protocol.h"

@class CDPContext;
@protocol CDPDCircleProxy;

@interface CDPDSecureChannelContext : NSObject

@property (retain, nonatomic) NSObject<CDPKeychainCircleProxy> *keychainCircleProxy;
@property (retain, nonatomic) NSObject<CDPSecureChannelProxy> *secureChannelProxy;
@property (retain, nonatomic) NSObject<CDPDCircleProxy> *circleProxy;
@property (readonly, nonatomic) CDPContext *context;
@property (nonatomic) unsigned long long secureChannelType;

/* instance methods */
- (id)initWithContext:(id)context circleProxy:(id)proxy;
- (id)initWithContext:(id)context channel:(id)channel dataProvider:(id)provider circleProxy:(id)proxy;
- (BOOL)initialize:(id *)initialize;
- (BOOL)initializePiggybackingChannel:(id *)channel;
- (void)initializeTTSUChannel;
- (void)dealloc;
@end

#endif /* CDPDSecureChannelContext_h */
