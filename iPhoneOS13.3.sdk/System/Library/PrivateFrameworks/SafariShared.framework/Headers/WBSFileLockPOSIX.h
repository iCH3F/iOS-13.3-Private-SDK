//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/WBSFileLock-Protocol.h>

@interface WBSFileLockPOSIX : NSObject <WBSFileLock>
{
    int _fileDescriptor;
}

- (void)dealloc;
- (void)releaseLock;
- (id)initWithFileDescriptor:(int)arg1;

@end
