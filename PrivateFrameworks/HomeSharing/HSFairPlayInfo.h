//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.300.2.0.0
//
#ifndef HSFairPlayInfo_h
#define HSFairPlayInfo_h
@import Foundation;

@class NSString;
@protocol OS_dispatch_queue;

@interface HSFairPlayInfo : NSObject {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_sapQueue;
}

@property (readonly, nonatomic) NSString *deviceGUID;

/* instance methods */
- (id)init;
- (void)dealloc;
- (id)beginNegotiationWithSAPVersion:(unsigned int)sapversion;
- (id)continueNegotationWithSAPVersion:(unsigned int)sapversion data:(id)data isComplete:(BOOL *)complete;
- (void)endSecuritySession;
- (id)securityInfoForURL:(id)url;
@end

#endif /* HSFairPlayInfo_h */
