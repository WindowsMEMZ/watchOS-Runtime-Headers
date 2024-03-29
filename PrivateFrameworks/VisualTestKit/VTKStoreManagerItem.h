//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 5.0.0.0.0
//
#ifndef VTKStoreManagerItem_h
#define VTKStoreManagerItem_h
@import Foundation;

#include "VTKStoreManagerItem-Protocol.h"
#include "VTKTestAttachment-Protocol.h"

@class NSData, NSString;

@interface VTKStoreManagerItem : NSObject<VTKStoreManagerItem, VTKTestAttachment>

@property (readonly, nonatomic) NSString *fileExtension;
@property (readonly, nonatomic) unsigned long long itemType;
@property (readonly, nonatomic) NSData *itemData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)itemWithView:(id)view;

/* instance methods */
- (id)initWithData:(id)data itemType:(unsigned long long)type;
- (id)fileNameWithTestID:(id)id;
- (id)attachWithThestID:(id)id;
@end

#endif /* VTKStoreManagerItem_h */
