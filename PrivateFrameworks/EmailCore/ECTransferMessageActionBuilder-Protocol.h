//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef ECTransferMessageActionBuilder_Protocol_h
#define ECTransferMessageActionBuilder_Protocol_h
@import Foundation;

@protocol ECTransferMessageActionBuilder <ECLocalMessageActionBuilder>

@property (nonatomic) long long transferType;
@property (retain, nonatomic) NSURL *sourceMailboxURL;
@property (retain, nonatomic) NSURL *destinationMailboxURL;
@property (retain, nonatomic) NSArray *itemsToDownload;
@property (retain, nonatomic) NSArray *itemsToCopy;
@property (retain, nonatomic) NSArray *itemsToDelete;

@end

#endif /* ECTransferMessageActionBuilder_Protocol_h */
