//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2130.14.1.0.0
//
#ifndef CKDAnonymousShareAddURLRequest_h
#define CKDAnonymousShareAddURLRequest_h
@import Foundation;

#include "CKDURLRequest.h"

@class NSDictionary, NSMutableDictionary;

@interface CKDAnonymousShareAddURLRequest : CKDURLRequest

@property (retain, nonatomic) NSDictionary *encryptedAnonymousSharesToAdd;
@property (retain, nonatomic) NSMutableDictionary *encryptedAnonymousShareHashToAddByRequestID;
@property (copy, nonatomic) id /* block */ anonymousShareSavedBlock;

/* instance methods */
- (BOOL)requiresCKAnonymousUserIDs;
- (id)initWithOperation:(id)operation encryptedAnonymousSharesToAdd:(id)add;
- (void)fillOutEquivalencyPropertiesBuilder:(id)builder;
- (id)requestOperationClasses;
- (id)generateRequestOperations;
- (id)requestDidParseProtobufObject:(id)object;
@end

#endif /* CKDAnonymousShareAddURLRequest_h */
