//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 22.0.0.0.0
//
#ifndef MFMessageTransferResult_h
#define MFMessageTransferResult_h
@import Foundation;

@class NSArray;

@interface MFMessageTransferResult : NSObject

@property (readonly, nonatomic) unsigned long long resultCode;
@property (readonly, nonatomic) NSArray *failedMessages;
@property (readonly, nonatomic) NSArray *transferedMessages;

/* instance methods */
- (id)initWithResultCode:(unsigned long long)code failedMessages:(id)messages transferedMessage:(id)message;
- (void)dealloc;
- (id)debugDescription;
@end

#endif /* MFMessageTransferResult_h */
