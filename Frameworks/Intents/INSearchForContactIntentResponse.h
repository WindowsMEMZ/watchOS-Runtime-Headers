//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2201.0.2.0.0
//
#ifndef INSearchForContactIntentResponse_h
#define INSearchForContactIntentResponse_h
@import Foundation;

#include "INIntentResponse.h"
#include "INSearchForContactIntentResponseExport-Protocol.h"

@class NSArray, NSString;

@interface INSearchForContactIntentResponse : INIntentResponse<INSearchForContactIntentResponseExport>

@property (readonly, nonatomic) long long code;
@property (copy, nonatomic) NSArray *matchedContacts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (long long)_codeFromType:(int)type errorCode:(int)code appLaunchRequested:(BOOL)requested;
+ (int)_typeFromCode:(long long)code;
+ (int)_errorCodeFromCode:(long long)code;
+ (BOOL)_appLaunchRequestedFromCode:(long long)code;

/* instance methods */
- (id)init;
- (id)initWithCode:(long long)code userActivity:(id)activity;
- (id)_initWithCode:(long long)code userActivity:(id)activity;
- (id)initWithBackingStore:(id)store;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (long long)_intentResponseCode;
- (long long)_codeWithName:(id)name;
- (id)_dictionaryRepresentation;
- (id)propertiesByName;
- (void)setPropertiesByName:(id)name;
@end

#endif /* INSearchForContactIntentResponse_h */
