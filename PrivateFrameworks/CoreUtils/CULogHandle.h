//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 730.8.0.0.0
//
#ifndef CULogHandle_h
#define CULogHandle_h
@import Foundation;

@class NSString;

@interface CULogHandle : NSObject {
  /* instance variables */
  NSString *_categoryName;
  struct LogCategory { int x0; int x1; char * x2; unsigned int x3; char * x4; char * x5; int x6; struct LogCategory * x7; struct LogOutput * x8; struct LogOutput * x9; unsigned long long x10; unsigned long long x11; unsigned int x12; unsigned int x13; char * x14; struct LogCategoryPrivate * x15; } * _ucatPtr;
}

@property (copy, nonatomic) NSString *label;

/* instance methods */
- (id)initWithSubsystem:(id)subsystem category:(id)category logLevel:(int)level logFlags:(unsigned int)flags;
- (id)initWithSubsystem:(id)subsystem category:(id)category logLevel:(int)level;
- (id)initWithSubsystem:(id)subsystem category:(id)category logFlags:(unsigned int)flags;
- (id)initWithSubsystem:(id)subsystem category:(id)category;
- (void)dealloc;
- (void)ulog:(int)ulog message:(id)message;
- (void)ulogf:(int)ulogf format:(id)format;
- (void)ulogv:(int)ulogv format:(id)format args:(char *)args;
@end

#endif /* CULogHandle_h */
