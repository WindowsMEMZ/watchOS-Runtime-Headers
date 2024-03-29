//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3762.60.29.0.0
//
#ifndef NWURLLoaderData_h
#define NWURLLoaderData_h
@import Foundation;

#include "NWURLLoader-Protocol.h"
#include "OS_nw_connection-Protocol.h"

@class NSString, NSURL;
@protocol OS_dispatch_data, OS_sec_trust;

@interface NWURLLoaderData : NSObject<NWURLLoader> {
  /* instance variables */
  NSURL *_URL;
  NSObject<OS_dispatch_data> *_data;
  NSString *_MIMEType;
  NSString *_textEncodingName;
  unsigned long long _offset;
}

@property (readonly, nonatomic) NSObject<OS_sec_trust> *peerTrust;
@property (readonly, nonatomic) BOOL allowsWrite;
@property (readonly, nonatomic) NSObject<OS_nw_connection> *underlyingConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)start:(id /* block */)start;
- (void)stop;
- (void)updateClient:(id)client;
- (void)readResponse:(id /* block */)response;
- (void)readDataOfMinimumIncompleteLength:(unsigned long long)length maximumLength:(unsigned long long)length completionHandler:(id /* block */)handler;
- (void)writeData:(id)data complete:(BOOL)complete completionHandler:(id /* block */)handler;
- (void)responseIsMixed;
@end

#endif /* NWURLLoaderData_h */
