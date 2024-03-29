//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1299.2.3.1.0
//
#ifndef LSMIResultUnregistrant_h
#define LSMIResultUnregistrant_h
@import Foundation;

#include "LSMIResultRegistrantStrategy-Protocol.h"
#include "LSPrecondition.h"

@class NSString, NSUUID;

@interface LSMIResultUnregistrant : NSObject {
  /* instance variables */
  NSObject<LSMIResultRegistrantStrategy> *_strategy;
  NSUUID *_uuid;
  NSString *_bundleID;
  LSPrecondition *_precondition;
  unsigned int _type;
}

/* instance methods */
- (id)initWithContext:(id)context operationUUID:(id)uuid bundleIdentifier:(id)identifier precondition:(id)precondition type:(unsigned int)type;
- (void)runWithCompletion:(id /* block */)completion;
@end

#endif /* LSMIResultUnregistrant_h */
