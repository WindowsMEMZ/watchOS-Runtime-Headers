//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef _MFDataCollector_h
#define _MFDataCollector_h
@import Foundation;

#include "MFGuaranteedCollectingDataConsumer-Protocol.h"
#include "MFLibraryMessage.h"
#include "MFMailMessageLibrary.h"

@class MFBufferedDataConsumer, NSString;

@interface _MFDataCollector : NSObject<MFGuaranteedCollectingDataConsumer> {
  /* instance variables */
  MFMailMessageLibrary *_library;
  MFLibraryMessage *_message;
  MFBufferedDataConsumer *_consumer;
  NSString *_part;
  BOOL _partial;
  BOOL _incomplete;
  BOOL _relaxDataProtection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithLibrary:(id)library message:(id)message part:(id)part partial:(BOOL)partial incomplete:(BOOL)incomplete relaxDataProtection:(BOOL)protection;
- (id)pathForStorage;
- (long long)appendData:(id)data;
- (void)done;
- (id)data;
@end

#endif /* _MFDataCollector_h */
