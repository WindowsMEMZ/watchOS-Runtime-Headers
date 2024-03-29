//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1814.300.81.4.2
//
#ifndef IDSCloudKitContainer_h
#define IDSCloudKitContainer_h
@import Foundation;

#include "IDSCKContainer.h"
#include "IDSCloudKitGroupServer.h"
#include "IDSCloudKitKeyElectionStore.h"
#include "IDSCloudKitKeyValueStore.h"
#include "IDSCloudKitTransportLog.h"

@class NSString;
@protocol OS_dispatch_queue;

@interface IDSCloudKitContainer : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) IDSCKContainer *container;
@property (readonly, nonatomic) NSString *containerIdentifier;
@property (readonly, nonatomic) IDSCloudKitKeyValueStore *keyValueStore;
@property (readonly, nonatomic) IDSCloudKitGroupServer *publicGroupServer;
@property (readonly, nonatomic) IDSCloudKitGroupServer *privateGroupServer;
@property (readonly, nonatomic) IDSCloudKitTransportLog *transportLog;
@property (readonly, nonatomic) IDSCloudKitKeyElectionStore *keyElectionStore;

/* instance methods */
- (id)initWithIdentifier:(id)identifier queue:(id)queue;
@end

#endif /* IDSCloudKitContainer_h */
