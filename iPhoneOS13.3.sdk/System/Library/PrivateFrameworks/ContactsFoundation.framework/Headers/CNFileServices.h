//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsFoundation/CNFileServices-Protocol.h>

@interface CNFileServices : NSObject <CNFileServices>
{
}

+ (id)sharedInstance;
- (int)dlclose:(void )arg1;
- (void )dlsym:(void )arg1:(const char )arg2;
- (void )dlopen:(const char )arg1:(int)arg2;
- (id)NSTemporaryDirectory;
- (int)fcntl_flock:(int)arg1:(int)arg2:(struct flock )arg3;
- (int)flock:(int)arg1:(int)arg2;
- (int)fstatfs:(int)arg1:(struct statfs )arg2;
- (int)statfs:(const char )arg1:(struct statfs )arg2;
- (int)close:(int)arg1;
- (int)open:(const char )arg1:(int)arg2:(unsigned short)arg3;
- (int)errnoValue;

@end

