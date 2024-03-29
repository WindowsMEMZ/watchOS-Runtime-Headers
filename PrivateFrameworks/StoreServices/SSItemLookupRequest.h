//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1450.2.4.0.0
//
#ifndef SSItemLookupRequest_h
#define SSItemLookupRequest_h
@import Foundation;

#include "SSRequest.h"
#include "SSXPCCoding-Protocol.h"

@class NSDictionary, NSMutableDictionary, NSString;
@protocol SSItemLookupRequestDelegate;

@interface SSItemLookupRequest : SSRequest<SSXPCCoding>

@property (readonly, copy) NSDictionary *parameters;
@property (@dynamic, nonatomic) NSObject<SSItemLookupRequestDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)setValue:(id)value forParameter:(id)parameter;
- (void)startWithItemLookupBlock:(id /* block */)block;
- (id)valueForParameter:(id)parameter;
- (BOOL)start;
- (void)startWithCompletionBlock:(id /* block */)block;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)xpcencoding;
- (id)copyQueryStringParameters;
- (id)_copyItemsFromResponse:(id)response expirationDate:(id)date;
- (id)_convertedValueForValue:(id)value;
- (id)_errorForStatusCode:(long long)code;
@end

#endif /* SSItemLookupRequest_h */
