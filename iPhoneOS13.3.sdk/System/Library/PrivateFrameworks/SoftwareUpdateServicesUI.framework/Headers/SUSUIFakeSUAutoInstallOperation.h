//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SoftwareUpdateServices/SUAutoInstallOperation.h>

@class NSUUID;

@interface SUSUIFakeSUAutoInstallOperation : SUAutoInstallOperation
{
    BOOL _cancelled;
    NSUUID *_uuid;
}

- (BOOL)isCanceled;
// - (void).cxx_destruct;
- (void)cancel;
- (BOOL)isExpired;
- (id)id;
- (id)forecast;

@end

