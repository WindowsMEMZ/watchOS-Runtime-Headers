//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2130.14.1.0.0
//
#ifndef CKDRecordFetchInfo_h
#define CKDRecordFetchInfo_h
@import Foundation;

@class CKRecord, CKRecordID, NSError, NSString;
@protocol OS_dispatch_source;

@interface CKDRecordFetchInfo : NSObject

@property (nonatomic) unsigned long long fetchOrder;
@property (retain, nonatomic) CKRecordID *recordID;
@property (retain, nonatomic) NSString *etag;
@property (readonly, nonatomic) double startDate;
@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) CKRecord *record;
@property (retain, nonatomic) NSError *error;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *recordReadySource;
@property (nonatomic) BOOL ignoreErrors;

/* instance methods */
- (id)initWithAggregator:(id)aggregator;
- (void)performCallback;
- (id)CKPropertiesDescription;
- (id)description;
@end

#endif /* CKDRecordFetchInfo_h */
