//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1814.300.81.4.2
//
#ifndef IDSSocketPairMessageProtocol_Protocol_h
#define IDSSocketPairMessageProtocol_Protocol_h
@import Foundation;

@protocol IDSSocketPairMessageProtocol 

@property (nonatomic) unsigned int sequenceNumber;
@property (nonatomic) unsigned short streamID;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) BOOL wantsAppAck;
@property (readonly, nonatomic) BOOL expectsPeerResponse;
@property (readonly, nonatomic) BOOL didWakeHint;
@property (readonly, nonatomic) NSString *peerResponseIdentifier;
@property (readonly, nonatomic) NSString *messageUUID;
@property (retain, nonatomic) NSDate *expiryDate;

@end

#endif /* IDSSocketPairMessageProtocol_Protocol_h */
