//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDDataStreamControlProtocol_h
#define HMDDataStreamControlProtocol_h
@import Foundation;

#include "HMDDataStreamProtocol-Protocol.h"
#include "HMFLogging-Protocol.h"

@class NSNumber, NSString;

@interface HMDDataStreamControlProtocol : NSObject<HMFLogging, HMDDataStreamProtocol>

@property (readonly, copy) NSString *logIdentifier;
@property (retain, nonatomic) NSNumber *pendingHelloMessageIdentifier;
@property (nonatomic) BOOL helloMessageResponseReceived;
@property (nonatomic) BOOL controlHandshakeComplete;
@property (retain, nonatomic) NSNumber *peerDataStreamProtocolVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL active;

/* class methods */
+ (id)logCategory;

/* instance methods */
- (id)initWithLogIdentifier:(id)identifier;
- (BOOL)isActive;
- (void)dataStreamDidOpen:(id)open;
- (void)dataStreamInitiatedClose:(id)close;
- (void)dataStreamDidClose:(id)close;
- (void)dataStream:(id)stream didFailWithError:(id)error;
- (void)dataStream:(id)stream didReceiveEvent:(id)event header:(id)header payload:(id)payload;
- (void)dataStream:(id)stream didReceiveRequest:(id)request header:(id)header payload:(id)payload;
- (BOOL)isExpectedHelloControlMessage:(id)message header:(id)header;
- (void)dataStream:(id)stream didReceiveResponse:(id)response header:(id)header payload:(id)payload;
- (void)_sendHelloMessageOnDataStream:(id)stream;
- (void)_sendVersionRequestOnDataStream:(id)stream;
@end

#endif /* HMDDataStreamControlProtocol_h */
