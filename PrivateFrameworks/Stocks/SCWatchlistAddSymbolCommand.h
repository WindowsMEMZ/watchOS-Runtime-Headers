//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 101.0.0.0.0
//
#ifndef SCWatchlistAddSymbolCommand_h
#define SCWatchlistAddSymbolCommand_h
@import Foundation;

#include "SCKZoneCommand-Protocol.h"

@class NSString;

@interface SCWatchlistAddSymbolCommand : NSObject<SCKZoneCommand>

@property (readonly, copy, nonatomic) NSString *symbol;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithSymbol:(id)symbol;
- (void)executeWithZone:(id)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* SCWatchlistAddSymbolCommand_h */
