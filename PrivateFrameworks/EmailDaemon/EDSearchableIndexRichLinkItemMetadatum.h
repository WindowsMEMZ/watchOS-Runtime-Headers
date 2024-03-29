//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef EDSearchableIndexRichLinkItemMetadatum_h
#define EDSearchableIndexRichLinkItemMetadatum_h
@import Foundation;

#include "EDSearchableIndexRichLinkItemMetadatumBuilder-Protocol.h"

@class NSArray, NSDate, NSString;

@interface EDSearchableIndexRichLinkItemMetadatum : NSObject<EDSearchableIndexRichLinkItemMetadatumBuilder>

@property (copy, nonatomic) NSString *domainIdentifier;
@property (copy, nonatomic) NSString *accountIdentifier;
@property (copy, nonatomic) NSArray *mailboxIdentifiers;
@property (copy, nonatomic) NSString *senderAddress;
@property (copy, nonatomic) NSArray *recipientAddresses;
@property (retain, nonatomic) NSDate *dateReceived;
@property (retain, nonatomic) NSDate *dateSent;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *richLinkID;
@property (copy, nonatomic) NSString *url;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithBuilder:(id /* block */)builder;
@end

#endif /* EDSearchableIndexRichLinkItemMetadatum_h */
